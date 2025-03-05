#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter the number of Student:");
    scanf("%d", &n);
    char sohardya[30];
    getchar();

    while(n--){
        fgets(sohardya, 30, stdin);
        sohardya[strlen(sohardya)-1] = '\0';

        int flag=0;
        if ((sohardya[0] == '_') || (sohardya[0] >= 'a' && sohardya[0] <= 'z') ||
            (sohardya[0] >= 'A' && sohardya[0] <= 'Z')){


            for(int i=1; i<strlen(sohardya); i++){
                if((sohardya[i] == '_') || (sohardya[i] >= 'a' && sohardya[i] <= 'z') ||
            (sohardya[i] >= 'A' && sohardya[i] <= 'Z') ||
                   (sohardya[i] >='0' && sohardya[i] <='9')){
                       flag = 0;
                   }
                   else{
                       flag = 1;
                       break;
                   }
            }
            if (flag == 0){ printf(" Valid\n"); }
            else{ printf(" Invalid\n"); }
        }
        else {
            printf(" Invalid\n");
        }
    }
    return 0;
}
