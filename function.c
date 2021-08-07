#include <stdio.h>

void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate);

int main_function(void)
{
	//함수
	//계산기

	/*int num = 2;
	p(num);

	num = num + 3;
	p(num);

	num -= 3;
	p(num);

	num *= 3;
	p(num);

	num /= 3;
	p(num);*/

	//함수의 종류

	//반환값이 없는 함수
	/*function_without_return();*/

	//반환값이 있는 함수
	/*int ret = function_with_return();
	p(ret);*/

	//파라미터(전달값)이 없는 함수
	/*function_without_params();*/

	//파라미터(전달값)가 있는 함수
	/*function_with_params(1,2,3);*/

	// 파라미터(전달값)도 받고, 반환값이 있는 함수
	/*int ret = apple(5, 2);
	printf("사과가 남은 갯수는 %d\n", ret);*/

	//바로쓰기
	/*printf("%d 빼기 %d는 %d입니다.\n", 7, 4, apple(7, 4));*/

	return 0;
}

void p(int num)
{
	printf("num의 값은 %d입니다.\n", num);
}

void function_without_return()
{
	printf("반환값이 없는 함수입니다.\n");
}

int function_with_return()
{
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}

void function_without_params()
{
	printf("전달값이 없는 함수입니다.\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수이며 전달값은 %d, %d, %d", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("전달값과 반환값이 있는 함수입니다.\n");
	return total - ate;
}