#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct fruit
{
    char name[20];      //과일 이름
    double price;       //단가
    int sales;          //판매량
};
typedef struct fruit fruit;

void input_datas(fruit *f, int size)
{
    for(int i = 0; i < size; i++){
        printf("과일종류 : ");
        gets((f+i)->name);
        printf("단가 : ");
        scanf("%lf", &(f+i)->price);
        printf("판매량 : ");
        scanf("%d", &(f+i)->sales);

        while(getchar() != '\n');
        puts("");
    }
}

void print_datas(fruit *f, int size)
{
    printf("=============================\n");
    printf("과일\t단가\t판매량\n");
    printf("=============================\n");
    for(int i = 0; i < size; i++){
        printf("%s\t%.2lf\t%d\n", (f+i)->name, (f+i)->price, (f+i)->sales);
    }
}

void write_file(fruit *f, int size, char *str)
{
    FILE *fp;

    fp = fopen(str, "wb");
    if(fp == NULL){
        printf("Can't open file");
        return;
    }

    fwrite(f, sizeof(size), 1, fp);
    if(ferror(fp)){
        printf("File write error!");
        return;
    }

    fclose(fp);
}

void read_file(fruit *f, int size, char *str)
{
    FILE *fp;

    fp = fopen(str, "rb");
    if(fp == NULL){
        printf("Can't open file");
        return;
    }

    fread(f, size, 1, fp);
    if(ferror(fp)){
        printf("File read error!");
        return;
    }

    fclose(fp);
}

int total_amount(fruit *f, int size)
{
    int total = 0;
    FILE *fp;

    for(int i = 0; i < size; i++){
        total += ((f+i)->price)*((f+i)->sales);
    }

    return total;
}

fruit max_value(fruit *f, int size){
    fruit max = f[0];
    int m = (f+0)->price;
    for(int i = 1; i < size; i++){
        if(m < ((f+i)->price)){
            m = (f+i)->price;
            max = f[i];
        }
    }
    return max;
}


int main(int argc, char *argv[])
{
    fruit datas[3];
    int len = sizeof(datas)/sizeof(fruit);

    input_datas(datas, len);
    puts("\nAFter input_datas");
    print_datas(datas, len);

    write_file(datas, len, argv[1]);

    read_file(datas, len, argv[1]);
    puts("\nAfter read_file");
    print_datas(datas, len);

    int total = total_amount(datas, len);
    fruit max = max_value(datas, len);
    printf("\n총 판매금액 = %d\n", total);
    
}