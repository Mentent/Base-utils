#include <stdio.h>
#include <extra.h>
#include <string.h>

int optind = 0, optopt, opterr = 1;
char *optarg;

int getopt(int argc, char *argv[], const char *optstring)
{
	static int i = 1;
	int j;
	char optc;

	optind = (optind == 0 ? 1 : optind);

	if ((argv[optind] != NULL) && (strcmp(argv[optind], "--")) && (argv[optind][0] == '-')) {
		if ((optc = argv[optind][i]) != '\0')
		{
			for (j = 0; optstring[j] != '\0'; j++)
			{
				if (optc == optstring[j])
					break;
			}
			if (optstring[j] == '\0') /* invalid argument */
			{
				optopt = argv[optind][i];
				if (optstring[0] != ':' && opterr != 0)
					printf("参数 %c 不正确。\n", optopt);
				if (argv[optind][i + 1] == '\0')
				{
					i = 1;
					optind++;
				}
				else
					i++;
				return '?';
			}
			if (optstring[j + 1] == ':')
			{ /* hav argument */
				if (argv[optind][i + 1] == '\0'
					&& ((argv[optind + 1] == NULL)
						|| argv[optind + 1][0] == '-'))
				{
					if (optstring[0] != ':' &&  opterr != 0)
						printf("参数语法不正确。\n");
					if (argv[optind][i + 1] == '\0')
					{
						i = 1;
						optind++;
					}
					else
						i++;
					return ':';
				}

				if (argv[optind][i + 1] == '\0')
				{
					optarg = argv[++optind];
				}
				else
				{
					optarg = &argv[optind][i + 1];
				}
				optind++;
				i = 1;
				return optc;
			}

			if (argv[optind][i + 1] == '\0') 			/* no argument */
			{
				i = 1;
				optind++;
			}
			else
				i++;
			return optc;
		}
	}
	return 1;
}
