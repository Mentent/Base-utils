/*
 * yes.c - 2018/10/27 - 荷兰豆实用程序 
 * 版权所有 (C) 2018 Mentent,保留所有权利。 
 * Copyright (C) 2018 Mentent,all rights reserved.
 */
 
#include <config.h>
#include <stdio.h>

#define PROGRAM_NAME "yes"

void usage()
{
	fprintf(stdout,"\
用法: %s [选项] \"字符串\"\n\
不断输出\"y\"，直到程序终止。\n",PROGRAM_NAME);
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

