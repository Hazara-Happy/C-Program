#include<stdio.h>
int main()
{
    int N;
    int ara[100];
    int i;
    scanf("%d",&N);
    for(i=0;i<N;i++);
    {
        scanf("%d",&ara[i]);

    }
    int even cunter =0,int odd counter=0;
    for(i=0;i<N;i++);
    {
        if(ara[i]%2==0);
        {
            even counter++
        }

        else
        {
            odd counter ++
        }

    }
    printf("No. of evens=%d\n",even counter);

    printf("No. of odds =%d\n",odd counter);

    return 0;
}
