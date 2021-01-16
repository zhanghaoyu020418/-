#include <cstdio>
#include <cmath>
int main ()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double C=(a+b+c)/1.0;
    double C1=(a+b+c)/2.0;
    double S=sqrt(C1*(C1-a)*(C1-b)*(C1-c))/1.0;//º£Â×¹«Ê½ 
    printf("circumference=%.2lf area=%.2lf",C,S);
    
    return 0;
}
