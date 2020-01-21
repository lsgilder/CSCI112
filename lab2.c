#include <stdio.h>
#include <math.h>

//Logan Gilder
//01-23-2019
//lab 2


//function to return BMI
void calculateBMI(double height, double weight) {

	double BMI;
	
	//formula to calculate BMI
	BMI = (703 * weight)/(pow(height, 2));

	//determines weight range with calculated BMI
	if(0 < BMI && BMI < 18.5) {
		printf("Your BMI is %.1lf which lies in the underweight range.\n", BMI);
	} else if(BMI < 24.9) {
		printf("Your BMI is %.1lf which lies in the normal range.\n", BMI);
	} else if(BMI < 29.9) {
		printf("Your BMI is %.1lf which lies in the overweight range.\n", BMI);
	} else if(BMI > 29.9 && BMI != INFINITY) {
		printf("Your BMI is %.1lf which lies in the obese range.\n", BMI);
	} else {
		printf("INVALID INPUT\n");
	}
}

int main(void) {
	
	//instance variables
	double height, weight;

	printf("BMI Calculator\n");
	
	//scanning for input
	printf("Enter height and weight (in., lbs).=> ");
	scanf("%lf, %lf", &height, &weight);
	
	//checking for invalid input
	if(height <= 0 || weight <= 0) {
		printf("INVALID INPUT\n");
		return(0);
	}
	
	//prints height and weight entered
	printf("Your height is %.1lf in. and your weight is %.1lf lbs.\n", height, weight);
	
	//calling function to calculate BMI using input
	calculateBMI(height, weight);
		
	return(0);
}
