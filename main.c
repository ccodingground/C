#include<stdio.h>
#include<string.h>
struct person {
	char name[20];
	char phone[20];
	int age;
};


int main() {
	struct person m1, m2;

	strcpy_s(m1.name, sizeof(m1.name), "조인성");
	strcpy_s(m1.phone, sizeof(m1.phone), "010-3039-0089");
	m1.age = 20;

	printf("이름 : ");
	gets_s((m2.name), sizeof(m2.name));
	printf("전화 : ");
	gets_s(m2.phone, sizeof(m2.phone));
	printf("나이 : ");
	scanf_s("%d", &m2.age);

	printf("이름 : %s\n", m1.name);
	printf("전화 : %s\n", m1.phone);
	printf("나이 : %d\n", m1.age);
	puts("");

	printf("이름 : %s\n", m2.name);
	printf("전화 : %s\n", m2.phone);
	printf("나이 : %d\n", m2.age);
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

	//두점의 거리를 구하세요
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
	puts("숫자입력");
	fgets(str,sizeof(str),stdin);
	//atoi(str)//숫자로구성된문자를 int로 
	//atol(str)//숫자로구성된문자를 long로 
	//atof(str)//숫자로구성된문자를 double로 
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
	//char* str1 = "java";//문자열상수
	//char* str2 = "java";
	char str3[] = "java prigramming";

	printf("%d\n", strcmp(str1, str2));
	//문자열비교시 == 사용하지 맙시다..
	if(!strcmp(str1, str2)){
		puts("같다");
	}

	if (!strncmp(str1, str3, 4)) {//앞에 세글자가 같은지 비교
		puts("일부같다");
	}

	//같으면 0을반환
	//다르면 0이아닌 다른값(왼쪽값이크면 양수, 오른쪽이크면 음수)


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
#include<string.h>//문자열관련된 함수를 정의한 header파일
void removeEnter(char str[]) {
	int len=strlen(str);
	str[len - 1] = 0;
}

int main() {
	char str[100];
	fputs("문자열입력: ", stdout);
	fgets(str, sizeof(str), stdin);

	printf("문자열 길이 : %d\n", strlen(str));
	puts(str);

	removeEnter(str);

	printf("문자열 길이 : %d\n", strlen(str));
	puts(str);

	char* str2 = "1234567";
	printf("\"1234567\" 길이 : %d\n", strlen(str2));
	//strlen//null빼고...문자열길이를 반환한다..

	return 0;
}
//*/
/*
#include<stdio.h>
void clearChar();
int main() {
	char id[7];
	char name[10];

	//id 입력
	fputs("input id: ", stdout);
	fgets(id, sizeof(id), stdin);

	clearChar();//입력버퍼를 비우는 함수
	// '\n'==10 엔터에해당하는 문자를 읽을때까지

	//이름 입력
	fputs("input name: ", stdout);
	fgets(name, sizeof(name), stdin);

	//출력
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
		fgets(str, sizeof(str), stdin);//null을 포함해서 7글자(6글자)
		printf("Read %d: %s\n", i + 1, str);
	}
	return 0;
}
//*/
/*
#include<stdio.h>
int main() {
	//문자열입출력
	//gets(), puts(), fgets(), fputs()
	//성공시에는 정수를 반환 실패시 EOF
	char* str = "java programming";
	char str2[] = "aaa  aaa"; 

	printf("1. puts test----\n");
	puts(str);//자동으로 개행
	puts("문자열을 출력해줍니다.");
	puts(str2);
	printf("2. fputs test----\n");
	fputs(str, stdout);//자동 줄바꿈 않됨
	fputs("문자열을 출력해줍니다.", stdout);
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
	//문자데이터 한글자....입출력
	//putchar, getcahr
	//fputc, fgetc

	int ch1, ch2;
	ch1 = getchar();//문자 하나 입력받아주는 함수
	printf("%d %c\n", ch1, ch1);

	//fflush(stdout);//출력스트림의 버퍼를 비운다.
	clearChar();

	ch2=fgetc(stdin);//stdin으로부터 한글자 입력
	printf("%d %c\n", ch2, ch2);


	return 0;
}
//*/