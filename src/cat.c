/*
 * cat.c - 2018/10/27 - 荷兰豆实用程序
 * 版权所有 (C) 2018 Mentent,保留所有权利。
 * Copyright (C) 2018 Mentent,all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/config.h"

#define PROGRAM_NAME "cat"

void usage()
{
	fprintf(stdout,"\
用法: %s [选项] [文件名] \n\
连接文件并打印到标准输出设备上。\n\n\
选项:\n\
    --version,-v       打印程序版本信息。\n\
    --help,-h          打印此帮助文件并退出。\n\n\
若发现 Bug 或有改进建议与意见,请提交给我们: %s \n",PROGRAM_NAME,DEVELOPER_EMAIL);\
}

void version()
{
	printf("Base-utils %s,版本: %s\n",PROGRAM_NAME,PACKAGE_VERSION);
	printf("版权所有 (C) 2018 Mentent.保留所有权利。\n");
}

int main(int argc,char *argv [])
{
	if( argc == 1) //防止用户输入参数出错时程序仍然继续推进
	{
		printf("参数过少。\n");
		exit(1);
	}

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


	int ch;
	FILE *fp;
	unsigned long count = 0;

	if((fp = fopen(argv[1],"r")) == NULL)
	{
		printf("打开文件 %s 失败。\n",argv[1]);
		printf("调用 --help 参数获取帮助。\n");
		exit(0);
	}

	while((ch = getc(fp)) != EOF)//当读取到 End Of File 时停止
	{
		putc(ch,stdout);
		count ++;
	}
	fclose(fp);//fclose 函数关闭文件
	printf("文件 %s 中含有 %lu 个字符。\n",argv[1],count);//计数器

	return 0;
}
