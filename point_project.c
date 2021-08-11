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
	long startTime = 0; //시작 시간
	long totalTime = 0; //총 경과 시간
	long prevTime = 0; //직전 경과 시간 (최근에 물을 준 사간 간격)

	int num;
	initdata();

	cursor = arrayfish;

	startTime = clock();
	while (1)
	{
		printffishes();
		printf("몇 번 어항에 물을 주시겠어요?");
		scanf_s("%d", &num);

		if (num < 1 || num>6)
		{
			printf("\n입력값이 잘못되었습니다.\n");
			continue;
		}

		else
		{
			printf("\n\n%d번 어항에 물을 줍니다.", num);
		}

		//총 경과 시간
		totalTime = (clock() - startTime)/ CLOCKS_PER_SEC;
		printf("총 경과 시간 : %d 초\n", totalTime);

		//직전 물 준 시간 (마지막으로 물 준 시간) 이후로 흐른 시간
		prevTime = totalTime - prevTime;
		printf("최근 경과 시간 : %d 초\n", prevTime);

		//어항의 물을 감호 (증발)
		decreasewater(prevTime);

		//사용자가 입력한 어항에 물을 준다.
		//1. 어항의 물이 0이면 물을 주지 못한다.
		if (cursor[num - 1] <= 0)
		{
			printf("%d 번의 물고기는 이미 죽었습니다. 물을 못줍니다.",num);
		}
		//2. 어항의 물이 0이 아닌 경우 물을 준다. (100을 넘지 않는지 체크)
		else if (cursor[num - 1] + 1 <= 100)
		{
			//물을 준다
			printf("%d 번 어항에 물을 줍니다.\n\n", num);
			cursor[num - 1] += 1;
		}

		//레벨업을 할건지 확인 
		if (totalTime / 20 > level - 1)
		{
			level ++;
			printf("레벨업을 하셨습니다. %d에서 %d로 레벨업 되셨습니다.", level - 1, level);
			if (level == 5)
			{
				printf("\n\n 축하합니다. 최고레벨에 도달했습니다. 게임을 종료합니다.");
				exit(0);
			}
		}

		// 모든 물고기가 죽었는지 확인 
		if (checkfish() == 0)
		{
			printf("모든 물고기가 죽었습니다.....");
			exit();
		}
		else 
		{
			printf("물고기가 아직 살아 있어요!!!\n\n");
		}
		prevTime = totalTime;
	}

	return 0;
}

void initdata()
{
	level = 1; //게임 레벨
	for (int i = 0; i < 6; i++)
	{
		arrayfish[i] = 100;
	}
}
void printffishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
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
		arrayfish[i] = arrayfish[i] - (level * 3 * (int)elapsedTime); //3 : 난이도 조절값
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