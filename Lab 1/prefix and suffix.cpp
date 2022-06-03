#include<stdio.h>
#include<string.h>
void find_suff(char s[])
{
	int i,j,k;
	char suffix[50];
	for(i=0;i<=strlen(s);i++)
	{
		k=i;
		for(j=0;j<strlen(s);j++)
		{
			suffix[j]=s[k];
			k++;
		}
		suffix[j]='\0';
		printf("suffix is :%s\n",suffix);
	}
}

void find_prefix(char s[])
{
	int i,j,k;
	char suffix[50];
	for(i=0;i<=strlen(s);i++)
	{
	
		for(j=0;j<i;j++)
		{
			k=j;
			suffix[j]=s[k];
			k++;
		}
		suffix[j]='\0';
		printf("prefix is :%s\n",suffix);
	}
}

int main()
{
	char str[50];
	printf("Enter string : \n");
	gets(str);
	find_suff(str);
	find_prefix(str);
	return 111;
}
