#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bai_1()
{
    int a, b;
    printf("Phuong trinh ax+b=0\n");
    printf("Nhap a: ");
    fflush(stdin);
    scanf(" %d", &a);
    printf("Nhap b: ");
    fflush(stdin);
    scanf(" %d", &b);
    if (a==0)
    {
        if (b==0) printf("Phuong trinh co vo so nghiem.\n");
        else printf("Phuong trinh vo nghiem.\n");
    }
    else
    {
        printf("Phuong trinh co nghiem la x = %0.2f", (float)-b/a);
    }
}

void bai_2()
{
    float a, b, c;
    printf("Phuong trinh ax^x+bx+c=0\n");
    printf("Nhap a: ");
    fflush(stdin);
    scanf(" %f", &a);
    printf("Nhap b: ");
    fflush(stdin);
    scanf(" %f", &b);
    printf("Nhap c: ");
    fflush(stdin);
    scanf(" %f", &c);
    float delta = b*b-4*a*c;
    if (delta < 0) printf("Phuong trinh vo nghiem.\n");
    else if (delta == 0) printf("Phuong trinh co nghiem kep x= %0.2f", (float)-b/2*a);
    else printf("Phuong trinh co nghiem x1= %0.2f \t x2= %0.2f", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
}

void bai_3()
{
    int n;
    int tong = 0;
    fflush(stdin);
    printf("Nhap n= ");
    scanf(" %d", &n);
    for (int i = 1; i<=n; i++)
    {
        if (i&n) tong+=i*i;
    }
    printf("Tong binh phuong cac so le la %d", tong);
}

void bai_4()
{
    float a, b, c;
    printf("Nhap a: ");
    fflush(stdin);
    scanf(" %f", &a);
    printf("Nhap b: ");
    fflush(stdin);
    scanf(" %f", &b);
    printf("Nhap c: ");
    fflush(stdin);
    scanf(" %f", &c);
    float max = (a>b)?a:b;
    max = (max>c)?max:c;
    printf("So lon nhat la %0.2f.\n", max);
}

void bai_5()
{
    int a, b;
    printf("Nhap a: ");
    fflush(stdin);
    scanf(" %d", &a);
    printf("Nhap b: ");
    fflush(stdin);
    scanf(" %d", &b);
    int uoc_chung_lon_nhat = 1;
    int boi_chung_nho_nhat = a*b;
    for (int i = ((a<b)?a:b); i>=2; i--)
        if (a%i==0 && b%i==0)
        {
            uoc_chung_lon_nhat = i;
            break;
        }
    printf("Uoc chung lon nhat la %d.\n", uoc_chung_lon_nhat);
    for (int i = ((a>b)?a:b); i<=a*b; i++)
        if (i%a==0 && i%b==0)
        {
            boi_chung_nho_nhat = i;
            break;
        }

    printf("Boi chung nho nhat la %d.\n", boi_chung_nho_nhat);
}


void bai_6()
{
    int n;
    printf("Nhap n= ");
    scanf(" %d", &n);
    for (int number = 2; number<=n; number++)
    {
        bool isPrime = true;
        for (int i = 2; i<=sqrt(number); i++)
        {
            if (number%i==0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime) printf("%d ", number);
    }
}

void bai_7_a()
{
    int n, x;
    int S=0;
    printf("Chuong trinh tinh S = 1 + x + 2*x^2 + 3*x^3 + ... + n*x^n\n");
    printf("Nhap n = ");
    scanf(" %d", &n);
    printf("Nhap x = ");
    scanf(" %d", &x);
    for (int i = 1; i<=n; i++)
        S+=i*pow(x,i);
    printf("S= %d", S);
}

void bai_7_b()
{
    int n;
    int S=0;
    printf("Chuong trinh tinh S(n) = 1 + 3 + 5 +...+(2*n+1)\n");
    printf("Nhap n = ");
    scanf(" %d", &n);
    for (int i = 1; i<=n; i++)
        S+=2*i+1;
    printf("S= %d", S);
}

int main()
{
    bai_1();
    bai_2();
    bai_3();
    bai_4();
    bai_5();
    bai_6();
    bai_7_a();
    bai_7_b();
    return 0;
}
