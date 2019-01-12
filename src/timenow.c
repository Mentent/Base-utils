// timenow.c - 2018/10/27
// Copyright (C) 2018,2019 Mentent,all rights reserved

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <config.h>

#define PROGRAM_NAME "timenow"
#define HELP_MESSAGE ""PROGRAM_NAME"\n\
显示当前时间。\n\
\
版权所有 (C) 2018,2019 Mentent.保留所有权利.\n\
请汇报 Bugs 到 "DEVELOPER_EMAIL"\n"

void usage(){
	fprintf(stdout,HELP_MESSAGE);
}

void version()
{
	printf("Base-utils %s %s %s\n",PROGRAM_NAME,VER_NUM,VER_TAG);
}

int main(int argc,char *argv [])
{
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
		else{}
	}

	time_t timer;
	struct tm *tblock;
	timer = time(NULL);
	tblock = localtime(&timer);

	printf("当前时间: %s",asctime(tblock));

	return 0;
}
