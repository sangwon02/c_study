#include <stdio.h>
#include <time.h>

int main(void)
{
	// if/ else
	// ������ ź�ٰ� ���� �л� �Ϲ���
	/*int age;
	printf("���̰� ����̽Ű���?:");
	scanf_s("%d", &age);
	if (age >= 20)
	{
		printf("�Ϲ��� �Դϴ�. \n");
	}
	else
	{
		printf("�л� �Դϴ�.\n");
	}*/

	// �ʵ�, �ߵ�, ������� ������
	// if / if else / else
	/*int age;
	printf("���̰� ����̽Ű���?:");
	scanf_s("%d", &age);

	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age >= 14 &&  age <= 16)
	{
		printf("���л��Դϴ�.\n");
	}
	else if (age >=17 && age <= 19)
	{
		printf("����л��Դϴ�,\n");
	}
	else
	{
		printf("�л��� �ƴմϴ�.\n");
	}*/

	// break / continue
	//30������ �ִ� �ݿ��� 5������ ��ǥ ��Ű��
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("�������� ���� ������.");
			break;
		}
		printf("%d�� ��ǥ�ϼ���.\n", i);
	}*/

	// 30������ �ִ� �ݿ��� 6������ 10������ ��ǥ�ϴµ� 7���Ἦ
	/*for (int i = 1; i <= 30; i++)
	{
		if (i <= 10 && i >= 6)
		{
			if (i == 7)
			{
				printf("%d���� ���� �Ἦ\n", i);
				continue;
			}
			printf("%d�� ��ǥ�ϼ���.\n", i);
		}
		
	}*/

	// &&(and�� �ǹ�)
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
		printf("a��b�� ����, c��d�� �����ϴ�.\n");
	}
	else
	{
		printf("���� ���� �ٸ��ϴ�.\n");
	}*/

	// || (or�� �ǹ�)
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
		printf("a��b Ȥ�� c��d�� ���� �����ϴ�.\n");
	}
	else
	{
		printf("���� ���� �ٸ��ϴ�.\n");
	}*/

	// ���� 0 ����1 ��2
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else
	{
		printf("����\n");
	}*/

	srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
	case 0: printf("����\n"); break;
	case 1: printf("����\n"); break;
	case 2: printf("��\n"); break;
	default: printf("�����\n"); break;
	}

	return 0;
}