//Remove left recursion from the following grammars:
//E->E+t|f
//A->Abc|de
//B->bBc|ef

#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int i,j,k,temp;
    char sohardya[100];
    printf("Enter No of inputs:\n");
    scanf("%d",&n);
    getchar();
    while(n--)
    {

        fgets(sohardya,100,stdin);
        sohardya[strlen(sohardya)-1]='\0';
        if(sohardya[0]==sohardya[3])
        {
            printf("There is left recursion\n");
            printf("%c ->",sohardya[0]);
            for(i=4; i<strlen(sohardya); i++)
            {
                if(sohardya[i]=='|')
                {
                    temp=i;
                    for(j=temp+1; j<strlen(sohardya); j++)
                    {
                        printf("%c",sohardya[j]);
                    }
                }
            }
            printf("%c'\n",sohardya[0]);
            printf("%c'-> ",sohardya[0]);
            for(k=4; k<temp; k++)
            {
                printf("%c",sohardya[k]);
            }
            printf("%c'|$\n",sohardya[0]);

        }
        else
        {
            printf("there is no left recursion");
        }


    }
}
