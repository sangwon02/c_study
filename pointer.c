#include <stdio.h>

void swap(int a, int b);
void swap_ad(int *a, int *b);
void change(int* ptr);

int main_pointer(void)
{
	//������ 

	//[ö��] : 101ȣ -> �޸� ������ �ּ�
	//[����] : 201ȣ
	//[�μ�] : 301ȣ

	//�� �� �տ� '��ȣ'�� �ɷ� ����
	/*int ö�� = 1;
	int ���� = 2;
	int �μ� = 3;

	printf("ö���� �ּ�: %d, ��ȣ : %d\n", &ö��, ö��);
	printf("����� �ּ�: %d, ��ȣ : %d\n", &����, ����);
	printf("�μ��� �ּ�: %d, ��ȣ : %d\n", &�μ�, �μ�);

	//�̼Ǹ�

	//ù ��° �̼� : ����Ʈ�� �� ���� �湮�Ͽ� ���� ���� ��ȣ Ȯ��
	int* �̼Ǹ�; //������ ����
	�̼Ǹ� = &ö��;
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	�̼Ǹ� = &����;
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	�̼Ǹ� = &�μ�;
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	//�� ��° �̼� : ����ȣ�� 3�� ���ض�
	�̼Ǹ� = &ö��;
	*�̼Ǹ� = *�̼Ǹ� * 3;
	printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	�̼Ǹ� = &����;
	*�̼Ǹ� = *�̼Ǹ� * 3;
	printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	�̼Ǹ� = &�μ�;
	*�̼Ǹ� = *�̼Ǹ� * 3;
	printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	//������
	//�̼Ǹ��� �ٲ� ��ȣ���� 2�� ����!

	int* ������ = �̼Ǹ�;
	printf("\n...�����̰� �̼� ������....\n\n");
	������ = &ö��;
	*������ = *������ - 2;
	printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", ������, *������);

	������ = &����;
	*������ = *������ - 2;
	printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", ������, *������);

	������ = &�μ�;
	*������ = *������ - 2;
	printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", ������, *������);

	printf("\n......���� �� ģ������ ��ȣ�� ���� ���.....\n\n");
	printf("ö���� �ּ�: %d, ��ȣ : %d\n", &ö��, ö��);
	printf("����� �ּ�: %d, ��ȣ : %d\n", &����, ����);
	printf("�μ��� �ּ�: %d, ��ȣ : %d\n", &�μ�, �μ�);

	//����� �̼Ǹ�, �����̰� ��� ���� �ּ�
	printf("�̼Ǹ��� �ּ�: %d\n", &�̼Ǹ�);
	printf("�������� �ּ�: %d\n", &������);*/

	//�迭�̶� ������
	/*printf("\n\n");
	int arr[3] = { 1,2,3 };
	int* ptr = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("�迭 arr[%d]�� ��: %d\n", i, arr[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("������ ptr[%d]�� ��: %d\n", i, ptr[i]);
	}

	ptr[0] = 10;
	ptr[1] = 20;
	ptr[2] = 30;

	printf("\n\n");
	for (int i = 0; i < 3; i++)
	{
		printf("�迭 arr[%d]�� ��: %d\n", i, arr[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("������ ptr[%d]�� ��: %d\n", i, ptr[i]);
	}

	printf("\n\n");
	for (int i = 0; i < 3; i++)
	{
		printf("�迭 arr[%d]�� ��: %d\n", i, *(arr + i));
	}
	for (int i = 0; i < 3; i++)
	{
		printf("������ ptr[%d]�� ��: %d\n", i, *(ptr + i));
	}

	
	//*(arr + i) == arr[i]
	//arr == arr�迭�� ù��° ���� �ּҿ� ���� == &arr[0]
	printf("\n\n");
	printf("arr ��ü�� �� : %d\n", arr);
	printf("arr[0]�� �ּ� : %d\n", &arr[0]);

	printf("\n\n");
	printf("arr ��ü�� ���� ������ �ּ� : %d\n", *arr);
	printf("arr[0]�� ���� �� : %d\n", *&arr[0]);

	// *& �� �ƹ��͵� ���� �Ͱ� ���� 7�� �ּ��̰� *�� �ּ��� ���̱� ����
	printf("\n\n");
	printf("arr[0]�� ���� �� : %d\n", *&*&*&*&arr[0]);
	printf("arr[0]�� ���� �� : %d\n", arr[0]);*/

	// swap
	/*int a = 10;
	int b = 20;
	printf("a�� �ּ� : %d\n", &a);
	printf("b�� �ּ� : %d\n", &b);

	printf("\n\n");
	// a �� b�� ���� �ٲ۴�.
	printf("swap�Լ� �� => a : %d, b :%d\n", a, b);
	swap(a, b);
	printf("swap�Լ� �� => a : %d, b :%d\n", a, b);

	printf("\n\n");
	printf("(�ּҰ� ����)swap�Լ� �� => a : %d, b :%d\n", a, b);
	swap_ad(&a, &b);
	printf("(�ּҰ� ����)swap�Լ� �� => a : %d, b :%d\n", a, b);*/

	//�迭�� ��, arr2 -> 
	/*int arr2[3] = {10,20,30};
	change(arr2);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr2[i]);
	}

	printf("\n\n");
	change(&arr2[0]);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr2[i]);
	}*/


	return 0;
}

void swap(int a, int b)
{
	int c = a;
	a = b;
	b = c;
	printf("swap�Լ� �� => a : %d, b :%d\n", a, b);
	printf("swap�Լ� �� a�� �ּ� : %d\n", &a);
	printf("swap�Լ� �� b�� �ּ� : %d\n", &b);
}

void swap_ad(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
	printf("swap�Լ� �� => a : %d, b :%d\n", *a, *b);
}

void change(int *ptr)
{
	ptr[2] = 50;
}