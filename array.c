#include <stdio.h>

int main_array(void)
{
	//�������� ������ ���ÿ� ����
	/*int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("����ö %d��°ĭ�� %d���� Ÿ�� �ֽ��ϴ�.\n\n", i+1, subway_array[i]);
	}*/
		
	// ������ ���
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n\n", arr[i]);
	}*/

	//���� �� �ʱ�ȭ�� �ؾ���
	/*int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n\n", arr[i]);
	}*/

	//�迭�� ũ��� �׻� ����� ����
	/*int size = 2;
	int arr[size] = { 1,2 };*/

	//��� �ִ� ���� 0���� ��ü�ȴ�.
	/*int arr[10] = { 1,2 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	//�迭ũ��� ������ ���߾���
	/*int arr[] = { 1,2,3 };
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}*/
	
	//float���� �����ϴ�
	/*float arr_f[5] = { 1.1f, 1.2f ,1.3f ,1.4f ,1.5f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}*/

	//����vs���ڿ�
	/*char c = 'a';
	printf("%c\n", c);*/

	//���ڿ� ������ NULL����(\0)�� �־����
	/*char str[7] = "coding";
	printf("%s\n", str);*/

	/*char str[] = "coding";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));*/


	//���� �ϳ� 1 byte, �ѱ� �ϳ� 2 byte 
	/*char kr[] = "�����ڵ�";
	printf("%s\n", kr);
	printf("%d\n", sizeof(kr));*/

	/*char str_arr[7] = { 'c','o','d','i','n','g', '\0'};
	printf("%s\n", str_arr);*/

	/*char str_arr[6] = { 'c','o','d','i','n','g'};
	printf("%s\n", str_arr);*/

	/*char str_arr[10] = { 'c','o','d','i','n','g' };
	printf("%s\n", str_arr);*/

	//�ƽ�Ű �ڵ�
	/*for (int i = 0; i < 128; i++)
	{
		printf("�ƽ�Ű �ڵ� ���� %d : %c\n", i, i);
	}*/

	return 0;
}