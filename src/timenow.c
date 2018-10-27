/*
 * timenow.c - 2018/10/27 - 荷兰豆实用程序
 * 版权所有 (C) 2018 Mentent,保留所有权利。 
 * Copyright (C) 2018 Mentent,all rights reserved
 */
 
#include <config.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PROGRAM_NAME "timenow"

void usage(){
	fprintf(stdout,"\
用法: %s \n\
从操作系统获取本地时间并输出。",PROGRAM_NAME);
}

void version()
{
	printf("版权所有 (C) 2018 Mentent.保留所有权利。\n"); 
	printf("Baseutils %s,版本: %s\n",PROGRAM_NAME,PACKAGE_VERSION);
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
	
	time_t timer;
	struct tm *tblock;
	timer = time(NULL);
	tblock = localtime(&timer);

	printf("当前时间: %s",asctime(tblock));
	
	return 0;
}
