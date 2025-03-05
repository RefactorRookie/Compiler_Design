#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    FILE *fp = fopen("john.txt", "r");
    int i, character = 0, words= 1, line= 0;
    float paragraph = 1;
    char sohardya;
    while((sohardya = fgetc(fp))!= EOF)
    {
        printf("%c",sohardya);

        if(sohardya =='.')
            line++;

        if(sohardya ==' ')
            words++;

        if((sohardya>='a' && sohardya<='z')||(sohardya>='A' && sohardya<='Z'))
            character++;

        if(sohardya=='\n')
            paragraph = paragraph+0.5;

    }


    printf("\nCharacters count = %d \n", character);
    printf("Words count = %d\n", words);
    printf("Line count =%d \n", line);
    printf("Paragraph count =%.0f \n", paragraph);


    fclose(fp);

    return 0 ;

}


