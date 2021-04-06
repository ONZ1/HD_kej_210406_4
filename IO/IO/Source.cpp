#include<stdio.h>

int main(void)
{
	int s = 5;
	int num = 1;

	printf("1~9중 하나를 입력해주세요:\n");
	scanf_s("%d", &s);
	fseek(stdin, 0, SEEK_END);		//입력받을 때 붙여주기, 버퍼 없애주는..??

	while (num <= 9)
	{
		printf("%d * %d = %d\n", s, num, s * num);
		num++;
	}

	fgetc(stdin);		//입력 전에 프로그램 바로 끝내버리지 않도록
}
/*
		정수형
			int		4byte	정수
			long	2~4byte	정수
			short	2byte	정수

		부동소수점형
			float		4byte	실수
			double		8byte	실수		연산 속도 차이로 잘 안씀
			long double	16byte	실수

		문자형
			char	1byte	ASCII코드

		부울형
			bool	1byte	true, false

		NULL, nullptr	빈 값



	변수명의 시작은 영소문자. 언더바, 영문자, 숫자 사용 가능. 대소문자 구분.
	되도록 변수 선언시 초기화.
	함수, 클래스는 대문자

		
		%d	10진 정수값
		%f	실수값,float
		%c	문자 한 개

		\n	줄바꿈 개행문자
*/
