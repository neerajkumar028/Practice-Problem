/*Write a C program to input a student's marks and assign a grade based on the following
criteria:
Marks >= 90: Grade A
Marks >= 80 and < 90: Grade B
Marks >= 70 and < 80: Grade C
Marks >= 60 and < 70: Grade D
Marks < 60: Grade F */
#include<stdio.h>
int main(){
	float marks;
	printf("Enter your marks (0-100): ");
	scanf("%f", &marks);
	if(marks>=0 && marks<=100)
	{
		if(marks>=90)
		printf("Grade A");
		else if(marks>=80 && marks<90)
		printf("Grade B");
		else if(marks>=70 && marks<80)
		printf("Grade C");
		else if(marks>=60 && marks<70)
		printf("Grade D");
		else 
		printf("Grade F");
	}
	else
	printf("Invalid Input");
	return 0;
}