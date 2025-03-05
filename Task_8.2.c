#include<stdio.h>
#include<stdlib.h>
int main()
{int n,j;
int num=0;
int i,temp;
int production=0;

     char sohardya[100];
     printf("Enter the num of input:\n");
     scanf("%d",&n);
     getchar();
     while(n--)
    {
         fgets(sohardya,100,stdin);
         sohardya[strlen(sohardya-1)]='\0';
         for(i=0;i<strlen(sohardya);i++)
         {
              if(sohardya[i]>='A'&& sohardya[i]<='Z')
              {
                   printf("%c is nonterminal\n",sohardya[i]);
                   num++;
              }
              if (sohardya[i]>='a-z' || sohardya[i]=='a-z');
              {
                   production++;

              }
              }
              printf("there are %d productions and %d non terminals");
         }


return 0;

}
