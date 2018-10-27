/*
 * echo.c - 2018/10/27 - 荷兰豆实用程序 
 * 版权所有 (C) 2018 Mentent,保留所有权利。 
 * Copyright (C) 2018 Mentent,all rights reserved.
 */

#include <extra.h>
#include <stdio.h>
#include <config.h>
#include <stdlib.h>
#include <string.h>

#define PROGRAM_NAME "echo"


void usage()
{
	fprintf(stdout,"\
用法: %s [选项] \"字符串\"\n\
将字符串再次输出到标准输出上。\n",PROGRAM_NAME);
}

void version()
{
	printf("版权所有 (C) 2018 Mentent.保留所有权利。\n"); 
	printf("Base-utils %s,版本: %s\n",PROGRAM_NAME,PACKAGE_VERSION);
}

int main(int argc,char *argv [])
{
	if( argc == 2)
	//无 if 的情况下会导致strcmp函数访问不存在的argv[1]而触发 Segmentation Fault。
	//使用 while 可能会因无符合条件的字符串而陷入死循环 
	{
		//利用 strcmp 函数处理长参数 ( string.h )
		if( strcmp(argv[1],"--version") == 0){
			version();
			exit(0);// stdlib.h
		}
		if( strcmp(argv[1],"--help") == 0){
			usage();
			exit(0);
		}
	}
	
	int ch;
	//使用 getopt 函数接收参数 ( unistd.h ) 
	while ((ch = getopt(argc, argv, "hv")) != -1)
		switch (ch) {
		case 'h':
			usage();
			exit(0);
		case 'v':
			version();
			exit(0);
		default:
			usage();
			exit(1);
		}
		
	int i;
	i = 1;
	
	while(i <= argc){
		printf("%s\n",argv[i]);
		i ++;
	}
	return 0;
}
