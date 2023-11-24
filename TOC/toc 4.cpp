#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int l,i,flag;
	printf("enter a string to check: \n");
	scanf("%s",s);
	l=strlen(s);
	flag=1;
	for(i=0;i<1;i++)
	{
		if(s[i]!='0' && s[i]!='1')
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		if(s[0]=='0' && s[l-1]=='0')
		printf("string is accepted");
		else
		    if(s[0]=='1' && s[l-1]=='1')
		    printf("string is accepted");
		
		else
		printf("string is not accepted");
		return 0;
	}
}