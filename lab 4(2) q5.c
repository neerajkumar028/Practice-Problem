/*Write a C program to input a year from the user and check whether it is a leap year or not. A
year is a leap year if:
It is divisible by 400, or
It is divisible by 4 but not divisible by 100. Use an if-else statement to solve this.*/
#include<stdio.h>
int main(){
	int year;
	printf("Enter any year: ");
	scanf("%d", &year);
	if(year%400==0 || (year%4==0 && year%100!=0))
	printf("%d is a leap year.", year);
	else 
	printf("%d is not a leap year.", year);
	return 0;
}