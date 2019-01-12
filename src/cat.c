// cat.c - 2018/10/27
// Copyright (C) 2018,2019 Mentent,all rights reserved.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <config.h>

#define PROGRAM_NAME "cat"
#define HELP_MESSAGE "用法："PROGRAM_NAME" [选项] [文件名]\n\
连接文件到标准输出。\n\
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
