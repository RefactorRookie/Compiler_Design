#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter No of operators:\n");
    scanf("%d",&n);
    getchar();


    while(n--)
    {
        char sohardya[30];
        fgets(sohardya,30,stdin);
        sohardya[strlen(sohardya)-1]='\0';

        if(strlen(sohardya)==1)
        {
            if(sohardya[0]=='+')
            {
                printf("Arithmetic Operator:Addition\n");
            }
            else if(sohardya[0]=='-')
            {
                printf("Arithmetic Operator:Subtraction\n");
            }
              else if(sohardya[0]=='*')
            {
                printf("Arithmetic Operator:Multiplication\n");
            }
              else if(sohardya[0]=='/')
            {
                printf("Arithmetic Operator:Division\n");
            }
              else if(sohardya[0]=='%')
            {
                printf("Arithmetic Operator:Modulus\n");
            }
             else if(sohardya[0]=='>')
            {
                printf("Relational Operator:Greater than\n");
            }
             else if(sohardya[0]=='<')
            {
                printf("Relational Operator:Less than\n");
            }
             else if(sohardya[0]=='!')
            {
                printf("Logical Operator:NOT\n");
            }
              else if(sohardya[0]=='=')
                        {
                printf("Assignment Operator\n");
            }
              else if(sohardya[0]=='?')
            {
                printf("Conditional Operator:True\n");
            }
              else if(sohardya[0]==':')
            {
                printf("Conditional Operator:False\n");
            }
              else if(sohardya[0]=='&')
            {
                printf("Bitwise Operator: AND\n");
            }
              else if(sohardya[0]=='|')
            {
                printf("Bitwise Operator: OR\n");
            }
              else if(sohardya[0]=='^')
            {
                printf("Bitwise Operator: XOR\n");
            }
              else if(sohardya[0]=='~')
            {
                printf("Bitwise Operator: Compliment\n");
            }
        else
                printf("Invalid keyword\n");
        }
        else if(strlen(sohardya)==2)
        {
            if(sohardya[0]=='>' && sohardya[1]=='=')
            {
                printf("Relational Operator: Greater Equal\n");
            }
           else if(sohardya[0]=='<' && sohardya[1]=='=')
            {
                printf("Relational Operator: Less Equal\n");
            }
             else if(sohardya[0]=='=' && sohardya[1]=='=')
            {
                printf("Relational Operator: Equal\n");
            }
             else if(sohardya[0]=='!' && sohardya[1]=='=')
            {
                printf("Relational Operator: Not Equal\n");
            }
             else if(sohardya[0]=='&' && sohardya[1]=='&')
            {
                printf("Logical Operator: AND\n");
            }
             else if(sohardya[0]=='|' && sohardya[1]=='|')
            {
                 printf("Logical Operator: OR\n");
            }
             else if(sohardya[0]=='+' && sohardya[1]=='+')
            {
                printf("Increment Operator\n");
            }
             else if(sohardya[0]=='-' && sohardya[1]=='-')
            {
                printf("Decrement Operator\n");
            }
             else if(sohardya[0]=='<' && sohardya[1]=='<')
            {
                printf("Bitwise Operator:Shift Left\n");
            }
            else if(sohardya[0]=='>' && sohardya[1]=='>')
            {
                printf("Bitwise Operator:Shift Right\n");
            }
            else
                printf("Invalid keyword\n");

        }
        else
            {
                printf("Invalid keyword\n");
            }

        }

    }




