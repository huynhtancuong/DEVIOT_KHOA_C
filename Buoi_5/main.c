#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int n)
{
    if (n<1) return 0;
    if (n==1) return 0;
    if (n==2 || n==3) return 1;
    for (int i = 2; i<=sqrt(n); i++)
        if (n%i==0)
        {
            return 0;
        }
    return 1;
}

void nhap_mang(int* arr, int number_of_row, int number_of_collum)
{
    for (int i = 0; i<number_of_row; i++)
    {
        for (int j = 0; j<number_of_collum; j++)
        {
            printf("Nhap gia tri phan tu arr[%d][%d]: ", i, j);
            fflush(stdin);
            scanf(" %d", arr+i*number_of_collum+j);
        }

    }
}

void in_mang_so(int* arr, int number_of_row, int number_of_collum)
{
    for (int i = 0; i<number_of_row; i++)
    {
        for (int j = 0; j<number_of_collum; j++)
        {
            printf("%3d ", *(arr+i*number_of_collum+j));
        }
        printf("\n");

    }
}

void cat_hang_mang_chu(char* arr, int number_of_row, int number_of_collum, int cut_row)
{
    for (int row = cut_row; row < number_of_row-1; row++)
    {
        for (int col = 0; col < number_of_collum; col++)
        {
            *(arr+row*number_of_collum+col) = *(arr+(row+1)*number_of_collum+col);
        }
    }
    for (int col = 0; col < number_of_collum; col++)
        *(arr+(number_of_row-1)*number_of_collum+col) = ' ';
}

void in_mang_chu(char* arr, int number_of_row, int number_of_collum)
{

    for (int i = 0; i<number_of_row; i++)
    {
        for (int j = 0; j<number_of_collum; j++)
        {
            printf("%c", *(arr+i*number_of_collum+j));
        }
        printf("\n");

    }

    //printf("addr = %d", &arr[1][39]);
}

int find_max(int* arr, int number_of_row, int number_of_collum)
{
    int max = *arr;
    int row_max = 0, col_max = 0;
    for (int row = 0; row<number_of_row; row++)
    {
        for (int col = 0; col<number_of_collum; col++)
        {
            if (max < *(arr+row*number_of_collum+col))
            {
                row_max = row;
                col_max = col;
                max = *(arr+row*number_of_collum+col);
            }
        }
    }
    printf("Phan tu lon nhat trong mang nam tai hang [%d] cot [%d], co gia tri = %d.\n", row_max, col_max, max);
}

int find_min(int* arr, int number_of_row, int number_of_collum)
{
    int min = *arr;
    int row_min = 0, col_min = 0;
    for (int row = 0; row<number_of_row; row++)
    {
        for (int col = 0; col<number_of_collum; col++)
        {
            if (min > *(arr+row*number_of_collum+col))
            {
                row_min = row;
                col_min = col;
                min = *(arr+row*number_of_collum+col);
            }
        }
    }
    printf("Phan tu nho nhat trong mang nam tai hang [%d] cot [%d], co gia tri = %d.\n", row_min, col_min, min);
}

int find_prime(int* arr, int number_of_row, int number_of_collum)
{
    for (int row = 0; row<number_of_row; row++)
    {
        for (int col = 0; col<number_of_collum; col++)
        {
            if (isPrime(*(arr+row*number_of_collum+col))) *(arr+row*number_of_collum+col) = 0;
        }
    }
}

void nhap_dong_cot(int* number_of_row, int* number_of_collum)
{
    fflush(stdin);
    printf("Nhap so luong dong: ");
    scanf(" %d", number_of_row);
    fflush(stdin);
    printf("Nhap so luong cot: ");
    scanf(" %d", number_of_collum);
}

void sort_name(char arr[], int number_of_collum)
{
    for (int i = number_of_collum-1; i>=0; i--)
    {
        for (int j = 0; j<i; j++)
        {
            if (arr[j] < arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

void bai_tap_4()
{
    printf("==========Bai_4==========\n");
    char ten[5][50];

    for (int i = 0; i<5*50; i++) *(ten[0]+i) = ' ';

    for (int i = 0; i<5; i++)
    {
        printf("Nhap ten thu %d: ", i);
        fflush(stdin);
        gets(ten[i]);
    }

    for (int i = 0; i<5; i++) sort_name(ten[i], 50);
    printf("\nMang ten sau khi sap xep: \n");
    in_mang_chu(ten, 5, 50);

}

void bai_tap_3()
{
    char log[5][40] =
    {
        "Nguoi dan Viet Nam",
        "Deviot.vn",
        "Hoc hoc nua hoc mai",
        "Chien tranh lanh",
        "ABC",
    };
    int row;
    printf("==========Bai_3==========\n");
    in_mang_chu(log, 5, 40);

    printf("Nhap hang muon cat: ");
    scanf(" %d", &row);
    printf("\nMang sau khi da cat: \n");
    cat_hang_mang_chu(log, 5, 40, row);
    in_mang_chu(log, 5, 40);
}

void bai_tap_1()
{
    printf("==========Bai_1==========\n");
    int number_of_row, number_of_collum;
    nhap_dong_cot(&number_of_row, &number_of_collum);
    int arr[number_of_row][number_of_collum];
    nhap_mang(arr, number_of_row, number_of_collum);
    in_mang_so(arr, number_of_row, number_of_collum);
    find_max(arr, number_of_row, number_of_collum);
    find_min(arr, number_of_row, number_of_collum);
}

void bai_tap_2()
{
    printf("==========Bai_2==========\n");
    int number_of_row, number_of_collum;
    nhap_dong_cot(&number_of_row, &number_of_collum);
    int arr[number_of_row][number_of_collum];
    nhap_mang(arr, number_of_row, number_of_collum);
    in_mang_so(arr, number_of_row, number_of_collum);
    find_prime(arr, number_of_row, number_of_collum);
    printf("\nMang da xoa cac so nguyen to: \n");
    in_mang_so(arr, number_of_row, number_of_collum);
}

int main()
{
    bai_tap_1();
    bai_tap_2();
    bai_tap_3();
    bai_tap_4();
    return 0;
}
