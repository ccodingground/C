#include<stdio.h>
#include<string.h>
struct person {
	char name[20];
	char phone[20];
	int age;
};


int main() {
	struct person m1, m2;

	strcpy_s(m1.name, sizeof(m1.name), "���μ�");
	strcpy_s(m1.phone, sizeof(m1.phone), "010-3039-0089");
	m1.age = 20;

	printf("�̸� : ");
	gets_s((m2.name), sizeof(m2.name));
	printf("��ȭ : ");
	gets_s(m2.phone, sizeof(m2.phone));
	printf("���� : ");
	scanf_s("%d", &m2.age);

	printf("�̸� : %s\n", m1.name);
	printf("��ȭ : %s\n", m1.phone);
	printf("���� : %d\n", m1.age);
	puts("");

	printf("�̸� : %s\n", m2.name);
	printf("��ȭ : %s\n", m2.phone);
	printf("���� : %d\n", m2.age);
	puts("");



	return 0;
}

/*
#include<stdio.h>
#include<math.h>
struct point {
	int x;
	int y;
};

int main() {

	struct point p1 = {100,200};
	//p1.x = 10;
	//p1.y = 20;
	
	struct point p2;
	fputs("input position p1(x y) : ", stdout);
	scanf_s("%d %d", &p1.x, &p1.y );

	fputs("input position p2(x y) : ", stdout);
	scanf_s("%d %d", &p2.x, &p2.y);

	//������ �Ÿ��� ���ϼ���
	double result=sqrt(
		(p1.x-p2.x)*(p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y)
		);
	printf("%g\n", result);
	
	return 0;
}
//*/
/*
#include<stdio.h>
#include<stdlib.h>
int main() {

	char str[20];
	puts("�����Է�");
	fgets(str,sizeof(str),stdin);
	//atoi(str)//���ڷα����ȹ��ڸ� int�� 
	//atol(str)//���ڷα����ȹ��ڸ� long�� 
	//atof(str)//���ڷα����ȹ��ڸ� double�� 
	printf("%d\n", atoi(str) +10);
	
	return 0;
}
//*/
/*
#include<stdio.h>
#include<string.h>
int main() {
	char str1[] = "java";//99
	char str2[] = "java";//97
	//char* str1 = "java";//���ڿ����
	//char* str2 = "java";
	char str3[] = "java prigramming";

	printf("%d\n", strcmp(str1, str2));
	//���ڿ��񱳽� == ������� ���ô�..
	if(!strcmp(str1, str2)){
		puts("����");
	}

	if (!strncmp(str1, str3, 4)) {//�տ� �����ڰ� ������ ��
		puts("�Ϻΰ���");
	}

	//������ 0����ȯ
	//�ٸ��� 0�̾ƴ� �ٸ���(���ʰ���ũ�� ���, ��������ũ�� ����)


	return 0;
}
//*/
/*
#include<stdio.h>
#include<string.h>
int main() {
	char str1[] = "first";
	char str2[20] = "second";

	strcat_s(str2,sizeof(20), str1);

	puts(str2);
	return 0;
}
//*/
/*
//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char str1[] = "1234567890";
	char str2[20];
	char str3[5];
	//strcpy(str2, str1);
	strcpy_s(str2, sizeof(str2), str1);
	//strcpy(str3, str1);
	//strcpy_s(str3, sizeof(str3), str1);
	puts(str2);

	puts(str3);
	return 0;
}
//*/
/*
#include<stdio.h>
#include<string.h>//���ڿ����õ� �Լ��� ������ header����
void removeEnter(char str[]) {
	int len=strlen(str);
	str[len - 1] = 0;
}

int main() {
	char str[100];
	fputs("���ڿ��Է�: ", stdout);
	fgets(str, sizeof(str), stdin);

	printf("���ڿ� ���� : %d\n", strlen(str));
	puts(str);

	removeEnter(str);

	printf("���ڿ� ���� : %d\n", strlen(str));
	puts(str);

	char* str2 = "1234567";
	printf("\"1234567\" ���� : %d\n", strlen(str2));
	//strlen//null����...���ڿ����̸� ��ȯ�Ѵ�..

	return 0;
}
//*/
/*
#include<stdio.h>
void clearChar();
int main() {
	char id[7];
	char name[10];

	//id �Է�
	fputs("input id: ", stdout);
	fgets(id, sizeof(id), stdin);

	clearChar();//�Է¹��۸� ���� �Լ�
	// '\n'==10 ���Ϳ��ش��ϴ� ���ڸ� ����������

	//�̸� �Է�
	fputs("input name: ", stdout);
	fgets(name, sizeof(name), stdin);

	//���
	printf("id : %s\n", id);
	printf("name : %s\n", name);

	return 0;
}
//*/
/*
#include<stdio.h>
int main() {
	char str[7];
	for (int i = 0; i < 3; i++) {
		fgets(str, sizeof(str), stdin);//null�� �����ؼ� 7����(6����)
		printf("Read %d: %s\n", i + 1, str);
	}
	return 0;
}
//*/
/*
#include<stdio.h>
int main() {
	//���ڿ������
	//gets(), puts(), fgets(), fputs()
	//�����ÿ��� ������ ��ȯ ���н� EOF
	char* str = "java programming";
	char str2[] = "aaa  aaa"; 

	printf("1. puts test----\n");
	puts(str);//�ڵ����� ����
	puts("���ڿ��� ������ݴϴ�.");
	puts(str2);
	printf("2. fputs test----\n");
	fputs(str, stdout);//�ڵ� �ٹٲ� �ʵ�
	fputs("���ڿ��� ������ݴϴ�.", stdout);
	fputs(str2, stdout);


	return 0;
}
//*/
/*
#include<stdio.h>
int main() {
	int ch1, ch2;

	ch1 = getchar();
	ch2 = fgetc(stdin);

	putchar(ch1);
	fputc(ch2, stdout);
	//fflush(stdout);
	//ch1 = getchar();

	fputc(ch1, stdout);

	return 0;
}
//*/
/*
#include<stdio.h>
void clearChar();
int main() {
	//���ڵ����� �ѱ���....�����
	//putchar, getcahr
	//fputc, fgetc

	int ch1, ch2;
	ch1 = getchar();//���� �ϳ� �Է¹޾��ִ� �Լ�
	printf("%d %c\n", ch1, ch1);

	//fflush(stdout);//��½�Ʈ���� ���۸� ����.
	clearChar();

	ch2=fgetc(stdin);//stdin���κ��� �ѱ��� �Է�
	printf("%d %c\n", ch2, ch2);


	return 0;
}
//*/