#include <stdio.h>
#include <conio.h>
#define PI 3.141592

void ex_01(void)
{
    char c1, c2;
    c1 = '1';
    c2 = 1;
    printf("c1 + %c, c2 = %d\n", c1, c2);


}
void ex_02(void)
{
    char c1, c2;

    printf("%c-%c = %d", '0','1','0'-'1');




}
void ex_03(void)
{
    int in;
    printf("�����Է�: ");
    scanf("%d", &in);
    printf("8����= %#0o, 10���� = %d, 16���� = %#x", in, in, in);



}
void ex_06(void)
{
    double mid, last;
    
    printf("�߰���� ���� �Է�: ");
    scanf("%lf",&mid);
    printf("�⸻��� ���� �Է�: ");
    scanf("%lf", &last);

    printf("������ ��: %-10.3lf,  ���: %-10.3lf", mid+last, (mid+last)/2);


}
void ex_07(void)
{
    double d;

    printf("�������� �Է�: ");
    scanf("%lf",&d);
    printf("������: %.2lf",PI*d*d);

}
void ex_08(void)
{
    printf("%d",sizeof(char)*8);
}

int main()
{    
    //ex_02();
    //ex_07();
    //ex_06();
    ex_08();




}