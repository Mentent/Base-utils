/*
 * yes.c - 2018/10/27 - ������ʵ�ó��� 
 * ��Ȩ���� (C) 2018 Mentent,��������Ȩ���� 
 * Copyright (C) 2018 Mentent,all rights reserved.
 */
 
#include <config.h>
#include <stdio.h>

#define PROGRAM_NAME "yes"

void usage()
{
	fprintf(stdout,"\
�÷�: %s [ѡ��] \"�ַ���\"\n\
�������\"y\"��ֱ��������ֹ��\n",PROGRAM_NAME);
}

void version()
{
	printf("��Ȩ���� (C) 2018 Mentent.��������Ȩ����\n"); 
	printf("Base-utils %s,�汾: %s\n",PROGRAM_NAME,PACKAGE_VERSION);
}

int main(int argc,char *argv [])
{
	while(1)
	{
		printf("y\n");
	}
	return 0;
}

