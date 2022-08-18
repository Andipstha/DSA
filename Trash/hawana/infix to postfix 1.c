#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char opStack[100],postStack[100];
	int n,i,len,a ,b;
	char string[100] = "((A-(B+C))*D)^(E+F)";
	len=strlen(string);
	for(i=0;i<len;i++)
	{
		if(string[i]=='(')
		{
			opStack[i]=string[i];
		}
		else if(string[i]>='A' && string[i]<='Z'||string[i]>='0'&& string[i]<='9')
		{
			postStack[i] = string [i];
		}
		else
		{
			a=string[i];
			b=string[i+1];
			switch(string[i])
			{
				case '+':
					postStack[i] = a+b;
					break;
				case '-':
					postStack[i] = a-b;
					break;
				case '*':
					postStack[i] = a*b;
					break;
				case '^':
					postStack[i] = pow(a,b);
					break;
			}
		}
		printf("%c",postStack[i]);
	}

	return 0;
}
