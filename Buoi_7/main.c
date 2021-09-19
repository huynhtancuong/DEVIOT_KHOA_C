#include <stdio.h>
#include <stdlib.h>

void bai_1()
{
    int a, b;
    printf("Nhap a: ");
    fflush(stdin);
    scanf(" %d", &a);
    printf("Nhap b: ");
    fflush(stdin);
    scanf(" %d", &b);
    printf("Sum = %d", getSum(&a, &b));
}

void bai_2()
{
    int n;
    printf("Nhap so luong phan tu: ");
    fflush(stdin);
    scanf(" %d", &n);
    int arr[n];
    nhap_mang(arr, n);
    in_mang(arr, n);
}

void bai_3()
{
    int arr[5] = {4, 2, 9, 55, 2};
    int sum = tinh_tong_phan_tu(arr, 5);
    printf("Sum = %d\n", sum);
}

void bai_4()
{
    char s[] = "Deviot\0";
    int doDaiChuoi = tim_do_dai_chuoi(s);
    printf("Do dai chuoi = %d", doDaiChuoi);
}

void bai_5()
{
    int arr[6] = {5, 2, 0, 5, 9, 0};
    duyet_mang_va_in_ra_gia_tri_dao_nguoc(arr, 6);
}

void bai_6()
{
    int arr[6] = {5, 2, 0, 5, 9, 0};
    sap_xep_mang_tang_dan(arr, 6);
    in_mang(arr, 6);
    printf("\n");
    sap_xep_mang_giam_dan(arr, 6);
    in_mang(arr, 6);
}

void sap_xep_mang_tang_dan(int* arr, int n)
{
    for (int i = n-1; i >=0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j]>arr[j+1]) swap(&arr[j], &arr[j+1]);
        }
    }
}

void sap_xep_mang_giam_dan(int* arr, int n)
{
    for (int i = n-1; i >=0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j]<arr[j+1]) swap(&arr[j], &arr[j+1]);
        }
    }
}

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void duyet_mang_va_in_ra_gia_tri_dao_nguoc(int *arr, int n)
{
    for (int i = n-1; i>=0; i--)
    {
        printf("%d\n", arr[i]);
    }
}

int tim_do_dai_chuoi(char* s)
{
    int doDaiChuoi = 0;
    for (int i = 0; s[i]!='\0'; i++)
    {
        doDaiChuoi++;
    }
    return doDaiChuoi;
}

int tinh_tong_phan_tu(int* arr, int n)
{
    int sum = 0;
    for (int i = 0; i< n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}


void nhap_mang(int *arr, int n)
{
    for (int i = 0; i<n; i++)
    {
        printf("Nhap phan tu A[%d]: ", i);
        scanf(" %d", &arr[i]);
    }
}

void in_mang(int *arr, int n)
{
    for (int i = 0; i<n; i++)
    {
        printf("Phan tu A[%d]= %d\n", i, arr[i]);
    }
}

int getSum(int* a, int* b)
{
    return *a+*b;
}

int main()
{
    //bai_1();
    //bai_2();
    //bai_3();
    //bai_4();
    //bai_5();
    bai_6();
    return 0;
}
