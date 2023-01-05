#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void ex_01()
{
    FILE *fp;
    char ch;

    fp = fopen("ex_01.txt", "w");
    printf("���� �Է�('q' �̸� ����) : ");
    
    while(1){
        ch = getche();
        if(ch == 'q')   break;

        fprintf(fp, "%c", ch);
    }

    printf("\n���Ͽ� ����Ǿ����ϴ�.");
    fclose(fp);
}

void ex_02()
{
    FILE *fp;
    char ch;

    fp = fopen("ex_01.txt", "r");
    printf("������ �н��ϴ�.\n");

    while(1){
        fscanf(fp, "%c", &ch);

        if(feof(fp))    break;
        
        printf("%c", ch);
    }
    fclose(fp);
}

void ex_03()
{
    FILE *fp;
    char str[20];

    fp = fopen("string.txt", "w");

    while(1){
        printf("���ڿ� �Է�: ");
        gets(str);

        if(str[0] == '\0')  break;

       fprintf(fp, "%s\n", str);
    }
    fclose(fp);
    printf("���Ϸ� �����߽��ϴ�.");
}

void ex_04()
{
    FILE *fp;
    char str[20];

    fp = fopen("string.txt", "r");

    printf("������ �н��ϴ�.\n");
    while(1){
        fgets(str, 19, fp);

        if(feof(fp))    break;

        printf("%s", str);
    }
}

void ex_07()
{
    FILE *fp;
    double d[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    fp = fopen("double.data", "wb");

    if(fp == NULL){
        printf("Can't open file");
        return;
    }

    printf("������ �������ϴ�.\n");
    for(int i = 0; i < 5; i++){
        printf("%lf  ", d[i]);
    }

    fwrite(d, sizeof(d), 1, fp);
    if(ferror(fp)){
        printf("File write error!");
        return;
    }
}

void ex_08()
{
    FILE *fp;
    double d[5], cur;

    fp = fopen("double.data", "rb");
    if(fp == NULL){
        printf("Can't open file");
        return;
    }

    printf("������ �������ϴ�.\n");

    fread(d, sizeof(d), 1, fp);
    for(int i = 0; i < 5; i++){
        printf("%.1lf  ", d[i]);
    }
    puts("");

    printf("ftell = %d\n", ftell(fp));

    printf("������ ������ �����Ϳ� �����մϴ�.\n");
    fseek(fp, -sizeof(double), SEEK_END);
    printf("ftell = %d\n", ftell(fp));

    fread(&cur, sizeof(cur), 1, fp);
    printf("\n�������� ����� double �� = %.1lf", cur);

    fclose(fp);
}



int main(int argc, char *_argv[])
{
    //ex_01();
    //ex_02();
    //ex_03();
    //ex_04();
    //ex_07();
    ex_08();
}