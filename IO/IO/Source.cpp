#include<stdio.h>

int main(void)
{
	int s = 5;
	int num = 1;

	printf("1~9�� �ϳ��� �Է����ּ���:\n");
	scanf_s("%d", &s);
	fseek(stdin, 0, SEEK_END);		//�Է¹��� �� �ٿ��ֱ�, ���� �����ִ�..??

	while (num <= 9)
	{
		printf("%d * %d = %d\n", s, num, s * num);
		num++;
	}

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
