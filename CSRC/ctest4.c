#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
void ex_01()
{
    char str[4], ch;

    int i;

    for(i = 0; i < sizeof(str)/sizeof(char); i++){
        printf("\n문자입력: ");
        ch = getche();
        str[i] = ch;
    }
    str[i] = '\0';

    printf("\n입력된 문자 = %s", str);

}
void ex_02()
{
    char str[50];
    printf("문자열 입력: ");
    gets(str);
    printf("입력된 문자열 = %s", str);
}
void ex_03()
{
    char str[30];
    int cnt;
    printf("문자열 입력: ");
    gets(str);
    for(cnt = 0; str[cnt]; cnt++);

    printf("입력된 문자열 길이 = %d", cnt);

}
void ex_04()
{
    char str[30];
    int cnt = 0, i;
    while(1){
        printf("문자열입력: ");
        gets(str);

        if(str[0] == '\0')
            break;
        
        for(i = 0; str[i]; i++);
        
        printf("입력된 문자열의 길이 = %d\n", i);

    }

}
void ex_05()
{
    char str[30];
    char ch;
    int i, cnt;

    while(1){
        printf("문자열 입력: ");
        gets(str);

        if(str[0] == '\0')
            break;

        printf("문자 입력: ");
        ch = getchar();

        while(getchar() != '\n');

        cnt = 0;
        
        for(i = 0; str[i]; i++){
            
            if(str[i] == ch)
                cnt++;
        }

        printf("%s에서 %c는 %d개.\n", str, ch, cnt);

    }
}
void ex_06()
{
    char stra[30];
    char strb[30];
    int a = 0, cnt;

    printf("문자열 입력: ");
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

    printf("문자열 입력: ");
    gets(stra);
    printf("문자열 입력: ");
    gets(strb);

    for(i = 0; stra[i] == strb[i]; i++){
        if(stra[i] == '\0' && strb[i] == '\0')
            break;

    }

    if(stra[i] =='\0' && strb[i] == '\0'){
        printf("%s, %s, 같음.", stra, strb);
    }

    else{
        printf("%s, %s, 다름.", stra, strb);
    }
}
void ex_08()
{
    char str[2][30];
    int i;
    
    while(1){
        printf("문자열 입력: ");
        gets(str[0]);

        if(str[0][0] == '\0')  break;

        printf("문자열 입력: ");
        gets(str[1]);
        
        for(i = 0; str[0][i] == str[1][i]; i++ ){
            if(str[0][i] == '\0' && str[1][i]== '\0')
                break;
            
        }
        if(str[0][i] =='\0' && str[1][i] == '\0'){
            printf("%s, %s, 같음.\n", str[0], str[1]);
        }

        else{
            printf("%s, %s, 다름.\n", str[0], str[1]);
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
        printf("정수입력: ");
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
    printf("합: %d\n가장 큰 수 = %d\n가장 작은 수 = %d", sum, max, min);

}
void ex_10()
{  
    int from[4];
    int to[sizeof(from)/sizeof(int)];
    int i;

    for(i = 0; i < sizeof(from)/sizeof(int); i++){
        printf("정수입력: ");
        scanf("%d", &from[i]);
        to[i] = from[i];
    }
    for(int j = 0; j < sizeof(from)/sizeof(int); j++){
        printf("from 배열: %d, to배열: %d\n", from[j], to[j]);
    }
}
void ex_11()
{
    int cnt[5] = {0};
    char x[100];
    int max = 0, maxindex = 0;

    printf("0에서 4까지의 정수 입력: ");
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

    printf("가장 많이 입력 받은 수 = %d", maxindex);
    printf("\n입력 횟수 = %d", max);


}
void ex_12()
{
    int in, input;
    while(1){
        int arr[100];
        int cnt = 0;                // 입력이 들어간 배열의 크기
        printf("정수 입력: ");
        scanf("%d", &input);
        in = input;
        if(in == 0) break;

        for(int i = 0; in > 0; i++){        // 입력된 정수의 이진수를 배열에 reverse로를 저장
            arr[i] = in%2;                  // 배열의 첫 번째부터 in을 2로 나눈 나머지 값을 저장
            in = in/2;                      // 저장 후 in을 2로 나눈다
            cnt++;                          // 배열에 저장된 크기를 알기위해 cnt를 증가시킨다.
        }
        printf("입력된 %d의 이진수는: ", input);
        
        for(int i = cnt-1; i >= 0; i--){    // 배열에 저장된 항목을 거꾸로 출력
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