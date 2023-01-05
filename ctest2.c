#include <stdio.h>
#include <conio.h>
#include <math.h>

void ex_01()
{
    int x, y, money;

    printf("지폐를 투입해주세요: ");
    scanf("%d", &x);
    printf("커피 몇 잔 드릴까요: ");
    scanf("%d", &y);

    money = x - y*1200;
    printf("\n거스름돈입니다.\n");
    printf("5000원권: %d개\n", money/5000);
    money = money % 5000;
    printf("1000원권: %d개\n", money/1000);
    money = money % 1000;
    printf("500원 동전: %d개\n", money/500);
    money = money % 500;
    printf("100원 동전: %d개\n", money/100);

}
void ex_02()
{
    int a, b, big, sma;
    printf("정수 두 개를 입력하세요: ");
    scanf("%d  %d", &a, &b);
    big = (a>b) ? a : b;
    printf("큰 수 = %d",big);
    sma = (a<b) ? a : b;
    printf("\n작은 수= %d", sma);
    printf("\n큰 수를 작은 수로 나눈 몫과 나머지 = %d, %d", big/sma, big%sma);

}
void ex_03()
{
    char ch, rs;
    printf("문자를 입력하세요: ");
    ch = getche();
    rs = ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) ? 'Y' : 'N';
    printf(" -> %c", rs);


}
void ex_04()
{
    char a, b;
    printf("숫자를 입력하세요: ");
    a = getche();
    a = (a >= '0' && a <= '9') ? a - '0' : 1;
    printf("\n숫자를 입력하세요: ");
    b = getche();
    b = (b >= '0' && b <= '9') ? b - '0' : 1;
    printf("\n두 수의 곱은 = %d", a*b);



}
void ex_06()
{
    int in;
    printf("정수를 입력하세요: ");
    scanf("%d", &in);
    (in>>1 >10) ? printf("OK") : printf("NOK");


}
void ex_07()
{
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    (num>>31) ? printf("음수입니다.\n") : printf("양수입니다.\n");



}




int main()
{
    //ex_01();
    //ex_02();
    //ex_03();
    //ex_04();
    ex_06();
    //ex_07();
    return 0;


}