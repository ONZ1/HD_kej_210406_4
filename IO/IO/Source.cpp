#include<stdio.h>

int main(void)
{
	int five = 5;		

	printf("%d * 1 = %d\n", five, five * 1);
	printf("%d * 2 = %d\n", five, five * 2);
	printf("%d * 3 = %d\n", five, five * 3);
	printf("%d * 4 = %d\n", five, five * 4);
	printf("%d * 5 = %d\n", five, five * 5);
	printf("%d * 6 = %d\n", five, five * 6);
	printf("%d * 7 = %d\n", five, five * 7);
	printf("%d * 8 = %d\n", five, five * 8);
	printf("%d * 9 = %d\n", five, five * 9);

	/*int s = 5;
	int num = 1;

	printf("1~9�� �ϳ��� �Է����ּ���:\n");
	scanf_s("%d", &s);
	fseek(stdin, 0, SEEK_END);		//�Է¹��� �� �ٿ��ֱ�, ���� �����ִ�..??

	while (num <= 9)
	{
		printf("%d * %d = %d\n", s, num, s * num);
		num++;
	}��.....*/

	fgetc(stdin);		//�Է� ���� ���α׷� �ٷ� ���������� �ʵ���
}
/*
		������
			int		4byte	����
			long	2~4byte	����
			short	2byte	����

		�ε��Ҽ�����
			float		4byte	�Ǽ�
			double		8byte	�Ǽ�		���� �ӵ� ���̷� �� �Ⱦ�
			long double	16byte	�Ǽ�

		������
			char	1byte	ASCII�ڵ�

		�ο���
			bool	1byte	true, false

		NULL, nullptr	�� ��



	�������� ������ ���ҹ���. �����, ������, ���� ��� ����. ��ҹ��� ����.
	�ǵ��� ���� ����� �ʱ�ȭ.
	�Լ�, Ŭ������ �빮��

		
		%d	10�� ������
		%f	�Ǽ���,float
		%c	���� �� ��

		\n	�ٹٲ� ���๮��
*/
