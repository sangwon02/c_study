#include <stdio.h>
int main_loop(void)
{
	// ++
	/*int a = 10;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);
	int b = 20;
	printf("b�� %d\n", ++b);
	printf("b�� %d\n", b++);
	printf("b�� %d\n", b);

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

	//�ݺ���
	//for,while, do while

	//for ( ����; ����; ����) {   }
	/*for (int i = 1; i <= 10; i++)
	{
		printf("hi %d\n", i);
	}*/

	//while (����) {   }
	//int i = 1;
	//while (i <= 10)
	//{
	//	printf("hi %d\n", i++);
	//	//�Ǵ� i++;
	//}

	// do {  } while (����);
	/*int i = 1;
	do {
		printf("hi %d\n", i++);
	} while (i <= 10);*/

	// 2�� �ݺ���
	/*for (int i = 1; i <= 3; i++)
	{	
		printf("ù��° �ݺ��� %d\n", i);
		for (int j = 1; j <= 5; j++)
		{
			printf("     �ι�° �ݺ��� %d\n", j);
		}
	}*/

	// ������
	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d��\n", i);
		for (int j = 2; j <= 9; j++)
		{
				printf("   %dX%d=%d\n", i, j, i*j);
		}
	}*/

	//���ױ�
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//�Ųٷ� ���ױ�
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

	//�Ƕ�̵� �ױ� ������Ʈ
	/*int floor;
	printf("�������� ������? : ");
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
	printf("%d���� �׾Ҵ�.", floor);*/


	return 0;
}
