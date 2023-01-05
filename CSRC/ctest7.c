#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct date{
    int year;
    int mounth;
    int day;
};
typedef struct date date;

struct fruit{
    char name[30];      // �����̸�
    int price;          // ����
    date expire;        // ������
    char throw;         // ��⿩��
};
typedef struct fruit fruit;


void ex_06()
{
    fruit any;
    
    printf("�����̸�: ");
    gets(any.name);
    printf("����: ");
    scanf("%d", &any.price);

    while(getchar() != '\n');

    printf("������: ");
    int ymd;
    scanf("%d", &ymd);
    any.expire.year = ymd/10000;
    any.expire.mounth = ymd%10000/100;
    any.expire.mounth = ymd/100;
}

void ex_07()
{
    fruit *p;

    fruit store[5] = {"apple", 500, 2021, 9, 1, 'n',
                "banana", 500, 2020, 7, 3, 'n',
                "orange", 500, 2021, 8, 1, 'n',
                "melon", 500, 2020, 11, 11, 'n',
                "mango", 500, 2020, 12, 25, 'n'};
    
    p = store;
    
    for(int i = 0; i < 5; i++){
        printf("%d) name = %s, price = %d, year = %d, mounth = %d, day = %d, throw = %c\n",
        i, (p+i)->name, (p+i)->price, (p+i)->expire.year, (p+i)->expire.mounth, (p+i)->expire.day, (p+i)->throw);
    }

}

void ex_08()
{
    fruit *p;

    fruit store[5] = {"apple", 500, 2020, 9, 1, 'n',
                "banana", 500, 2021, 7, 3, 'n',
                "orange", 500, 2020, 8, 1, 'n',
                "melon", 500, 2021, 11, 11, 'n',
                "mango", 500, 2020, 12, 25, 'n'};
    
    p = store;

    time_t now = time(NULL);
    struct tm *today;
    today = localtime(&now);

    int nowy = today->tm_year + 1900;
    int nowm = today->tm_mon + 1;
    int nowd = today->tm_mday;

    int nowday = nowy*365 + nowm*30 + nowd;

    printf("���� ��¥�� %d�� %d�� %d�� �Դϴ�.\n", nowy, nowm, nowd);
    
    for(int i = 0; i < 5; i++){
        int exday = (p+i)->expire.year*365 + (p+i)->expire.mounth*30 + (p+i)->expire.day;
        if(nowday > exday){
            (p+i)->throw = 'y';
        }
    }

    for(int i = 0; i < 5; i++){
        printf("%d) name = %s, price = %d, year = %d, mounth = %d, day = %d, throw = %c\n",
        i, (p+i)->name, (p+i)->price, (p+i)->expire.year, (p+i)->expire.mounth, (p+i)->expire.day, (p+i)->throw);
    }



    
}

void ex_10()
{
    printf("20175115 �輺��\n");
    fruit *p;

    fruit store[5] = {"apple", 500, 2020, 9, 1, 'n',
                "banana", 500, 2020, 7, 3, 'n',
                "orange", 500, 2020, 8, 1, 'n',
                "melon", 500, 2020, 11, 11, 'n',
                "mango", 500, 2020, 12, 25, 'n'};
    
    p = store;

    time_t now = time(NULL);
    struct tm *today;
    today = localtime(&now);

    int nowy = today->tm_year + 1900;
    int nowm = today->tm_mon + 1;
    int nowd = today->tm_mday;

    int nowday = nowy*365 + nowm*30 + nowd;

    printf("���� ��¥�� %d�� %d�� %d�� �Դϴ�.\n", nowy, nowm, nowd);

    for (int i = 0; i < 5; i++)
    {
        int exday = (p + i)->expire.year * 365 + (p + i)->expire.mounth * 30 + (p + i)->expire.day;
        if (nowday > exday)
        {
            (p + i)->throw = 'y';
        }
    }

    int hap = 0;
    for(int i = 0; i < sizeof(store)/sizeof(store[0]); i++){
        if((p+i)->throw == 'y'){
            hap += (p+i)->price;
        }
    }

    printf("��� �Ǵ� �׸���� �Ѿ��� %d���Դϴ�.", hap);
}


int main()
{
    ex_10();
}
