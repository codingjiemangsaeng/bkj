#include <stdio.h>

int fibo(int f, int tmp[])
{
    if(f <= 1)
        return f;
    int i = 2;
    while (i <= f)
    {
        tmp[i] = tmp[i-2] + tmp[i-1];
        i++;
    }
    return tmp[f];
}

int main(void){
    int f;
    scanf("%d", &f);
    int tmp[f + 1];
    tmp[0] = 0;
    tmp[1] = 1;
    printf("%d",fibo(f, tmp));
}
