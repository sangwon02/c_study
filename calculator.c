#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RandomNum(int level);
void Question(int level, int num1, int num2);
 
int main(void)
{
	//�������� 5�� �ְ� ���� ������ �ִ�.
	printf("      5���� ��й�ȣ�� Ǫ�ʽÿ�.\n\n\n");
	srand(time(NULL));
	int count = 0;
	for (int i = 1; i <= 5; i++)
	{
		int num1 = RandomNum(i);
		int num2 = RandomNum(i);
		Question(i, num1, num2);

		int answer;
		scanf_s("%d", &answer);
		printf("\n");

		if (answer == num1 * num2)
		{
			printf("                    �����Դϴ�!!\n\n\n");
			count++;
		}
		else if (answer == -1)
		{
			printf("       ��Ÿ�����ϴ�. ������ ����Ǿ����ϴ�.\n\n\n");
			break;
		}
		else if (answer != num1 * num2)
		{
			printf("                    Ʋ�Ƚ��ϴ�.�Ф�\n\n\n");
			exit;
		}
	}
	printf("      ����� 5���� ������ %d�� ���߾����ϴ�.\n\n\n", count);

	return 0;
}
RandomNum(int level)
{
	return rand() % (level * 5) + 1;
}

void Question(int level, int num1, int num2)
{
	printf("     %d��° ���� %d * %d ��?", level, num1, num2);
	printf(" (���⸦ ���Ͻø� - 1�� �Է�)  >>>   ");
}