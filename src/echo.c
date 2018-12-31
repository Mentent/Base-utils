/*
 * echo.c - 2018/10/27
 * Copyright (C) 2018 Mentent,all rights reserved.
 */

#include <stdio.h>
#include <config.h>
#include <stdlib.h>
#include <string.h>

#define PROGRAM_NAME "echo"
#define HELP_MESSAGE ""PROGRAM_NAME" "VER_NUM" "VER_TAG"\n\
��Ȩ���� (C) 2018 Mentent.��������Ȩ��.\n\
�ظ������\n\
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

	int j;
	j = 1;

	while(j <= argc){
		printf("%s\n",argv[j]);
		j ++;
	}
	return 0;
}
