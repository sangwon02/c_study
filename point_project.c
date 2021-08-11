#include <stdio.h>
#include <time.h>

int level;
int arrayfish[6];
int *cursor;


void initdata();
void printffishes();
void decreasewater(long elapsedTime);

int main(void)
{
	long startTime = 0; //���� �ð�
	long totalTime = 0; //�� ��� �ð�
	long prevTime = 0; //���� ��� �ð� (�ֱٿ� ���� �� �簣 ����)

	int num;
	initdata();

	cursor = arrayfish;

	startTime = clock();
	while (1)
	{
		printffishes();
		printf("�� �� ���׿� ���� �ֽðھ��?");
		scanf_s("%d", &num);

		if (num < 1 || num>6)
		{
			printf("\n�Է°��� �߸��Ǿ����ϴ�.\n");
			continue;
		}

		else
		{
			printf("\n\n%d�� ���׿� ���� �ݴϴ�.", num);
		}

		//�� ��� �ð�
		totalTime = (clock() - startTime)/ CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %d ��\n", totalTime);

		//���� �� �� �ð� (���������� �� �� �ð�) ���ķ� �帥 �ð�
		prevTime = totalTime - prevTime;
		printf("�ֱ� ��� �ð� : %d ��\n", prevTime);

		//������ ���� ��ȣ (����)
		decreasewater(prevTime);

		//����ڰ� �Է��� ���׿� ���� �ش�.
		//1. ������ ���� 0�̸� ���� ���� ���Ѵ�.
		if (cursor[num - 1] <= 0)
		{
			printf("%d ���� ������ �̹� �׾����ϴ�. ���� ���ݴϴ�.",num);
		}
		//2. ������ ���� 0�� �ƴ� ��� ���� �ش�. (100�� ���� �ʴ��� üũ)
		else if (cursor[num - 1] + 1 <= 100)
		{
			//���� �ش�
			printf("%d �� ���׿� ���� �ݴϴ�.\n\n", num);
			cursor[num - 1] += 1;
		}

		//�������� �Ұ��� Ȯ�� 
		if (totalTime / 20 > level - 1)
		{
			level ++;
			printf("�������� �ϼ̽��ϴ�. %d���� %d�� ������ �Ǽ̽��ϴ�.", level - 1, level);
			if (level == 5)
			{
				printf("\n\n �����մϴ�. �ְ����� �����߽��ϴ�. ������ �����մϴ�.");
				exit(0);
			}
		}

		// ��� ����Ⱑ �׾����� Ȯ�� 
		if (checkfish() == 0)
		{
			printf("��� ����Ⱑ �׾����ϴ�.....");
			exit();
		}
		else 
		{
			printf("����Ⱑ ���� ��� �־��!!!\n\n");
		}
		prevTime = totalTime;
	}

	return 0;
}

void initdata()
{
	level = 1; //���� ����
	for (int i = 0; i < 6; i++)
	{
		arrayfish[i] = 100;
	}
}
void printffishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayfish[i]);
	}
	printf("\n\n");
}
void decreasewater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayfish[i] = arrayfish[i] - (level * 3 * (int)elapsedTime); //3 : ���̵� ������
		if (arrayfish[i] < 0)
		{
			arrayfish[i] = 0;
		}
	}
}
int checkfish()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayfish[i] > 0)
		{
			return 1;
		}
	}
	return 0;
}