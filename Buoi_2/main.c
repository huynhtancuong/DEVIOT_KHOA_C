#include <stdio.h>
#include <stdlib.h>

#define setbit(byte, pos)       byte|=(1<<pos)    //Bai tap 1
#define clearbit(byte, pos)     byte&=~(1<<pos) //Bai tap 2
#define togglebit(byte, pos)    byte^=(1<<pos) //Bai tap 3

void printbit(char num)  //Bai tap 4
{
    int bits=sizeof(num)*8;
    for (int i = 0; i<bits; i++)
    {
        printf("%d", ((num&(1<<bits-1))>>bits-1)&1);
        num<<=1;
    }
    printf("\n");
}
//4 bytes
//bits = sizeof(num)*8 = 4*8=32
void BT5()  //Bai tap 5
{
    int num;
    printf("Nhap vao mot so: ");
    scanf("%d", &num);
    //printf("%d", sizeof(num));
    printbit(num);
}

void BT6()  //Bai tap 6
{
    int num;
    printf("Nhap vao mot so: ");
    scanf(" %d", &num);
    int tmp=0;
    while (num!=0)
    {
        tmp=tmp*10+(num%10);
        num/=10;
    }
    while (tmp!=0)
    {
        printf("%d ", tmp%10);
        tmp/=10;
    }

}

int main()
{
    printbit((char)5);
    return 0;
}
