#include <stdio.h>
int main()
{
	int i, j, k;
	for (i = 1; i <= 5; i++)               //��������
	{
		for (j = 1; j <= 5 - i; j++)       //�ո���
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++)   //��ʾ*�ŵ�����
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}