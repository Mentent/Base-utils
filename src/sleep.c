// Copyright (C) 2018,2019.
// Mentent. All rights reserved.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <config.h>

#define PROGRAM_NAME "sleep"
#define HELP_MESSAGE "用法："PROGRAM_NAME" [秒数]\n暂停终端一段时间。\n"

void usage()
{
	fprintf(stdout,HELP_MESSAGE);
}

void version()
{
	printf("Base-utils %s %s %s\n",PROGRAM_NAME,VER_NUM,VER_TAG);
}

int main(int argc,char *argv [])
{
    if(argc<2)
    {
            printf("参数有异常。\n请调用 -h 查看帮助\n");
            exit(0);
    }
	if( argc == 2)
	{
		if(strcmp(argv[1],"--version") == 0 || strcmp(argv[1],"-v") == 0 || strcmp(argv[1],"--v") == 0)
		{
			version();
			exit(0);
		}
		if(strcmp(argv[1],"--help") == 0 || strcmp(argv[1],"-h") == 0 || strcmp(argv[1],"--h") == 0)
		{
			usage();
			exit(0);
		}
    }
    sleep(atoi(argv[1]));
	return 0;
}
