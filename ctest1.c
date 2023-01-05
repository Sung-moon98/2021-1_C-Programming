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
    printf("정수입력: ");
    scanf("%d", &in);
    printf("8진수= %#0o, 10진수 = %d, 16진수 = %#x", in, in, in);



}
void ex_06(void)
{
    double mid, last;
    
    printf("중간고사 성적 입력: ");
    scanf("%lf",&mid);
    printf("기말고사 성적 입력: ");
    scanf("%lf", &last);

    printf("성적의 합: %-10.3lf,  평균: %-10.3lf", mid+last, (mid+last)/2);


}
void ex_07(void)
{
    double d;

    printf("원반지름 입력: ");
    scanf("%lf",&d);
    printf("원면적: %.2lf",PI*d*d);

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