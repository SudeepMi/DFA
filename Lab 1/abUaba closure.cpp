#include<stdio.h>
#include<string.h>

int main()
{
	char str[50],state='A';
	int i,j,k;
	printf("Enter string : \n");
	gets(str);
	
	for(i=0;i<strlen(str);i++){
		switch(state){
			//q0
			case 'A':
				if(str[i]=='a'){
					state = 'B';
				}else{
					state='E';
				}
			break;
			//q1
			case 'B':
				if(str[i]=='a'){
					state = 'E';
				}else{
					state='C';
				}
				break;
			//q2
			case 'C':
				if(str[i]=='a'){
					state = 'D';
				}else{
					state='E';
				}
				break;
			//q3		
			case 'D':
				if(str[i]=='a'){
					state = 'B';
				}else{
					state='C';
				}
				break;

	//q3		
			case 'E':
				if(str[i]=='a'){
					state = 'E';
				}else{
					state='E';
				}
				break;								
		}
	}
	
	if(state=='D' || state=='C'){
		printf("Given string is accepted");
	}
	else{
		printf("Given string is rejected");
	}
}
