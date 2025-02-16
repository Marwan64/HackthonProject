#include "Header.h"




void playGame()
{
}

//Printd out the menu and prompts user for which option they would like to select from.
int menu()
{
	int choice = 0;

	printf("1. Playing Mental Math \n2. Exit the game\n");
	scanf("%d", &choice);

	return choice;
}

//Returns 1 if user answers correctly and 0 if otherwise. Each level is representative of the number of digits that can appear in a question.
int addition_problem_level_1(int* score) {
	int num1 = rand() % 9 + 1;
	int num2 = rand() % 9 + 1;

	int answer = num1 + num2;
	printf("The problem is %d + %d, what is the answer? \n");
	int reponce;
	scanf(%d, &reponce);
	if (respince == answer) {
		&score += 5;
		printf("Correct! \n");
		return 1;
	}
	else
	{
		printf("Sorry that incorrect!\n");
		return 0;
	}
}
int addition_problem_level_2(int* score) {
	int num1 = rand() % 99 + 1;
	int num2 = rand() % 99 + 1;

	int answer = num1 + num2;
	printf("The problem is %d + %d, what is the answer? \n");
	int reponce;
	scanf(% d, &reponce);
	if (respince == answer) {
		&score += 10;
		printf("Correct! \n");
		return 1;
	}
	else
	{
		printf("Sorry that incorrect!\n");
		return 0;
	}
}
int addition_problem_level_3(int* score) {
	int num1 = rand() % 999 + 1;
	int num2 = rand() % 999 + 1;

	int answer = num1 + num2;
	printf("The problem is %d + %d, what is the answer? \n");
	int reponce;
	scanf(% d, &reponce);
	if (respince == answer) {
		&score += 20;
		printf("Correct! \n");
		return 1;
	}
	else
	{
		printf("Sorry that incorrect!\n");
		return 0;
	}
}

