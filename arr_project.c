#include <stdio.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	printf("�߸��� ã�� ����");
	int answer; //����� �Է°�
	int treetment = rand() % 4; //�߸��� ���� 0~3

	int cntshowbottle = 0; //�̹����ӿ� ������ �� ����
	int prevcntshowbottle = 0; //�հ��ӿ� ������ �� ����

	//3���� ��ȸ
	for (int i = 0; i < 4; i++)
	{
		int bottle[4] = { 0,0,0,0 };//4���� ��
		do 
		{
			cntshowbottle = rand() % 2 + 2; //������ �� ���� (2~3)
		} while (cntshowbottle == prevcntshowbottle);
		prevcntshowbottle = cntshowbottle;

		int islncluded = 0; // ������ �� �߿� �߸����� ���ԵǾ����� ����
		printf(" >>> %d��° �õ� ", i+1);


		//������ �� ������ ����
		for (int j = 0; j < cntshowbottle; j++)
		{
			int randbottle = rand() % 4; //0~3

			//���� ���õ��� ���� ���̸� ����
			if (bottle[randbottle] == 0)
			{
				bottle[randbottle] = 1;
				if (randbottle == treetment)
				{
					islncluded = 1;
				}
			}
			//�̹� ���õ� ���̸� �ٽü���
			else
			{
				j--;
			}
		}

		//����ڿ��� ���� ǥ��
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
				printf("%d ", k + 1);
		}
		printf("������ �Ӹ��� �ٸ��ϴ�.\n\n");

		if (islncluded == 1)
		{
			printf(" >> ���� �Ӹ��� �����!!\n\n");
		}
		else
		{
			printf(" >>> ���� �Ӹ��� ���� �ʾҾ��!\n\n");
		}

		printf(" ����Ϸ��� �ƹ�Ű�� ��������....\n\n");
		getchar();
	}

	printf("\n\n�߸����� ����ϱ��?  :");
	scanf_s("%d", &answer);

	if (answer == treetment + 1)
	{
		printf("\n\n >>>> �����Դϴ�!!!");
	}

	else
	{
		printf("\n\n >>>> ��! Ʋ�Ⱦ��. ������ %d�Դϴ�.\n\n", treetment + 1);
	}


	return 0;
}