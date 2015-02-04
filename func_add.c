/**

    @mainpage Project : vitzro_rnd

    @section intro 소개

        - 소개 : 간단한 프로젝트 소개 

        - 설명 : 덧셈 프로그램

    @section Program 프로그램명 : func_add.c

    @section InOut 입/출력

        - INPUT : 두개의 정수 입력

        - OUTPUT : 정수의 합 출력

    @section  CreateInfo 작성 정보

        - 작성자 :   신입사원 장민철

        - 작성일 :   2014년 02월 03일

    @section  ModifyInfo 수정 정보

        - 2014년 02월 04일

            -# 메인 소스 파일 작성

    @section Caution 주의할 사항

        - 

    @section common 기타 정보

        - 저작권    vitzrosys_HW

        - 외부공개 금지

*/

/**
* @file func_add.c
* @brief main source file
*/

#include <stdio.h>


/**
* @brief Add 함수의 원형 선언입니다.
*/
int Add(int a, int b);

/**
* @brief Input 함수의 원형 선언입니다.
*/
int Input(void);

/**
* @brief Result_Print 함수의 원형 선언입니다.
*/
void Result_Print(int val);

/**
* @brief Intro 함수의 원형 선언입니다.
*/
void Intro(void);

/**
* @brief main함수 입니다.
* @details 덧셈 프로그램 만들기
* @return return 값은 0입니다.
*/

int main(void)
{
int a, b;
int output;
Intro();
a=Input();
b=Input();

output = Add(a,b);
Result_Print(output);

return 0;
}

/**
* @brief Add 함수의 정의입니다.
* @return return 값은 result입니다.
*/

int Add(int i, int j) 
{
int result = i + j;
return result;
}

/**
* @brief Input 함수의 정의입니다.
* @return return 값은 input입니다.
*/

int Input(void)
{
int input;
scanf("%d", &input);
return input;
}

/**
* @brief Result_Print 함수의 정의입니다.
* @return return 값은 result입니다.
*/

void Result_Print(int val)
{
printf("덧셈의 대한 결과: %d \n", val);
printf("******END****** \n");
}

/**
* @brief Intro 함수의 정의입니다.
*/

void Intro(void)
{
printf("******START******");
printf("두 개의 정수 입력: ");
}
