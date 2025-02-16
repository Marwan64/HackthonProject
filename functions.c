#include "Header.h"




void playGame()
{
	int score = 0, wrong_answer = 0, modifier = 2;
	while (wrong_answer < 3)
	{
		
		if (score < 25) {
			int select = rand() % 3 + 1;
			if (select == 1) { 
				if (addition_problem_level_1(&score) == 0) wrong_answer++;
			}
			if (select == 2) { 
				if (subtraction_problem_level_1(&score) == 0) wrong_answer++;
			}
			if (select == 3) {}
		}
		if (score < 75 && score > 25) {
			int select = rand() % 3 + 1;
			if (select == 1) {
				if (addition_problem_level_2(&score) == 0) wrong_answer++;
			}
			if (select == 2) {
				if (subtraction_problem_level_2(&score) == 0) wrong_answer++;
			}
			if (select == 3) {}
		}
		else{
			int select = rand() % 3 + 1;
			if (select == 1) {
				if (addition_problem_level_3(&score) == 0) wrong_answer++;
			}
			if (select == 2) {
				if (subtraction_problem_level_3(&score) == 0) wrong_answer++;
			}
			if (select == 3) {}
		}
		//logic must be filled out
	}
}


void print_result(int point)
{
	printf("game over your point is %d", point);
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
	int responce;
	scanf("%d", &responce);
	if (responce == answer) {
		score += 5;
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
	int responce;
	scanf("%d", &responce);
	if (responce == answer) {
		score += 10;
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
	printf("The problem is %d + %d, what is the answer? \n", num1, num2);
	int responce;
	scanf("%d", &responce);
	if (responce == answer) {
		score += 20;
		printf("Correct! \n");
		return 1;
	}
	else
	{
		printf("Sorry that incorrect!\n");
		return 0;
	}
}

int subtraction_problem_level_1(int* score) {
	int num1 = rand() % 9 + 1;
	int num2 = rand() % 9 + 1;

	int answer = num1 - num2;
	printf("The problem is %d + %d, what is the answer? \n", num1, num2);
	int responce;
	scanf("%d", &responce);
	if (answer == responce)
	{
		score += 5;
		printf("Correct! \n");
		return 1;
	}
	else
	{
		printf("Sorry that incorrect!\n");
		return 0;
	}
}
int subtraction_problem_level_2(int* score) {
	int num1 = rand() % 99 + 1;
	int num2 = rand() % 99 + 1;

	int answer = num1 - num2;
	printf("The problem is %d + %d, what is the answer? \n", num1, num2);
	int responce;
	scanf("%d", &responce);
	if (answer == responce)
	{
		score += 10;
		printf("Correct! \n");
		return 1;
	}
	else
	{
		printf("Sorry that incorrect!\n");
		return 0;
	}
}
int subtraction_problem_level_3(int* score) {
	int num1 = rand() % 999 + 1;
	int num2 = rand() % 999 + 1;

	int answer = num1 - num2;
	printf("The problem is %d + %d, what is the answer? \n", num1, num2);
	int responce;
	scanf("%d", &responce);
	if (answer == responce)
	{
		score += 20;
		printf("Correct! \n");
		return 1;
	}
	else
	{
		printf("Sorry that incorrect!\n");
		return 0;
	}
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int timer() {
	srand(time(0));  // Seed the random number generator with the current time

	for (int i = 0; i < 5; i++) {
		// Generate two random numbers between 1 and 9
		int num1 = rand() % 9 + 1;
		int num2 = rand() % 9 + 1;
		int answer = num1 * num2;

		// Starts the timer 
		clock_t start = clock();

		char input[100];
		int guess, result;
		int attempts = 0;

		printf("What is %d * %d? You have 30 seconds to answer.\n", num1, num2);

		// Timer checks to see if 30 seconds have passed
		while (1) {
			clock_t difference = clock() - start;
			int elapsed = difference / CLOCKS_PER_SEC;
			if (elapsed >= 30) {  // Changed time limit to 30 seconds
				printf("Time's up! Better luck next time!\n");
				break;
			}

			// Prompt user to enter the answer  
			printf("Enter your answer (remaining time: %d seconds): ", 30 - elapsed);  // Updated remaining time display
			fgets(input, sizeof(input), stdin);  // Read input as a string
		}
	}
