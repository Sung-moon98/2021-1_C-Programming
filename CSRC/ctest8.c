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
    printf("문자 입력('q' 이면 종료) : ");
    
    while(1){
        ch = getche();
        if(ch == 'q')   break;

        fprintf(fp, "%c", ch);
    }

    printf("\n파일에 저장되었습니다.");
    fclose(fp);
}

void ex_02()
{
    FILE *fp;
    char ch;

    fp = fopen("ex_01.txt", "r");
    printf("파일을 읽습니다.\n");

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
        printf("문자열 입력: ");
        gets(str);

        if(str[0] == '\0')  break;

       fprintf(fp, "%s\n", str);
    }
    fclose(fp);
    printf("파일로 저장했습니다.");
}

void ex_04()
{
    FILE *fp;
    char str[20];

    fp = fopen("string.txt", "r");

    printf("파일을 읽습니다.\n");
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

    printf("파일을 열었습니다.\n");
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

    printf("파일을 열었습니다.\n");

    fread(d, sizeof(d), 1, fp);
    for(int i = 0; i < 5; i++){
        printf("%.1lf  ", d[i]);
    }
    puts("");

    printf("ftell = %d\n", ftell(fp));

    printf("파일의 마지막 데이터에 접근합니다.\n");
    fseek(fp, -sizeof(double), SEEK_END);
    printf("ftell = %d\n", ftell(fp));

    fread(&cur, sizeof(cur), 1, fp);
    printf("\n마지막에 저장된 double 값 = %.1lf", cur);

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