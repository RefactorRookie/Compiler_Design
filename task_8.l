%%

(3n|n>=0) {printf ("%s is valid",yytext);
.+{printf("%s is invalid",yytext);

%%
 
 int yywrap();
{
  return 1;
}
 
 int main()
{
 yylex();
 return 0;
}

