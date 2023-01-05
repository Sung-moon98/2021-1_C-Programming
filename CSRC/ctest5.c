#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

void ex_01()        // �����͸� �̿��� �迭 ����
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
    printf("\nsource �� ���ҿ� ���� �� �Է�: ");
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

    printf("���ڿ� �Է�: ");
    gets(str);

    printf("�Էµ� ���ڿ� ����: ");
    for(i = 0; ps[i]; i++);
    printf("%d", i);

}

void ex_04()
{
    char str[50], *ps;
    int i;
    ps = str;
    while(1){
        printf("���ڿ� �Է�: ");
        gets(str);

        if(str[0] == '\0') break;

        printf("�Էµ� ���ڿ� ����: ");
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
        printf("���ڿ� �Է�: ");
        gets(str);
        if(*str == '\0') break;
        printf("�����Է�: ");
        key = getche();

        for(int i = 0; *pc; i++){
            if(*pc == key){
                cnt++;
            }
            pc++;
        }

        printf("\n%s���� %c�� %d��.\n", str, key, cnt);
    }

}

void ex_06()
{
    char sa[50], sb[50], *pc;
    int i, j;
    printf("���ڿ��Է�: ");
    gets(sa);
    printf("���ڿ��Է�: ");
    gets(sb);
    pc = sb;

    printf("sa = %s, sb = %s", sa, sb);

    for(i = 0; sa[i]; i++);         // i�� sa�� �� ���� ����ִ� �ε���

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

    printf("���ڿ� �Է�: ");
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
    printf("���ڿ� �Է�: ");
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

    printf("���ڿ� �Է�: ");
    gets(s1);
    printf("���ڿ� �Է�: ");
    gets(s2);

    for(i = 0; ps[i]&&qs[i]; i++){
        if(ps[i] != qs[i])
            break;
    }

    if(*(ps+i) == '\0' && qs[i] == '\0'){
        printf("%s, %s, ����", s1, s2);
    }

    else{
        printf("%s, %s, �ٸ�", s1, s2);
    }

}

void ex_10()
{
    int i;
    char str[2][50], *ps;
    ps = str[0];
    while(1){
        printf("���ڿ� �Է�: ");
        gets(str[0]);
        
        if(str[0][0] == '\0')  break;

        printf("���ڿ� �Է�: ");
        gets(str[1]);

        for (i = 0; ps[i] && str[1][i]; i++)
        {
            if (ps[i] != str[1][i])
                break;
        }

        if (*(ps + i) == '\0' && str[1][i] == '\0')
        {
            printf("%s, %s, ����\n", str[0], str[1]);
        }

        else
        {
            printf("%s, %s, �ٸ�\n", str[0], str[1]);
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
        printf("�����Է�: ");
        scanf("%d", pi+i);

        if(pi[i] > max)
            max = pi[i];
        
        if(pi[i] < min)
            min = pi[i];
        
        sum += pi[i];
    }

    printf("�� = %d\n���� ū �� = %d\n���� ���� �� = %d", sum, max, min);


}

void ex_12()
{
    int from[4], to[sizeof(from)/sizeof(int)];
    int *pi;
    pi = from;

    for(int i = 0; i < sizeof(from)/sizeof(int); i++){
        printf("�����Է�: ");
        scanf("%d", pi+i);
        to[i] = *(pi + i);
    }

    for(int i = 0; i < sizeof(from)/sizeof(int); i++){
        printf("from �迭: %d, to�迭: %d\n", *(pi+i), to[i]);
        
    }
}

void ex_13()
{
    char str[50], *ps;
    ps = str;
    char s1[50] = {'\0'};
    int cnt;

    printf("�� �ܾ �Է��ϼ���: ");
    gets(str);

    for(cnt = 0; str[cnt]; cnt++);

    for(int i = cnt-1, j = 0; i >= 0; i--, j++){
        s1[j] = *(ps+i);
    }

    printf("�Է��� �ܾ �ݴ�� ����մϴ�: %s", s1);

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