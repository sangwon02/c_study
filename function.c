#include <stdio.h>

void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate);

int main_function(void)
{
	//�Լ�
	//����

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

	//�Լ��� ����

	//��ȯ���� ���� �Լ�
	/*function_without_return();*/

	//��ȯ���� �ִ� �Լ�
	/*int ret = function_with_return();
	p(ret);*/

	//�Ķ����(���ް�)�� ���� �Լ�
	/*function_without_params();*/

	//�Ķ����(���ް�)�� �ִ� �Լ�
	/*function_with_params(1,2,3);*/

	// �Ķ����(���ް�)�� �ް�, ��ȯ���� �ִ� �Լ�
	/*int ret = apple(5, 2);
	printf("����� ���� ������ %d\n", ret);*/

	//�ٷξ���
	/*printf("%d ���� %d�� %d�Դϴ�.\n", 7, 4, apple(7, 4));*/

	return 0;
}

void p(int num)
{
	printf("num�� ���� %d�Դϴ�.\n", num);
}

void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}

void function_without_params()
{
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ��̸� ���ް��� %d, %d, %d", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return total - ate;
}