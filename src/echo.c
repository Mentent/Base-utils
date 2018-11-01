/*
 * echo.c - 2018/10/27 - 荷兰豆实用程序
 * 版权所有 (C) 2018 Mentent,保留所有权利。
 * Copyright (C) 2018 Mentent,all rights reserved.
 */

#include <stdio.h>
#include <config.h>
#include <stdlib.h>
#include <string.h>

#define PROGRAM_NAME "echo"

void usage()
{
	fprintf(stdout,"\
用法: %s [选项] [字符串] \n\
将字符串再次输出到标准输出上。\n\
选项:\n\
    --version,-v       打印程序版本信息。\n\
    --help,-h          打印此帮助文件并退出。\n\n\
若发现 Bug 或有改进建议与意见,请提交给我们: %s \n",PROGRAM_NAME,DEVELOPER_EMAIL);
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

	int i;
	i = 1;

	while(i <= argc){
		printf("%s\n",argv[i]);
		i ++;
	}
	return 0;
}
