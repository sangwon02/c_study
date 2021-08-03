#include <stdio.h>
#include <time.h>

int main(void)
{
	// if/ else
	// 버스를 탄다고 가정 학생 일반인
	/*int age;
	printf("나이가 몇살이신가요?:");
	scanf_s("%d", &age);
	if (age >= 20)
	{
		printf("일반인 입니다. \n");
	}
	else
	{
		printf("학생 입니다.\n");
	}*/

	// 초딩, 중딩, 고딩으로 나누기
	// if / if else / else
	/*int age;
	printf("나이가 몇살이신가요?:");
	scanf_s("%d", &age);

	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다.\n");
	}
	else if (age >= 14 &&  age <= 16)
	{
		printf("중학생입니다.\n");
	}
	else if (age >=17 && age <= 19)
	{
		printf("고등학생입니다,\n");
	}
	else
	{
		printf("학생이 아닙니다.\n");
	}*/

	// break / continue
	//30번까지 있는 반에서 5번까지 발표 시키기
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지는 집에 가세요.");
			break;
		}
		printf("%d번 발표하세요.\n", i);
	}*/

	// 30번까지 있는 반에서 6번에서 10번까지 발표하는데 7번결석
	/*for (int i = 1; i <= 30; i++)
	{
		if (i <= 10 && i >= 6)
		{
			if (i == 7)
			{
				printf("%d번은 오늘 결석\n", i);
				continue;
			}
			printf("%d번 발표하세요.\n", i);
		}
		
	}*/

	// &&(and의 의미)
	/*int a;
	printf("a:");
	scanf_s("%d", &a);
	int b;
	printf("b:");
	scanf_s("%d", &b);
	int c;
	printf("c:");
	scanf_s("%d", &c);
	int d;
	printf("d:");
	scanf_s("%d", &d);
	if (a == b && c == d)
	{
		printf("a와b는 같고, c와d도 같습니다.\n");
	}
	else
	{
		printf("값이 서로 다릅니다.\n");
	}*/

	// || (or의 의미)
	/*int a;
	printf("a:");
	scanf_s("%d", &a);
	int b;
	printf("b:");
	scanf_s("%d", &b);
	int c;
	printf("c:");
	scanf_s("%d", &c);
	int d;
	printf("d:");
	scanf_s("%d", &d);
	if (a == b || c == d)
	{
		printf("a와b 혹은 c와d의 값이 같습니다.\n");
	}
	else
	{
		printf("값이 서로 다릅니다.\n");
	}*/

	// 가위 0 바위1 보2
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
	{
		printf("뭐지\n");
	}*/

	srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
	case 0: printf("가위\n"); break;
	case 1: printf("바위\n"); break;
	case 2: printf("보\n"); break;
	default: printf("몰라요\n"); break;
	}

	return 0;
}