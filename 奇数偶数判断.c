#include <cstdio>
int main ()
{
    int N;
    scanf("%d",&N);
    int i=0,count1=0,count2=0;
    for (i=1;i<=N;i++)
    {
        if(i%2==0) count1++;
        else count2++;
    }
    printf("%d %d",count2,count1);
    return 0;
}
