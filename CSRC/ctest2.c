#include <stdio.h>
#include <conio.h>
#include <math.h>

void ex_01()
{
    int x, y, money;

    printf("���� �������ּ���: ");
    scanf("%d", &x);
    printf("Ŀ�� �� �� �帱���: ");
    scanf("%d", &y);

    money = x - y*1200;
    printf("\n�Ž������Դϴ�.\n");
    printf("5000����: %d��\n", money/5000);
    money = money % 5000;
    printf("1000����: %d��\n", money/1000);
    money = money % 1000;
    printf("500�� ����: %d��\n", money/500);
    money = money % 500;
    printf("100�� ����: %d��\n", money/100);

}
void ex_02()
{
    int a, b, big, sma;
    printf("���� �� ���� �Է��ϼ���: ");
    scanf("%d  %d", &a, &b);
    big = (a>b) ? a : b;
    printf("ū �� = %d",big);
    sma = (a<b) ? a : b;
    printf("\n���� ��= %d", sma);
    printf("\nū ���� ���� ���� ���� ��� ������ = %d, %d", big/sma, big%sma);

}
void ex_03()
{
    char ch, rs;
    printf("���ڸ� �Է��ϼ���: ");
    ch = getche();
    rs = ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) ? 'Y' : 'N';
    printf(" -> %c", rs);


}
void ex_04()
{
    char a, b;
    printf("���ڸ� �Է��ϼ���: ");
    a = getche();
    a = (a >= '0' && a <= '9') ? a - '0' : 1;
    printf("\n���ڸ� �Է��ϼ���: ");
    b = getche();
    b = (b >= '0' && b <= '9') ? b - '0' : 1;
    printf("\n�� ���� ���� = %d", a*b);



}
void ex_06()
{
    int in;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &in);
    (in>>1 >10) ? printf("OK") : printf("NOK");


}
void ex_07()
{
    int num;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);

    (num>>31) ? printf("�����Դϴ�.\n") : printf("����Դϴ�.\n");



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