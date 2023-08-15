# include <stdio.h>

int main(void) // 입력형태void 출력 형태:int, main이라는 함수
{
    int num1=0x47,num2=0x43;// 0x로 시작하면 16진수로 인식
    int num3=032, num4=024; // 0으로 시작하면 8진수로 인식

    printf("0x47의 10진수 정수 값: %d\n",num1);
    printf("0x43의 10진수 정수 값: %d\n",num2);
    printf("032의 10진수 정수 값: %d\n",num3);
    printf("024의 10진수 정수 값: %d\n",num4);

    int num1=15; //00001111
    int num2=20; //00010100
    int num3 = num1&num2; //num1과 num2의 비트 단위 & 연산 1 1 일떄만 1 반환
    printf("and 연산의 결과: %d \n",num3);

    int num4 =num1 | num2;
    printf("or 연산의 결과: %d \n",num4); //num1과 num2의 비트 단위 | 연산 0 1  1 0  1 1 일때 1 반환

    int num5 =num1^num2;
    printf("xor 연산의 결과 : %d \n",num5); //num1 과 num2의 비트 단위 ^ 연산  0  1   1  0  일떄 1 반환(두개의 비트가 서로 다른경우에 1 반환)

    int num6= ~num1; //msb도 반전이 되며 보수연산이 진행됨 0>>1, 1>>0 바뀜.
    printf("~num1의 연산의 결과: %d\n",num6);

    int result1 =num1<<1; //num1의 비트 열을 왼쪽으로 1칸씩 이동, 결과값 :30
    int result1 =num1<<2; //num1의 비트 열을 왼쪽으로 2칸씩 이동, 결과값 :60
    int result1 =num1<<3; //num1의 비트 열을 왼쪽으로 3칸씩 이동, 결과값 :120

    int num1=-16;
    int result2 =num1>>1; //num1의 비트 열을 오른쪽으로 1칸씩 이동, 결과값 :-8
    int result2 =num1>>2; //num1의 비트 열을 오른쪽으로 2칸씩 이동, 결과값 :-4
    int result2 =num1>>3; //num1의 비트 열을 오른쪽으로 3칸씩 이동, 결과값 :-2

}