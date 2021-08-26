#include <stdio.h>
#include <stdlib.h>

#define setbit(byte, pos) byte|=(1<<pos)
#define clearbit(byte, pos) byte&=~(1<<pos)
#define togglebit(byte, pos) byte^=(1<<pos)

void printbit(int num)
{
    int bits=sizeof(num)*8;
    for (int i = 0; i<bits; i++)
    {
        printf("%d", ((num&(1<<bits-1))>>bits-1)&1);
        num<<=1;
    }
}
//4 bytes
//bits = sizeof(num)*8 = 4*8=32
void BT5()
{
    int num;
    printf("Nhap vao mot so: ");
    scanf("%d", &num);
    //printf("%d", sizeof(num));
    printbit(num);
}

int main()
{
    unsigned char a = 0b10100110;
    BT5();
    //printf("\n%d", a);
    return 0;
}
