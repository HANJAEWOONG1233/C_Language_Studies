# include <stdio.h>

int main(void) // 입력형태void 출력 형태:int, main이라는 함수
{
    int num; //num이라는 이름의 변수 선언. int는 정수의 저장이 가능한 메모리 공간 할당, num은 메모리 공간의 이름.
    num=20; // 변수 num에 20 저장(오른쪽에 오는 값을 왼쪽 변수에 저장)>> 선언된 변수에 값을 저장하는 것을 초기화라 함.
    printf("%d",num); // 변수 num 값을 참조

    int num1,num2; //이렇게 동시 선언 가능. 대신 쓰레기값(아무 의미 없는 값)이 저장됨.
    int num3=30,num4=40; //이렇게 두개의 변수를 선언하고 초기화까지 같이 가능.

    int num1=10,num2=20;
    num1=num1+3; //일반 대입 연산자
    num1+=3; // num1=num1+3 >>복합 대입연산자
    num1*3; //num1=num1*3

    ++num1; //값을 1 증가후 나머지 문장 실행
    num1++; // 다음 줄부터 1증가한 값이 적용됨

    int num1=10;
    int num2=(num1--)+2; //답은 12 다음줄로 넘어가지 않앗으므로 num2 는 10+2=12가됨

    int num1=10, num2=12;
    int result1,result2,result3;
    result1=(num1==10 && num2==12);
    result2=(num1<12 || num2>12);
    result3=(!num1);
    
    int result;
    int num1, num2, num3;

    printf("3개의 정수 입력:");
    scanf(" %d %d %d",&num1,&num2,&num3);

    result=num1+num2+num3;
    printf("%d + %d +%d = %d\n", num1,num2,num3,result);
    return 0;


    }

// 변수의 자료형에 따라 int형 double형(정수형, 실수형으로 나뉨)
