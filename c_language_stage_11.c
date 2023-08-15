# include <stdio.h>

 int mainn(void)
{
    int arr[5]; // 정수 자료형의 5의 길이를 가진 1차원 배열 생성
    int sum=0, i;
    
    arr[0]=10,arr[1]=20,arr[2]=30,arr[3]=40,arr[4]=50;

    for (i=0; i<5; i++)
        sum+=arr[i];
        
    printf("배열요소에 저장된 값의 합: %d \n", sum);
}


int kp(void)
{
    double num = 3.14;
    double *pnum = &num;
    *pnum = 3.5;
    printf("%f", *pnum);
    return 0;
}

int main(void)
{
    double num = 3.14;
    double *pnum = &num;
    *pnum = 3.5;
    printf("%f", *pnum);
    return 0;
}