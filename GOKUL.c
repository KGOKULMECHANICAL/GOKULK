#include<stdio.h>
int main()
{

char gk;
printf("Enter a Alphabate\n");
scanf("%c",&gk);

if(gk=='A'|| gk=='a'||gk=='E'||gk=='e'||gk=='I'||gk=='i'||gk=='O'||gk=='o'||gk=='U'||gk=='u')
    printf("Vowel \n");
else
    printf("Consonant \n");
}
