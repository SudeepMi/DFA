#include <stdio.h>
#include <string.h>

int is_keyword(char str[])
{
    if (!strcmp(str, "auto") || !strcmp(str, "default") 
        || !strcmp(str, "signed") || !strcmp(str, "enum") 
        ||!strcmp(str, "extern") || !strcmp(str, "for") 
        || !strcmp(str, "register") || !strcmp(str, "if") 
        || !strcmp(str, "else")  || !strcmp(str, "int")
        || !strcmp(str, "while") || !strcmp(str, "do")
        || !strcmp(str, "break") || !strcmp(str, "continue") 
        || !strcmp(str, "double") || !strcmp(str, "float")
        || !strcmp(str, "return") || !strcmp(str, "char")
        || !strcmp(str, "case") || !strcmp(str, "const")
        || !strcmp(str, "sizeof") || !strcmp(str, "long")
        || !strcmp(str, "short") || !strcmp(str, "typedef")
        || !strcmp(str, "switch") || !strcmp(str, "unsigned")
        || !strcmp(str, "void") || !strcmp(str, "static")
        || !strcmp(str, "struct") || !strcmp(str, "goto")
        || !strcmp(str, "union") || !strcmp(str, "volatile"))
        return (1);
    return (0);
}

int is_valid_identifier(char str[]){
	
	if(is_keyword(str) == 1){
		printf("Given string is a keyword \n");
		return 0;	
	}
 
   
    if (!((str[0] >= 'a' && str[0] <= 'z')
          || (str[0] >= 'A' && str[0] <= 'Z')
          || str[0] == '_'))
        return 0;
 
   
    for (int i = 1; i < strlen(str); i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z')
              || (str[i] >= 'A' && str[i] <= 'Z')
              || (str[i] >= '0' && str[i] <= '9')
              || str[i] == '_'))
            return 0;
    }
 
    
    return 1;
}


int main()
{
    char str[50];
	printf("Enter the string:");
	scanf("%s",str);
	is_valid_identifier(str) == 1 ? printf("Given string is a valid identifier") :  printf("Given string is not a identifier");
    return 0;
}
