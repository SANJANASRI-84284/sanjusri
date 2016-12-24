#include<stdio.h>
#include<conio.h>
void main()
{
char x;
printf("\nenter the character:");
scanf("%c",&x);
if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
printf("\n IT IS VOWEL");
else
printf("\nIT IS CONSONANT");
getch();
}
