#include <stdio.h>
#include <stdlib.h>

void BT0()
{
    char name[50];
    unsigned int year_old;
    char phone_number[20];

    printf("Nhap ten: ");
    gets(name);
    fflush(stdin);
    printf("Nhap tuoi: ");
    scanf("%u", &year_old);
    fflush(stdin);
    printf("Nhap so dien thoai: ");
    scanf("%s", &phone_number);

    printf("Ten: %s\tTuoi: %d\tSo dien thoai: %s\n", name, year_old, phone_number);
}

void BT1()
{
    double a, b, c;
    printf("Nhap vao so a: ");
    scanf("%lf", &a);
    printf("Nhap vao so b: ");
    scanf("%lf", &b);
    printf("Nhap vao so c: ");
    scanf("%lf", &c);
    printf("Tong binh phuong cua ba so: %.1lf", a*a+b*b+c*c);
}

void BT2()
{
    unsigned int dd, mm, yyyy;
    printf("Nhap vao ngay: ");
    scanf("%u", &dd);
    printf("Nhap vao thang: ");
    scanf("%u", &mm);
    printf("Nhap vao nam: ");
    scanf("%u", &yyyy);

    printf("%2d/%2d/%4d", dd, mm, yyyy);
}

void BT3()
{
    char ans;
    unsigned int correct_ans=0;
    printf("Cau 1: 1+3=?\nA.4\tB.8\tC.10\tD.12\n");
    fflush(stdin);
    scanf("%c", &ans);
    if (ans=='A' || ans=='a') correct_ans++;
    printf("Cau 2: 7+3=?\nA.4\tB.8\tC.10\tD.12\n");
    fflush(stdin);
    scanf("%c", &ans);
    if (ans=='C' || ans=='c') correct_ans++;
    printf("Cau 3: 9+3=?\nA.4\tB.8\tC.10\tD.12\n");
    fflush(stdin);
    scanf("%c", &ans);
    if (ans=='D' || ans=='d') correct_ans++;
    printf("So cau tra loi dung la: %d", correct_ans);
}

int main()
{
    BT0();
    BT1();
    BT2();
    BT3();
}
