#include<stdio.h>
void fun(double a[],double *x,double *y)
{
    int i;
    for(i=0;i<10;i++)
    {
        *x+=a[i];
        *y+=a[i]*a[i];
    }
}
int main()
{
    int j;
    double a[10],sum=0,sumsqr=0;
    for ( j = 0; j < 10; j++)
    {
       printf("entre the element%d:-\t",j+1);
       scanf("%lf",&a[j]);
    }
    fun(a,&sum,&sumsqr);
    printf("the sum of the elements of a is %lf",sum);
    printf("the sum of squares of the elements of a is %lf",sumsqr);
}
