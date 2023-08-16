# include <stdio.h>

int main(void) // 입력형태void 출력 형태:int, main이라는 함수
{
    char ch=9;
    int inum=1052;
    double dnum=3.1415;
    printf("변수 ch의 크기: \n",sizeof(ch));
    printf("변수 inum의 크기: \n",sizeof(inum));
    printf("변수 dnum의 크기: \n",sizeof(dnum));
    printf("변수 char의 크기: \n",sizeof(char));
    printf("변수 int의 크기: \n",sizeof(int));
    printf("변수 float의 크기: \n",sizeof(double));

    char ch1='A', ch2=65;
    int ch3='Z', ch4=95;
    printf("%c %d \n", ch1, ch1);
    printf("%c %d \n", ch2, ch2);
    printf("%c %d \n", ch3, ch3);
    printf("%c %d \n", ch4, ch4);

    int num = 30 +40; //리터럴 상수: 이름이 없는 상수
    const int MAX=100; //값의 변경이 안되는 상수 CONST 상수

    double num1=245;
    int num2=3.1415;
    int num3=129;
    char ch=num3;
    print("정수 245를 실수로: %f \n",num1);
    print("실수 3.1415를 정수로: %d \n",num2);
    print("큰 정수 129를 실수로: %d \n",ch); //형 변환 하면서 실수형>>정수형으로 바뀌면 뒤에 4바이트 짤린만큼 데이터 손실

    short num1=15,num2=25;
    short num3=num1+num2;//num1과 num2가 int형으로 형 변환

    double num1=5.15+19;//int형 정수를 double형 실수로 형 변환

    int num4=3;
    double num5=2.5*(double)num4;//명시적 형 변환.>> 강제적으로 형을 변환시키는것
}