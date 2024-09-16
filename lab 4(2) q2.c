/*Write a C program to input a character from the user and check whether the given character
is a vowel or a consonant, using if-else*/
#include<stdio.h>
int main(){
	char ch;
	printf("Enter any capital or small alphabet: ");
	scanf(" %c", &ch);
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
	{
		if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
		printf("%c is a vowel.", ch);
		else
		printf("%c is a consonant.", ch);	
	}
	else
	printf("Invalid input!");
	return 0;
}