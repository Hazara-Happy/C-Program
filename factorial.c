#include<stdio.h>
#include<stdio.h>
int fact (int x);
int main()
{
    int n;
    scanf("%d",&n);
    int ans=fact(n);
    printf("factorial=%d",ans);
    return 0;
}
int fact (int x)
{
    int res=1,i;
    for(i=1;i<=x;i++)
    {
        res*=1;
    }
    return res;
}
