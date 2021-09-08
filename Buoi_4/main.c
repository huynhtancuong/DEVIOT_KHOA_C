#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define setbit(n, pos) n=n|(1<<pos)

float bai_1(float a, float b, int* status)
{

    if (a==0)
    {
        if (b==0) *status = -1;//vo so nghiem
        else *status = 0; //vo nghiem
    }
    else
    {
        *status = 1;
        return (float)-b/a;
    }
    return 0;
}

bool sneekbit(int n, int pos)
{
    //bits of int = 4bytes*8bits = 32 bits
    //vi vay nen 0<=pos<=31
    if (!(pos>=0 && pos <=31))
        return -1;
    //pos = 4
    //10101010010101
    //1<<pos
    //00000000010000
    //&1<<pos
    //00000000010000
    //>>pos
    //00000000000001
    //(&(1<<pos))>>pos
    return (n&(1<<pos))>>pos;
}

void bai_2(int n)
{
    int sochuso = log10(n)+1;
    int danhdau = 0;
    //0000000000
    //9876543210
    //neu mot so da duoc su dung thi vi tri cua so do se tro thanh bit 1

    //in so chan
    int tmp = n;
    printf("=> so chan: ");
    for (int i = sochuso-1; i>=0; i--)
    {
        int num = tmp/pow(10,i);
        tmp=tmp%(int)pow(10,i);
        if (!(num&1) && !sneekbit(danhdau, num))
        {
            printf("%d, ", num);
            setbit(danhdau, num);
        }
    }
    //in so le
    printf("\n");
    tmp = n;
    printf("=> so le: ");
    for (int i = sochuso-1; i>=0; i--)
    {
        int num = tmp/pow(10,i);
        tmp=tmp%(int)pow(10,i);
        if ((num&1) && !sneekbit(danhdau, num))
        {
            printf("%d, ", num);
            setbit(danhdau, num);
        }
    }
}

void bai_3_a(int n)
{
    int S=0;
    for (int i = 1; i<=n; i++)
        S+=i;
    printf("S= %d", S);
}

void bai_3_b(int n)
{
    int S=0;
    for (int i = 1; i<=n; i++)
        S+=i*i;
    printf("S= %d", S);
}

int bai_4(int a, int b)
{
    int uoc_chung_lon_nhat = 1;
    for (int i = ((a<b)?a:b); i>=2; i--)
        if (a%i==0 && b%i==0)
        {
            uoc_chung_lon_nhat = i;
            break;
        }
    return uoc_chung_lon_nhat;
}

int main()
{
    printf("%d", bai_4(3, 9));
    return 0;
}
