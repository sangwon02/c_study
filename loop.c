#include <stdio.h>
int main_loop(void)
{
	// ++
	/*int a = 10;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	int b = 20;
	printf("b는 %d\n", ++b);
	printf("b는 %d\n", b++);
	printf("b는 %d\n", b);

	int i = 1;
	printf("%d\n", i++);
	printf("%d\n", i++);
	printf("%d\n", i++);
	printf("%d\n", i++);
	printf("%d\n", i++);
	printf("%d\n", i++);
	printf("%d\n", i++);
	printf("%d\n", i++);
	printf("%d\n", i++);*/

	//반복문
	//for,while, do while

	//for ( 선언; 조건; 증감) {   }
	/*for (int i = 1; i <= 10; i++)
	{
		printf("hi %d\n", i);
	}*/

	//while (조건) {   }
	//int i = 1;
	//while (i <= 10)
	//{
	//	printf("hi %d\n", i++);
	//	//또는 i++;
	//}

	// do {  } while (조건);
	/*int i = 1;
	do {
		printf("hi %d\n", i++);
	} while (i <= 10);*/

	// 2중 반복문
	/*for (int i = 1; i <= 3; i++)
	{	
		printf("첫번째 반복문 %d\n", i);
		for (int j = 1; j <= 5; j++)
		{
			printf("     두번째 반복문 %d\n", j);
		}
	}*/

	// 구구단
	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d단\n", i);
		for (int j = 2; j <= 9; j++)
		{
				printf("   %dX%d=%d\n", i, j, i*j);
		}
	}*/

	//별쌓기
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//거꾸로 별쌓기
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 4; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//피라미드 쌓기 프로젝트
	/*int floor;
	printf("몇층으로 쌓을래? : ");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int k = i; k < floor ; k++)
		{
			printf(" ");
		}
		for (int j = 0; j <= i*2; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("%d으로 쌓았다.", floor);*/


	return 0;
}
