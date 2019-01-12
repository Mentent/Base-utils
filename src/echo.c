// echo.c - 2018/10/27
// Copyright (C) 2018,2019 Mentent,all rights reserved

#include <stdio.h>
#include <config.h>
#include <stdlib.h>
#include <string.h>

#define PROGRAM_NAME "echo"
#define HELP_MESSAGE "用法："PROGRAM_NAME" [选项] [字符串]\n\
重复输出。\n\
选项:\n\
  --help,-h		显示此帮助文件。\n\
  --version,-v		显示程序版本信息。\n\
\
版权所有 (C) 2018,2019 Mentent.保留所有权利.\n\
请汇报 Bugs 到 "DEVELOPER_EMAIL"\n"

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
	if( argc == 1)
	{
		printf("参数过少。\n");
		exit(1);
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
		else{}
    }
	
	int i;
	i = 1;

	while(i <= argc)
    {
		printf("%s\n",argv[i]);
		i ++;
	}
    return 0;
}
