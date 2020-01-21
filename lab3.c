#include <stdio.h>
#include <math.h>

//Logan Gilder
//Lab 03
//02-05-2019
//Loan payment calculator

//calculates total monthly payment
double calculatePayment(double p, double mr, int n){

    double payment;

    //formula for monthly payment
    payment = (double)((mr*p)/(1-(pow((1+mr), (-n)))));

    return payment;
}

//calculates interest using remaining balance
double calculateInterest(double p, double mr){
    
    double interest;
    
    interest = p * mr;

    return interest;
}

//iterates through each month and makes table
void iterate(double p, double mr, int n){
    
    double total, pripay, interest;

    total = calculatePayment(p, mr, n);
    
    printf("Payment\t\tInterest\t\tPrincipal\t\tBalance\n");
    printf("-------------------------------------------------------------------------\n");
    
    //loop to make table
    int i;
    for (i=0; i<n; i++){
	
	interest = calculateInterest(p, mr);
	pripay = total - interest;
	p -= pripay;
	if(p < 0){
	    p = 0;
	}
	
	printf("%i\t\t%.2lf\t\t\t%.2lf%25.2lf\n", (i+1), interest, pripay, p);

    }
    printf("-------------------------------------------------------------------------\n");
    printf("Final Payment\t$%.2lf\n", total);
}

int main(void){

    //initialize variables
    double p, r, mr, total;
    int n;

    //prompt for user input
    printf("Enter principal: ");
    scanf("%lf", &p);
    printf("Enter annual interest rate: ");
    scanf("%lf", &r);
    printf("Enter number of payments: ");
    scanf("%i", &n);

    mr = r/1200;
    total = calculatePayment(p, mr, n);

    //print information before table
    printf("Principal\t\t $%.2lf\t Payment \t\t$%.2lf\n", p, total);
    printf("Annual Interest \t %.2lf%%  \t Term\t\t\t%i months\n", r, n);
    
    iterate(p, mr, n);

    return(0);
}














