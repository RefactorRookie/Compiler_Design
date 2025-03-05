//All is well.
/*My name is John./
/*I love EDU.*/
//Long live Bangladesh.
//Sample output:
//Single line comment.
//Not a comment.
//Multiple line comment.
//Not a comment.

#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char sohardya[50];
    printf("Enter No of inputs:\n");
    scanf("%d",&n);
    getchar();

    while(n--)
    {

        fgets(sohardya,50,stdin);
        sohardya[strlen(sohardya)-1]='\0';
        if(sohardya[0]=='/'&&sohardya[1]=='/')
        {
            printf("Single line Comment\n");

        }
        else if(sohardya[0]=='/'&&sohardya[1]=='*'&& sohardya[strlen(sohardya)-1]=='/'&&sohardya[strlen(sohardya)-2]=='*')
            {
                printf("Multiple Line Comment\n");

            }
            else
                printf("Not a comment\n");
    }
}
