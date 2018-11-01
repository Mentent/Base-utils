/*
 * echo.c - 2018/10/27 - ������ʵ�ó���
 * ��Ȩ���� (C) 2018 Mentent,��������Ȩ����
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
�÷�: %s [ѡ��] [�ַ���] \n\
���ַ����ٴ��������׼����ϡ�\n\
ѡ��:\n\
    --version,-v       ��ӡ����汾��Ϣ��\n\
    --help,-h          ��ӡ�˰����ļ����˳���\n\n\
������ Bug ���иĽ����������,���ύ������: %s \n",PROGRAM_NAME,DEVELOPER_EMAIL);
}

void version()
{
	printf("��Ȩ���� (C) 2018 Mentent.��������Ȩ����\n");
	printf("Base-utils %s,�汾: %s\n",PROGRAM_NAME,PACKAGE_VERSION);
}

int main(int argc,char *argv [])
{
	int i;
	if( argc == 2)
	{
		//���� strcmp �������߼��������� (string.h)
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
		else//��ֹ�ղ���
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
