#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter No of Operators:\n");
    scanf("%d",&n);
    getchar();

    while(n--)
    {
        char sohardya;
        char temp;
        scanf("%c",&sohardya);
        scanf("%c",&temp);
        if(sohardya=='.')
        {
            printf("Punctuation:fullstop(.)\n");
        }
        else if(sohardya==',')
        {
            printf("Punctuation:Comma(,)\n");
        }
        else if(sohardya==';')
        {
            printf("Punctuation:Semicolon(;)\n");
        }
        else if(sohardya==':')
        {
            printf("Punctuation:Colon(:)\n");
        }
        else if(sohardya=='?')
        {
            printf("Punctuation:Question mark(?)\n");
        }
        else if(sohardya=='!')
        {
            printf("Punctuation:Exclamation mark(!)\n");
        }
        else if(sohardya=='-')
        {
            printf("Punctuation:Hyphen(-)\n");
        }
        else if(sohardya=='(')
        {
            printf("Punctuation:Opening parenthesis(\n");
        }
        else if(sohardya==')')
        {
            printf("Punctuation:Closing parenthesis )\n");
        }
        else if(sohardya=='{')
        {
            printf("Punctuation:Opening Curly bracket({)\n");
        }
        else if(sohardya=='}')
        {
            printf("Punctuation:Closing Curly bracket(})\n");
        }
        else if(sohardya=='[')
        {
            printf("Punctuation:Opening Square bracket([)\n");
        }
        else if(sohardya==']')
        {
            printf("Punctuation:Closing Square bracket(])\n");
        }
        else if(sohardya=='\\')
        {
            printf("Punctuation:Backward Slash(\\)\n");
        }
        else if(sohardya=='/')
        {
            printf("Punctuation:Forward Slash(/)\n");
        }
        else if(sohardya=='\'')
        {
            printf("Punctuation:Single quotation (')\n");
        }
        else if(sohardya=='"')
        {
            printf("Punctuation:Double quotation (\") \n");
        }

        else
            printf("Invalid keyword\n");


    }

}





