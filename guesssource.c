#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int guess = 0;
	int rep = 1;
	int tries = 0;
	int i = 0;
	srand(time(NULL));
	int num = rand() % 100;
	
	
	
	while (rep <= 2)
	{
		system("cls");
		tries = 0;
		srand(time(NULL));
		int num = rand() % 100;
		do
		{

			fflush(stdin);
			printf(" Please pick a number between 1 and 100\n");
			scanf("%d", &guess);
			if (guess > num)
			{
				printf("Guess lower\n");
				tries++;
			}
			else if (guess < num)
			{
				printf("Guess higher\n");
				tries++;
			}
			else if (guess == num)
			{
				printf("Congrats you got it !!!\n");
				printf("It took you %d tries\n", tries);
				if (tries < 5)
				{
					printf("very good\n");
				}

				printf("Would you like to try again \n");
				scanf("%d", &rep);

				system("pause");
			}

			else
			{
				printf("error");
			}
		} while (guess != num);
	} while (rep <= 2);

 
	system("cls");
	system("pause");
	 
}