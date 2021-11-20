#include<stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        unsigned long long int n;
        scanf("%llu",&n);
        unsigned long long int d3,d5,d15,s3,s5,s15;
        d3=(n-1)/3;
        d5=(n-1)/5;
        d15=(n-1)/15;
        s3=3*(d3*(d3+1))/2;
        s5=5*(d5*(d5+1))/2;
        s15=15*(d15*(d15+1))/2;
        unsigned long long int sum;
        sum=s3+s5-s15;
        printf("%llu\n",sum);
    }
    return 0;
}
