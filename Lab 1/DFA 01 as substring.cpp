#include<stdio.h>
#define max 50
int main()
{
	int i=0;
	char str[max],state='A';
	printf("Enter the string");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		switch(state)
		{
			case 'A':
				{
				if(str[i]=='0')
					state='B';
				else if(str[i]=='1')
					state='D';
				break;
				}
			case 'B':
				{
					if(str[i]=='1')
						state='C';
					else if(str[i]=='0')
						state='D';
					break;
				}
			case 'C':
				{
					if(str[i]=='1')
						state='C';
					else if(str[i]=='0')
							state='D';
					break;
				}
			case 'D':
				{
					if(str[i]=='1')
						state='D';
					else if(str[i]=='0')
						state='D';
						break;
					
				}
				
		}
	}
	if(state=='C')
		printf("Input string accepted as it reached final state %c",state);
	else
	printf("Input string Rejected");
}
