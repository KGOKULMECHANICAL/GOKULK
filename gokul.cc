#include<stdio.h>

int main()
{
	char g;
	printf("Enter the Character:");
	scanf("%c",&g);
	if((g>='a' && g<='z') || (g>='A' && g<='Z'))
		printf("Alphabet");
	else
		printf("No");
return 0;
}
