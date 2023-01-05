#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

void ex_01()        // 포인터를 이용한 배열 복사
{
    double source[] = {1.21, 3.43, 5.65, 7.87, 8.98};
    double *pd;
    double target[sizeof(source)/sizeof(double)];

    pd = source;

    for(int i = 0; i < sizeof(source)/sizeof(double); i++){
        target[i] = *(pd+i);
        printf("%.2lf\t", target[i]);
    }
}

void ex_02()
{
    double source[] = {1.21, 3.43, 5.65, 7.87, 8.98};
    double *pd;
    double target[sizeof(source)/sizeof(double)];
    double add;
    printf("source = ");
    for(int i = 0; i < 5; i++){
        printf("%.2lf, ", source[i]);
    }
    pd = source;
    printf("\nsource 각 원소에 더할 값 입력: ");
    scanf("%lf", &add);

    for(int i = 0;  i < 5; i++){
        target[i] = *(pd+i) + add;
    }

    printf("target = ");

    for(int i = 0; i < 5; i++){
        printf("%.2lf, ", target[i]);
    }
}

void ex_03()
{
    char str[50], *ps;
    int i;

    ps = str;

    printf("문자열 입력: ");
    gets(str);

    printf("입력된 문자열 길이: ");
    for(i = 0; ps[i]; i++);
    printf("%d", i);

}

void ex_04()
{
    char str[50], *ps;
    int i;
    ps = str;
    while(1){
        printf("문자열 입력: ");
        gets(str);

        if(str[0] == '\0') break;

        printf("입력된 문자열 길이: ");
        for(i = 0; ps[i]; i++);
        printf("%d\n", i);
    }
}

void ex_05()
{
    char key, str[50], *pc;
    pc = str;

    while(1){
        int cnt = 0;
        printf("문자열 입력: ");
        gets(str);
        if(*str == '\0') break;
        printf("문자입력: ");
        key = getche();

        for(int i = 0; *pc; i++){
            if(*pc == key){
                cnt++;
            }
            pc++;
        }

        printf("\n%s에서 %c는 %d개.\n", str, key, cnt);
    }

}

void ex_06()
{
    char sa[50], sb[50], *pc;
    int i, j;
    printf("문자열입력: ");
    gets(sa);
    printf("문자열입력: ");
    gets(sb);
    pc = sb;

    printf("sa = %s, sb = %s", sa, sb);

    for(i = 0; sa[i]; i++);         // i는 sa에 널 값이 들어있는 인덱스

    for(j = 0; pc[j]; j++){
        sa[i] = pc[j];
        i++;
    }

    *(pc+j) = '\0';


    printf("\nsa = sa+sb = %s, sb = %s", sa, sb);
}

void ex_07()
{
    char stra[50], strb[50] = {'\0'};
    char *p, *q;

    printf("문자열 입력: ");
    gets(stra);
    
    p = stra;
    q = strb;

    while(*p){
        *q = toupper(*p);
        p++;
        q++;
    }
    *q = '\0';

    printf("stra = %s, strb = %s", stra, strb);

}

void ex_08()
{
    int i;
    char str[2][50] = {'\0'};
    char *pc;
    pc = str[0];
    printf("문자열 입력: ");
    gets(str[0]);

    for(i = 0; *(pc+i) != '\0'; i++){
        str[1][i] = toupper(pc[i]);
    }

    printf("str[0] = %s, str[1] = %s", str[0], str[1]);

}

void ex_09()
{
    int i;
    char s1[50], s2[50] = {'\0'};
    char *ps, *qs;
    ps = s1;
    qs = s2;

    printf("문자열 입력: ");
    gets(s1);
    printf("문자열 입력: ");
    gets(s2);

    for(i = 0; ps[i]&&qs[i]; i++){
        if(ps[i] != qs[i])
            break;
    }

    if(*(ps+i) == '\0' && qs[i] == '\0'){
        printf("%s, %s, 같음", s1, s2);
    }

    else{
        printf("%s, %s, 다름", s1, s2);
    }

}

void ex_10()
{
    int i;
    char str[2][50], *ps;
    ps = str[0];
    while(1){
        printf("문자열 입력: ");
        gets(str[0]);
        
        if(str[0][0] == '\0')  break;

        printf("문자열 입력: ");
        gets(str[1]);

        for (i = 0; ps[i] && str[1][i]; i++)
        {
            if (ps[i] != str[1][i])
                break;
        }

        if (*(ps + i) == '\0' && str[1][i] == '\0')
        {
            printf("%s, %s, 같음\n", str[0], str[1]);
        }

        else
        {
            printf("%s, %s, 다름\n", str[0], str[1]);
        }
    }
}

void ex_11()
{
    int from[4];
    int *pi;
    int max = 0, min = 100, sum = 0;
    pi = from;

    for(int i = 0; i < sizeof(from)/sizeof(int); i++){
        printf("정수입력: ");
        scanf("%d", pi+i);

        if(pi[i] > max)
            max = pi[i];
        
        if(pi[i] < min)
            min = pi[i];
        
        sum += pi[i];
    }

    printf("합 = %d\n가장 큰 수 = %d\n가장 작은 수 = %d", sum, max, min);


}

void ex_12()
{
    int from[4], to[sizeof(from)/sizeof(int)];
    int *pi;
    pi = from;

    for(int i = 0; i < sizeof(from)/sizeof(int); i++){
        printf("정수입력: ");
        scanf("%d", pi+i);
        to[i] = *(pi + i);
    }

    for(int i = 0; i < sizeof(from)/sizeof(int); i++){
        printf("from 배열: %d, to배열: %d\n", *(pi+i), to[i]);
        
    }
}

void ex_13()
{
    char str[50], *ps;
    ps = str;
    char s1[50] = {'\0'};
    int cnt;

    printf("한 단어를 입력하세요: ");
    gets(str);

    for(cnt = 0; str[cnt]; cnt++);

    for(int i = cnt-1, j = 0; i >= 0; i--, j++){
        s1[j] = *(ps+i);
    }

    printf("입력한 단어를 반대로 출력합니다: %s", s1);

}


int main()
{
    //ex_01();
    //ex_02();
    //ex_03();
    //ex_04();
    //ex_05();
    //ex_06();
    //ex_07();
    //ex_08();
    //ex_09();
    //ex_10();
    ex_11();
    //ex_12();
    //ex_13();
}