#include<stdio.h>

int main(void) {

	int num = 0;

	printf("1���� ū ���� �Է��غ�����.\n");

	scanf_s("%d", &num);
	fseek(stdin, 0, SEEK_END);

	if (num % 2 == 0)
	{
		if (num == 0)
		{
			printf("Error");
		}
		else
			printf("¦��");
	}
	else
		printf("Ȧ��");

	fgetc(stdin);
	return 0;
}