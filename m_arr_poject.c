#include <stdio.h>
#include <time.h>

int arrayanimal[4][5];//ī�� ���� (20���� ī��)
int checkanimal[4][5];//���������� ����Ȯ��
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
		int select1 = 0; //������ ù��° ��
		int select2 = 0; //������ �ι�° ��
		printanimals(); //���� ��ġ ���
		printquestion(); //���� ��� (ī�� ����)

		printf("������ ī�带 2�� ������ : ");
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
	stranimal[0] = "�ϸ�";
	stranimal[1] = "������";
	stranimal[2] = "�����";
	stranimal[3] = "�⸰";
	stranimal[4] = "����";
	stranimal[5] = "��ѱ�";
	stranimal[6] = "����";
	stranimal[7] = "ȣ����";
	stranimal[8] = "��";
	stranimal[9] = "����";
	stranimal[10] = "������";
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

//��ǥ���� ����� ã��
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
	return y % 5; //y�� 5�� ���� ������ ��
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
	printf("\n\n(����)\n");
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