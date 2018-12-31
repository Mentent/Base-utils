/*
 * cat.c - 2018/10/27 - ������ʵ�ó���
 * ��Ȩ���� (C) 2018 Mentent,��������Ȩ����
 * Copyright (C) 2018 Mentent,all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/config.h"

#define PROGRAM_NAME "cat"
#define HELP_MESSAGE ""PROGRAM_NAME" "VER_NUM" "VER_TAG"\n\
��Ȩ���� (C) 2018 Mentent.��������Ȩ��.\n\
�÷�:\n\
  --help,-h		��ʾ�˰����ļ���\n\
  --version,-v		��ʾ����汾��Ϣ��\n\
��㱨 Bugs �� "DEVELOPER_EMAIL""

void usage()
{
	fprintf(stdout,HELP_MESSAGE);
}

void version()
{
	printf("Base-utils %s,�汾: %s\n",PROGRAM_NAME,VER_NUM);
	printf("��Ȩ���� (C) 2018 Mentent.��������Ȩ����\n");
}

int main(int argc,char *argv [])
{
	if( argc == 1) //��ֹ�û������������ʱ������Ȼ�����ƽ�
	{
		printf("�������١�\n");
		exit(1);
	}

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


	int ch;
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
