#include <stdio.h>
int main_scanprint(void)
{
	//정수형 변수에 대한 예제
	/*int age = 13;
	printf("%d\n", age);*/

	//실수형 변수에 대한 예제
	//float f = 46.5f;
	//printf("%.2f\n", f);//%뒤에 .숫자 만큼 소수점 표시
	//double d = 4.428;
	//printf("%.3lf\n", d);

	//정수에 대한 예제
	//const int year = 2000; //상수
	//printf("태어난 년도 : %d\n", year);

	//printf의 연산
	/*int add = 3 + 7;
	printf("3 + 7 = %d\n", add);
	printf("%d x %d = %d\n", 30, 79, 30 * 79);*/
	
	//scanf 키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);

	int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째값 : %d\n", one);
	printf("두번째값 : %d\n", two);
	printf("세번째값 : %d\n", three);*/

	// 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	//char c = 'a';//c에 a저장
	//printf("%c\n", c);

	//char str[500];
	//printf("문자를 입력하세요.: ");
	//scanf_s("%s", str, sizeof(str));
	//printf("입력한 문자열: %s\n", str);

	// 프로젝트 경찰관이 정보 조사(조서 작성)
	//이름? 나이? 몸무게? 키? 범죄명?
	/*char name[500];
	printf("이름이 무엇인가요?: ");
	scanf_s("%s", name, sizeof(name));
	int old;
	printf("나이가 몇살인가요? : ");
	scanf_s("%d", &old);
	float weight;
	printf("몸무게가 몇인가요?(단위kg) : ");
	scanf_s("%f", &weight);
	float height;
	printf("키가 몇인가요? (단위cm) : ");
	scanf_s("%f", &height);
	char crime[500];
	printf("범죄명이 무엇인가요?: ");
	scanf_s("%s", crime, sizeof(crime));
	printf("이름       : %s\n", name);
	printf("나이       : %d\n", old);
	printf("몸무게(kg) : %.2f\n",  weight);
	printf("키(cm)     : %.2f\n", height);
	printf("범죄명     : %s\n", crime);*/

	return 0;
}