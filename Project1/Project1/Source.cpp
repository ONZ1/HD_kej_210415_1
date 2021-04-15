#include<stdio.h>

int main(void) {

	int num = 0;

	printf("1보다 큰 수를 입력해보세요.\n");

	scanf_s("%d", &num);
	fseek(stdin, 0, SEEK_END);

	if (num % 2 == 0)
	{
		if (num == 0)
		{
			printf("Error");
		}
		else
			printf("짝수");
	}
	else
		printf("홀수");

	fgetc(stdin);
	return 0;
}