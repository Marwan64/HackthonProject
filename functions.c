

int addition_problem_level_1(int* score) {
	int num1 = rand() % 10 + 1;
	int num2 = rand() % 10 + 1;

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