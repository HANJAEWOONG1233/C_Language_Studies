# include <stdio.h>

void recursive(int num)
{
    if(num<=0) //재귀의 탈출 조건
        return;
    printf("recursive call! %d \n", num);
    recursive(num-1);
}

int f(int n)
{
    if(n==0)
        return 1;
    else
        return n*f(n-1);
}

int main(void)
{
    recursive(3);
    printf("1!= %d \n",f(1));
    printf("2!= %d \n",f(2));
    printf("3!= %d \n",f(3));
    printf("4!= %d \n",f(4));
    printf("5!= %d \n",f(5));
}