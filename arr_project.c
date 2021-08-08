#include <stdio.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	printf("발모제 찾기 게임");
	int answer; //사용자 입력값
	int treetment = rand() % 4; //발모제 선택 0~3

	int cntshowbottle = 0; //이번게임에 보여줄 병 갯수
	int prevcntshowbottle = 0; //앞게임에 보여준 병 갯수

	//3번의 기회
	for (int i = 0; i < 4; i++)
	{
		int bottle[4] = { 0,0,0,0 };//4개의 병
		do 
		{
			cntshowbottle = rand() % 2 + 2; //보여줄 병 갯수 (2~3)
		} while (cntshowbottle == prevcntshowbottle);
		prevcntshowbottle = cntshowbottle;

		int islncluded = 0; // 보여줄 병 중에 발모제가 포함되었는지 여부
		printf(" >>> %d번째 시도 ", i+1);


		//보여줄 병 종류를 선택
		for (int j = 0; j < cntshowbottle; j++)
		{
			int randbottle = rand() % 4; //0~3

			//아직 선택되지 않은 병이면 선택
			if (bottle[randbottle] == 0)
			{
				bottle[randbottle] = 1;
				if (randbottle == treetment)
				{
					islncluded = 1;
				}
			}
			//이미 선택된 병이면 다시선택
			else
			{
				j--;
			}
		}

		//사용자에게 문제 표시
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
				printf("%d ", k + 1);
		}
		printf("물약을 머리에 바릅니다.\n\n");

		if (islncluded == 1)
		{
			printf(" >> 성공 머리가 났어요!!\n\n");
		}
		else
		{
			printf(" >>> 실패 머리가 나지 않았어요!\n\n");
		}

		printf(" 계속하려면 아무키나 누르세요....\n\n");
		getchar();
	}

	printf("\n\n발모제는 몇번일까요?  :");
	scanf_s("%d", &answer);

	if (answer == treetment + 1)
	{
		printf("\n\n >>>> 정답입니다!!!");
	}

	else
	{
		printf("\n\n >>>> 땡! 틀렸어요. 정답은 %d입니다.\n\n", treetment + 1);
	}


	return 0;
}