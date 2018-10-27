/*
 * cat.c - 2018/10/26 - ������ʵ�ó��� 
 * ��Ȩ���� (C) 2018 Mentent,��������Ȩ���� 
 * Copyright (C) 2018 Mentent,all rights reserved.
 */
 
#include "../config.h"	//��2.2�汾���configure.ac�ű��л�ȡ�汾��
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define PROGRAM_NAME "cat"

void usage()
{
	fprintf(stdout,"\
�÷�: %s [ѡ��] [�ļ���]\n\
�����ļ�����ӡ����׼����豸�ϡ�",PROGRAM_NAME);
}

void version()
{
	printf("��Ȩ���� (C) 2018 Mentent.��������Ȩ����\n"); 
	printf("Base-utils %s,�汾: %s\n",PROGRAM_NAME,PACKAGE_VERSION);
}

int main(int argc,char *argv [])
{
	if( argc == 1) //��ֹ�û������������ʱ������Ȼ�����ƽ� 
	{
		printf("�������١�\n");
		exit(1); 
	}
	
	if( argc == 2)
	//�� if ������»ᵼ��strcmp�������ʲ����ڵ�argv[1]������ Segmentation Fault��
	//ʹ�� while ���ܻ����޷����������ַ�����������ѭ�� 
	{
		//���� strcmp ������������ ( string.h )
		if( strcmp(argv[1],"--version") == 0)
		{
			version();
			exit(0);// stdlib.h
		}
		if( strcmp(argv[1],"--help") == 0)
		{
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
		
	FILE *fp;
	unsigned long count = 0;
	
	if((fp = fopen(argv[1],"r")) == NULL)
	{
		printf("���ļ� %s ʧ�ܡ�\n",argv[1]);
		printf("���� --help ������ȡ������\n");
		exit(0);
	} 
	
	while((ch = getc(fp)) != EOF)//����ȡ�� End Of File ʱֹͣ 
	{
		putc(ch,stdout);
		count ++;
	}
	fclose(fp);//fclose �����ر��ļ� 
	printf("�ļ� %s �к��� %lu ���ַ���\n",argv[1],count);//������ 

	return 0;
}		

