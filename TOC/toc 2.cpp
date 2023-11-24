#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("enter the string:\n");
	scanf("%s",&str);
	int length=strlen(str);
	if (str[0] == 'a' && str[length-1] == 'a')
	{
		printf("accecpted");
	}
	else
	{
		printf("not accecpted");
	}
}