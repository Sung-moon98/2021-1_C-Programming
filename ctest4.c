#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
void ex_01()
{
    char str[4], ch;

    int i;

    for(i = 0; i < sizeof(str)/sizeof(char); i++){
        printf("\n�����Է�: ");
        ch = getche();
        str[i] = ch;
    }
    str[i] = '\0';

    printf("\n�Էµ� ���� = %s", str);

}
void ex_02()
{
    char str[50];
    printf("���ڿ� �Է�: ");
    gets(str);
    printf("�Էµ� ���ڿ� = %s", str);
}
void ex_03()
{
    char str[30];
    int cnt;
    printf("���ڿ� �Է�: ");
    gets(str);
    for(cnt = 0; str[cnt]; cnt++);

    printf("�Էµ� ���ڿ� ���� = %d", cnt);

}
void ex_04()
{
    char str[30];
    int cnt = 0, i;
    while(1){
        printf("���ڿ��Է�: ");
        gets(str);

        if(str[0] == '\0')
            break;
        
        for(i = 0; str[i]; i++);
        
        printf("�Էµ� ���ڿ��� ���� = %d\n", i);

    }

}
void ex_05()
{
    char str[30];
    char ch;
    int i, cnt;

    while(1){
        printf("���ڿ� �Է�: ");
        gets(str);

        if(str[0] == '\0')
            break;

        printf("���� �Է�: ");
        ch = getchar();

        while(getchar() != '\n');

        cnt = 0;
        
        for(i = 0; str[i]; i++){
            
            if(str[i] == ch)
                cnt++;
        }

        printf("%s���� %c�� %d��.\n", str, ch, cnt);

    }
}
void ex_06()
{
    char stra[30];
    char strb[30];
    int a = 0, cnt;

    printf("���ڿ� �Է�: ");
    gets(stra);
    for(cnt = 0; stra[cnt]; cnt++);

    for(int i = cnt-1; i >= 0; i--){
        strb[a] = stra[i];
        a++;
    }

    strb[a] = '\0';

    printf("stra = %s\n", stra);
    printf("strb = %s", strb);
}
void ex_07()
{
    char stra[30];
    char strb[30];
    int i;

    printf("���ڿ� �Է�: ");
    gets(stra);
    printf("���ڿ� �Է�: ");
    gets(strb);

    for(i = 0; stra[i] == strb[i]; i++){
        if(stra[i] == '\0' && strb[i] == '\0')
            break;

    }

    if(stra[i] =='\0' && strb[i] == '\0'){
        printf("%s, %s, ����.", stra, strb);
    }

    else{
        printf("%s, %s, �ٸ�.", stra, strb);
    }
}
void ex_08()
{
    char str[2][30];
    int i;
    
    while(1){
        printf("���ڿ� �Է�: ");
        gets(str[0]);

        if(str[0][0] == '\0')  break;

        printf("���ڿ� �Է�: ");
        gets(str[1]);
        
        for(i = 0; str[0][i] == str[1][i]; i++ ){
            if(str[0][i] == '\0' && str[1][i]== '\0')
                break;
            
        }
        if(str[0][i] =='\0' && str[1][i] == '\0'){
            printf("%s, %s, ����.\n", str[0], str[1]);
        }

        else{
            printf("%s, %s, �ٸ�.\n", str[0], str[1]);
        }


    }

    
}

void ex_09()
{
    int from[4];
    int sum = 0;
    int max;
    int min;

    for(int i = 0; i < sizeof(from)/sizeof(int); i++){
        printf("�����Է�: ");
        scanf("%d", &from[i]);
    }

    max = from[0];
    min = from[0];

    for(int j = 0; j < sizeof(from)/sizeof(int); j++){
        if(from[j] > max)
            max = from[j];
        
        else if(from[j] < min)
            min = from[j];
        
        sum += from[j];
    }
    printf("��: %d\n���� ū �� = %d\n���� ���� �� = %d", sum, max, min);

}
void ex_10()
{  
    int from[4];
    int to[sizeof(from)/sizeof(int)];
    int i;

    for(i = 0; i < sizeof(from)/sizeof(int); i++){
        printf("�����Է�: ");
        scanf("%d", &from[i]);
        to[i] = from[i];
    }
    for(int j = 0; j < sizeof(from)/sizeof(int); j++){
        printf("from �迭: %d, to�迭: %d\n", from[j], to[j]);
    }
}
void ex_11()
{
    int cnt[5] = {0};
    char x[100];
    int max = 0, maxindex = 0;

    printf("0���� 4������ ���� �Է�: ");
    gets(x);

    int i = 0;
    while(x[i]){
        if(x[i] >= '0' && x[i] <= '4'){
            ++cnt[x[i] - '0'];
        }
        i++;
    }

    for(int j = 0; j < 5; j++){
        if(cnt[j] > max){
            max = cnt[j];
            maxindex = j;
        }
    }

    printf("���� ���� �Է� ���� �� = %d", maxindex);
    printf("\n�Է� Ƚ�� = %d", max);


}
void ex_12()
{
    int in, input;
    while(1){
        int arr[100];
        int cnt = 0;                // �Է��� �� �迭�� ũ��
        printf("���� �Է�: ");
        scanf("%d", &input);
        in = input;
        if(in == 0) break;

        for(int i = 0; in > 0; i++){        // �Էµ� ������ �������� �迭�� reverse�θ� ����
            arr[i] = in%2;                  // �迭�� ù ��°���� in�� 2�� ���� ������ ���� ����
            in = in/2;                      // ���� �� in�� 2�� ������
            cnt++;                          // �迭�� ����� ũ�⸦ �˱����� cnt�� ������Ų��.
        }
        printf("�Էµ� %d�� ��������: ", input);
        
        for(int i = cnt-1; i >= 0; i--){    // �迭�� ����� �׸��� �Ųٷ� ���
            printf("%d", arr[i]);
        }

        printf("\n");

    }
}

int main()
{
    //ex_01();
    //ex_03();
    //ex_06();
    //ex_07();
   // ex_08();
   ex_10();
    //ex_11();
     //ex_12();
}