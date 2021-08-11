#include <stdio.h>

int main_array(void)
{
	//여러개의 변수를 동시에 생성
	/*int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d번째칸에 %d명이 타고 있습니다.\n\n", i+1, subway_array[i]);
	}*/
		
	// 값설정 방법
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n\n", arr[i]);
	}*/

	//값은 꼭 초기화를 해야함
	/*int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n\n", arr[i]);
	}*/

	//배열의 크기는 항상 상수로 선언
	/*int size = 2;
	int arr[size] = { 1,2 };*/

	//비어 있는 값은 0으로 대체된다.
	/*int arr[10] = { 1,2 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	//배열크기는 저절로 맞추어짐
	/*int arr[] = { 1,2,3 };
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}*/
	
	//float형도 가능하다
	/*float arr_f[5] = { 1.1f, 1.2f ,1.3f ,1.4f ,1.5f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}*/

	//문자vs문자열
	/*char c = 'a';
	printf("%c\n", c);*/

	//문자열 끝에는 NULL문자(\0)가 있어야함
	/*char str[7] = "coding";
	printf("%s\n", str);*/

	/*char str[] = "coding";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));*/


	//영어 하나 1 byte, 한글 하나 2 byte 
	/*char kr[] = "나도코딩";
	printf("%s\n", kr);
	printf("%d\n", sizeof(kr));*/

	/*char str_arr[7] = { 'c','o','d','i','n','g', '\0'};
	printf("%s\n", str_arr);*/

	/*char str_arr[6] = { 'c','o','d','i','n','g'};
	printf("%s\n", str_arr);*/

	/*char str_arr[10] = { 'c','o','d','i','n','g' };
	printf("%s\n", str_arr);*/

	//아스키 코드
	/*for (int i = 0; i < 128; i++)
	{
		printf("아스키 코드 정수 %d : %c\n", i, i);
	}*/

	return 0;
}