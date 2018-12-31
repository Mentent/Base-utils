/*
 * timenow.c - 2018/10/27
 * Copyright (C) 2018 Mentent,all rights reserved
 */

#include <config.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PROGRAM_NAME "timenow"
#define HELP_MESSAGE ""PROGRAM_NAME" "VER_NUM" "VER_TAG"\n\
��Ȩ���� (C) 2018 Mentent.��������Ȩ��.\n\
��ʾ��ǰʱ�䡣\n\
�÷�:\n\
  --help,-h		��ʾ�˰����ļ���\n\
  --version,-v		��ʾ����汾��Ϣ��\n\
��㱨 Bugs �� "DEVELOPER_EMAIL""

void usage(){
	fprintf(stdout,HELP_MESSAGE);
}

void version()
{
	printf("��Ȩ���� (C) 2018 Mentent.��������Ȩ����\n");
	printf("Baseutils %s,�汾: %s\n",PROGRAM_NAME,PACKAGE_VERSION);
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

	time_t timer;
	struct tm *tblock;
	timer = time(NULL);
	tblock = localtime(&timer);

	printf("��ǰʱ��: %s",asctime(tblock));

	return 0;
}
