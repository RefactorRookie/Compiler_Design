%{
int sohardya,rem,d,n,temp;

%}

%%

[0-9]+ { 
d= atoi (yytext);
printf("%d valid",d);
temp=d;
sohardya=0;
while(d!=0)

{
rem=d%10;
sohardya=(sohardya*10)+rem;
d=d/10;
}
if(temp==sohardya)
printf("\n %d is a Palindrome Number\n", temp);
else
printf("\n %d is not a Palindrome Number\n", temp);
}
.+ {  printf("%d invalid",yytext);}

%%

int yywrap()
{
	return 1;
}

int main()
{
	yylex();
	return 0;
}
