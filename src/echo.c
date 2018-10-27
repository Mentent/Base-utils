/*
 * echo.c - 2018/10/27 - ������ʵ�ó��� 
 * ��Ȩ���� (C) 2018 Mentent,��������Ȩ���� 
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
�÷�: %s [ѡ��] \"�ַ���\"\n\
���ַ����ٴ��������׼����ϡ�\n",PROGRAM_NAME);
}

void version()
{
	printf("��Ȩ���� (C) 2018 Mentent.��������Ȩ����\n"); 
	printf("Base-utils %s,�汾: %s\n",PROGRAM_NAME,PACKAGE_VERSION);
}

int main(int argc,char *argv [])
{
	if( argc == 2)
	//�� if ������»ᵼ��strcmp�������ʲ����ڵ�argv[1]������ Segmentation Fault��
	//ʹ�� while ���ܻ����޷����������ַ�����������ѭ�� 
	{
		//���� strcmp ������������ ( string.h )
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
	//ʹ�� getopt �������ղ��� ( unistd.h ) 
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
