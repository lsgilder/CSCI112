#include <stdio.h>

#define MILEAGE .35

int main(void){
	
	//Instance variables
	double INITIAL, FINAL, TOTAL, REIMBURSEMENT;

	printf("MILEAGE REIMBURSEMENT CALCULATOR ");
	
	//Scans for first input
	printf("\nEnter beginning odometer reading.=> ");
	scanf("%lf", &INITIAL);
	
	//Scans for second input
	printf("Enter ending odometer reading.=> ");
	scanf("%lf", &FINAL);
	
	//Calculates distance traveled and reimbursement for mileage
	TOTAL = FINAL - INITIAL;
	REIMBURSEMENT = TOTAL * MILEAGE;
	
	//Final print statements
	printf("You traveled %.2lf miles.    ", TOTAL);
	printf("At $%.2lf per mile,\nyour reimbursement is $%.2lf.\n", MILEAGE, REIMBURSEMENT);

	return(0);
}
