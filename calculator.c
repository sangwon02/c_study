#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RandomNum(int level);
void Question(int level, int num1, int num2);
 
int main(void)
{
	//스테이지 5개 있고 각각 문제가 있다.
	printf("      5개의 비밀번호를 푸십시오.\n\n\n");
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
			printf("                    정답입니다!!\n\n\n");
			count++;
		}
		else if (answer == -1)
		{
			printf("       안타깝습니다. 게임이 종료되었습니다.\n\n\n");
			break;
		}
		else if (answer != num1 * num2)
		{
			printf("                    틀렸습니다.ㅠㅠ\n\n\n");
			exit;
		}
	}
	printf("      당신은 5개의 문제중 %d개 맞추었습니다.\n\n\n", count);

	return 0;
}
RandomNum(int level)
{
	return rand() % (level * 5) + 1;
}

void Question(int level, int num1, int num2)
{
	printf("     %d번째 문제 %d * %d 는?", level, num1, num2);
	printf(" (포기를 원하시면 - 1를 입력)  >>>   ");
}