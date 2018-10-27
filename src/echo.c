/*
 * echo.c - 2018/09/22 - ������ʵ�ó��� 
 * ��Ȩ���� (C) 2018 Mentent,��������Ȩ���� 
 * Copyright (C) 2018 Mentent,all rights reserved.
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define PROGRAM_NAME "echo"
#define VERSION "2.2.1.20180928.RELEASE"

void usage();
void version();

int main(int argc,char *argv []){
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

	int i;
	i = 1;
	
	while(i <= argc){
		printf("%s\n",argv[i]);
		i ++;
	}
	return 0;
}

void usage(){
	fprintf(stdout,"\
�÷�: %s [ѡ��] \"�ַ���\"\n\
���ַ����ٴ��������׼����ϡ�\n",PROGRAM_NAME);
}

void version(){
	printf("��Ȩ���� (C) 2018 Mentent.��������Ȩ����\n"); 
	printf("������ʵ�ó��� %s,�汾: %s\n",PROGRAM_NAME,VERSION);
	printf("ʹ�� MinGW-W64 ��Ŀ������\n");
}