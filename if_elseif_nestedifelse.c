
#include<stdio.h>
int main()
{
    int physics,chemistry,biology,mathematics,computer;
    float per;
    printf("enter the five subjects mark: ");
     scanf("%d%d%d%d%d",&physics,&chemistry,&biology,&mathematics,&computer);

     per=(physics+chemistry+biology+mathematics+computer)/5;
     printf("percentage=%f/n",per);

     if(per>=0.90)
     {
         printf("grade A");
     }
    else if(per>=0.80)
    {
        printf("grade B");
    }

    else if(per>=0.70)
    {
        printf("grade C");

    }
    else if(per>=0.60)
    {
        printf("grade D");

    }
    else if(per>=0.40)
    {
        printf("grade E");
    }
    else
    {
        printf("grade F");
    }
    return 0;
}
