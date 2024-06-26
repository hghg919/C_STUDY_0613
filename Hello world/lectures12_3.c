/*
*  작성자  : 정현준
*  작성일  : 2024-06-25
* 학습목표 : while 반복문
* 
* for 반복문 학습을 했습니다
* while 반복문으로도 반복을 표현을 할 수가 있습니다.
* 
* while(조건식) : 조건식이 true이면 루프 본체를 실행하고, 조건식이 false이면 다음 코드를 실행하라.
* {
*     코드 내용; /루프 본체 
*     변화식;
* }
* 
* do ~ while
* 
* do
* {
*     반복시킬 코드;
* }while(조건식);
* 
*/
#include "lectures.h"

void lectures12_3()
{
	int i = 0;
	while (i < 10) // i가 10보다 작으면 계속 반복해라
	{
		i = i + 2; // 변화식
		printf("hello wolrd!\n");
	}
	
	printf("\n");

	int index;
	scanf_s("%d", &index);

	while (index != 3) // while 조건식에 조건으로 대입연산자를 사용하면 무한 루프에 빠질 수 있으므로 유의해야 한다.
	{
		printf("hello world!\n");
		scanf_s("%d", &index);
	}

	// while 반복문의 장점 : 몇 번 반복될지 모르는 코드에서 사용하기 쉽다.

	printf("\n");

	// do ~ while 예제
	// 한 번은 반드시 출력하도록 구현이 되어 있는 코드.
	int i_donum = 1;
	do 
	{
		printf("한번은 반드시 출력하는 do ~ while문.\n");
		i_donum = i_donum * 3;
	} while (i_donum < 10);

	// 게임에서 한번은 반드시 실행해야 한다.
	// do while
}