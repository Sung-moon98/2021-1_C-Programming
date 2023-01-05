#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

void ex_01()
{
    int in;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &in);
    if(in > 0)
        printf("����Դϴ�.\n");
    else if(in < 0)��
        printf("�����Դϴ�.\n");
    else 
        printf("0 �Դϴ�.\n");
}
void ex_02()
{
    int in;    
    printf("������ �Է��ϼ���: ");
    scanf("%d", &in);
    switch(in/2 > 10){
        case 1:
            printf("OK");
            break;
        case 0:
            printf("NOK");
            break;
    }
}
void ex_03()
{
    double in;
    double sum = 0;

    for( ; ; ){
        printf("���ڸ� �Է��ϼ���: ");
        scanf("%lf", &in);
        if(in >= 100 || in <= -100) break;
        else
            sum += in;
    }
    printf("-100�̻� 100���� ���ڵ��� ��: %.2lf", sum);
}
void ex_04()
{   
    char ch;
    printf("���ڸ� �Է��ϼ���: ");
    
    while(1){
        ch = getche();
        if(ch == 'q' || ch =='Q')
           break;
    }


}
void ex_05()
{
    int in;
    int bit = 0, binary = 0;
    int place = 1;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &in);
    printf("%d�� 2������: ", in);

    while(in >= 1){
        bit = (in & 1) * place;
        binary += bit;
        place *= 10;
        in = in >> 1;

    }
    printf("%d", binary);
}
void ex_06()
{
    int in;
    int bit = 0, binary = 0, sum = 0;
    int place = 1;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &in);
    printf("2������ ���� �� 1�� ��Ÿ���� Ƚ�� = ");
    while(in >= 1){
        bit = (in & 1) * place;
        binary += bit;
        place *= 10;
        
        if(in & 1 == 1){ 
            sum = sum+1;
        }
        in = in >> 1;

    }
    printf("%d", sum);
}
void ex_07()
{
    int in, line = 0;
    do{
        printf("������ �Է��ϼ���: ");
        scanf("%d", &in);

    }while(in < 10);

    for(int i = 10; i <= in; i++){
        if(i%2 && i%3 && i%5 && i%7){
            printf("%d  ",i);
            line++;
            if(line%10 == 0)
                printf("\n");
        }
        
    }

}
void ex_08()
{
    char ch;
    int cnt= 0;
    do{
        printf("���ĺ� �Է�: ");
        ch = getche();
        printf("\n");
    }while((ch > 'Z' || ch < 'A') && (ch < 'a' || ch > 'z'));

    ch = toupper(ch);
    while(ch <= 'Z'){
        printf("%c  ", ch);
        ch++;
        cnt++;
        if(cnt%5 == 0)
            printf("\n");
    }

}
void ex_09()
{   
    char ch;
    do{
        printf("k������ ���ĺ� �Է�(q�� ����, k�̻��� �ٽ� �Է�): ");
        ch = getche();
        printf("\n");

        if(tolower(ch) <= 'k'){
            for(char c = 'a'; c <= ch; c++)
                printf("%c", c);
            printf("\n");
        }
        else if(tolower(ch) == 'q')
            break; 

        else
            continue;   
    }while(1);

    printf("q�Է����� ����");    
}

void ex_10()
{
    char ch;
    int cnt;
    int sum = 0;
    do{
        printf("\n�����Է�(���ĺ��� ���� �̿��� ���� �Է� �� ����): ");
        ch = getche();
        if(ch >= 'a' && ch <= 'z')
            printf("\n�ҹ����Դϴ�.");
        else if(ch >= 'A' && ch <= 'Z')
            printf("\n�빮���Դϴ�.");
        else if(ch >= '0' && ch <= '9'){
            cnt = ch-'0';
            sum += cnt;
            printf("\n�����Դϴ�.  ���ݱ��� ���ڵ��� ��= %d", sum);
        }
        else{
            printf("\n  ���ĺ��� ���� �̿��� ���ڸ� �Է��Ͽ� �����մϴ�.");
            break;
        }
    }while(1);
}
void ex_11()
{   
    int size;
    printf("size �Է�: ");
    scanf("%d", &size);                     // �Ƕ�̵��� �� ���� �Է�

    for(int i = 0; i < size; i++){          // ��  
        for(int j = i; j < size-1; j++)     // �� ���� ���� �����
            printf(" ");

        for(int k = -i; k <= i; k++){       // ���� ���
                printf("%d", abs(k));
        }    

        printf("\n");
    }

}
void ex_12()
{
    int num, cnt, in = 100;
    char ch, m;
    printf("�ݺ�Ƚ���Է�: ");
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        printf("\n�����Է�: ");
        ch = getche();
        ch = tolower(ch);
        if(abs(ch-'m') < in){
            m = ch;
            in = abs(ch - 'm');
        }
        
    }
    printf("\nm�� ���� ����� ���ڴ� = %c", m);
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
    ex_08();
    //ex_09();
    //ex_10();
    //ex_11();
    //ex_12();
}