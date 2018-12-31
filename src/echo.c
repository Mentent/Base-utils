/*
 * echo.c - 2018/10/27
 * Copyright (C) 2018 Mentent,all rights reserved.
 */

#include <stdio.h>
#include <config.h>
#include <stdlib.h>
#include <string.h>

#define PROGRAM_NAME "echo"
#define HELP_MESSAGE ""PROGRAM_NAME" "VER_NUM" "VER_TAG"\n\
版权所有 (C) 2018 Mentent.保留所有权利.\n\
重复输出。\n\
用法:\n\
  --help,-h		显示此帮助文件。\n\
  --version,-v		显示程序版本信息。\n\
请汇报 Bugs 到 "DEVELOPER_EMAIL""
void usage()
{
	fprintf(stdout,HELP_MESSAGE);
}

void version()
{
	printf("版权所有 (C) 2018 Mentent.保留所有权利。\n");
	printf("Base-utils %s,版本: %s\n",PROGRAM_NAME,PACKAGE_VERSION);
}

int main(int argc,char *argv [])
{
	int i;
	if( argc == 2)
	{
		//利用 strcmp 函数和逻辑或处理长参数 (string.h)
		if(strcmp(argv[1],"--version") == 0 || strcmp(argv[1],"-v") == 0)
		{
			version();
			exit(0);
		}
		if(strcmp(argv[1],"--help") == 0 || strcmp(argv[1],"-h") == 0)
		{
			usage();
			exit(0);
		}
		else//防止空参数
		{
			i = 1100;
		}
	}

	int j;
	j = 1;

	while(j <= argc){
		printf("%s\n",argv[j]);
		j ++;
	}
	return 0;
}
