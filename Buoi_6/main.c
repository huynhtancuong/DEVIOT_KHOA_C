#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void bai_1()
{
    char string[] = "Deviot.vn";
    printf("Ky tu 't' xuat hien o vi tri %d", strstr(string, "t")-string);
}

void bai_2()
{
    char string[50];
    char c[50];
    memset(string, "\0", 50);
    printf("Nhap vao chuoi: ");
    gets(string);
    printf("Nhap vao chuoi can tim: ");
    gets(c);
    char* f = strstr(string, c);
    if (f == NULL) printf("Khong tim thay chuoi.");
    else printf("Tim thay chuoi o vi tri %d.\n", f-string);
}

void bai_3()
{
    char ngay[3];
    char thang[3];
    char nam[5];
    char s[] = "20/03/2021";
    char* token;

    token = strtok(s, "/");
    strcpy(ngay, token);

    token = strtok(NULL, "/");
    strcpy(thang, token);

    token = strtok(NULL, "/");
    strcpy(nam, token);

    printf("Ngay %s thang %s nam %s.\n", ngay, thang, nam);
}

void bai_4()
{
    char s[50] = "Deviot hoc tha lam that dao tao that";

    for (int i = 0; i<strlen(s); i++)
    {
        if (s[i]==' ')
        {
            s[i] = '\0';
            strcat(s+i, s+i+1);
        }
    }
    printf("%s", s);
}

void bai_5()
{
    char string[50];
    char c[50];
    memset(string, "\0", 50);
    printf("Nhap vao chuoi: ");
    gets(string);
    printf("Nhap vao chuoi can tim: ");
    gets(c);
    char* f = strstr(string, c);
    if (f == NULL) printf("Khong tim thay chuoi.");
    else
    {
        int times = 0;
        while (f!=NULL)
        {
            times++;
            f = strstr(f+1, c);
        }
        printf("Chuoi da xuat hien %d lan.\n", times);
    }

}

void bai_6()
{
    char string[50];
    memset(string, "\0", 50);
    printf("Nhap vao chuoi: ");
    gets(string);
    for (int i = 0; i<strlen(string); i++)
    {
        if (string[i] == ' ') continue;
        if (string[i] < 'a') string[i]+='a'-'A';
        else string[i] -='a'-'A';
    }
    printf("%s\n", string);
}


int main ()
{
    bai_1();
    bai_2();
    bai_3();
    bai_4();
    bai_5();
    bai_6();
    return(0);
}
