/*Write a C program to calculate the income tax for an individual based on the following slabs:
Income up to 250,000: No tax.
Income between 250,001 and 500,000: 5% tax.
Income between 500,001 and 1,000,000: 20% tax.
Income above 1,000,000: 30% tax. Print the total income, tax amount, and net income after tax.*/
#include<stdio.h>
int main(){
	float income, tax;
	printf("Enter you income: ");
	scanf("%f", &income);
	if(income>=0&&income<=250000)
	tax=income*0;
	else if(income>250000&&income<=500000)
	tax=income*0.05;
	else if(income>500000&&income<=1000000)
	tax=income*0.2;
	else if(income>1000000)
	tax=income*0.3;
	else
	printf("Invalid Input");
	printf("Total income: %.2f\nTax amount: %.2f\nNet income after tax: %.2f", income, tax, income-tax);
	return 0;
}