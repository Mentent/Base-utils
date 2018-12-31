/*
 * yes.c - 2018/10/27 - 荷兰豆实用程序
 * 版权所有 (C) 2018 Mentent,保留所有权利。
 * Copyright (C) 2018 Mentent,all rights reserved.
 */

#include <config.h>
#include <stdio.h>

#define PROGRAM_NAME "yes"
#define HELP_MESSAGE ""PROGRAM_NAME" "VER_NUM" "VER_TAG"\n\
版权所有 (C) 2018 Mentent.保留所有权利.\n\
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
	while(1)
	{
		printf("y\n");
	}
	return 0;
}
