
#include<stdio.h>
int main ()

{ char sen[1000];
gets(sen);
int i=0,counter=0;
 while(sen[i]!='\0)')
{
    //vowels hole counter++
    if(sen[i]=='a')
        counter++;
    else if(sen[i]=='e')
        counter++;

        else if(sen[i]=='i')
        counter++;

        else if(sen[i]=='o')
        counter++;

        else if(sen[i]=='u')
        counter++;
        i++;
}


      printf("No. of vowels =%d", counter);

   return 0;
}
