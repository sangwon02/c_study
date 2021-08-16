#include <stdio.h>
#include <time.h>

int arrayanimal[4][5];//카드 지도 (20장의 카드)
int checkanimal[4][5];//뒤집혔는지 여부확인
char* stranimal[10];


void initanimalarr();
void initanimalname();
void shuffleanimal();
int getemptypos();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printanimals();
void printquestion();


int main(void)
{
	srand(time(NULL));

	initanimalarr();
	initanimalname();

	shuffleanimal();

	int failcount = 0;

	while (1)
	{
		int select1 = 0; //선택한 첫번째 수
		int select2 = 0; //선택한 두번째 수
		printanimals(); //동물 위치 출력
		printquestion(); //문제 출력 (카드 지도)

		printf("뒤집을 카드를 2개 고르세요 : ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
			continue;



	}


	return 0;
}

void initanimalarr()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayanimal[i][j] = -1;
		}
	}
}

void initanimalname()
{
	stranimal[0] = "하마";
	stranimal[1] = "강아지";
	stranimal[2] = "고양이";
	stranimal[3] = "기린";
	stranimal[4] = "백조";
	stranimal[5] = "비둘기";
	stranimal[6] = "사자";
	stranimal[7] = "호랑이";
	stranimal[8] = "뱀";
	stranimal[9] = "돼지";
	stranimal[10] = "원숭이";
}

void shuffleanimal()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getemptypos();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);


			arrayanimal[x][y] = i;
		}
	}
}

//좌표에서 빈공간 찾기
int getemptypos()
{
	while (1)
	{
		int randpos = rand() % 20;
		int x = conv_pos_x(randpos);
		int y = conv_pos_y(randpos);

		if (arrayanimal[x][y] == -1)
		{
			return randpos;
		}
	}
	return 0;
}

int conv_pos_x(int x)
{
	return x / 5;
}

int conv_pos_y(int y)
{
	return y % 5; //y를 5로 나눈 나머지 값
}

void printanimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%8s", stranimal[arrayanimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n=================================\n\n");
}

void printquestion()
{
	printf("\n\n(문제)\n");
	int seq = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkanimal[i][j] != 0)
			{
				printf("%8s", stranimal[arrayanimal[i][j]]);
			}

			else
			{
				printf("%8s", seq);
			}
		}
	}
}