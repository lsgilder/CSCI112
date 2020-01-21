#include <stdio.h>
#include <math.h>

//Logan Gilder
//Lab 4
//02-20-2019
//Calculates polygon area

int get_corners(double x[], double y[]) {
    int is_value = 1, i = 0;    

    //Loops through input and inserts into arrays
    while(is_value > 0) {
	is_value = scanf("%lf %lf", &x[i], &y[i]);
	i++;
    }

    return(i-1);
}

void output_corners(double x[], double y[], int max) {
    int i;

    //Loops through arrays to display coordinates
    printf("x \ty\n------------\n");
    for(i = 0; i < max; i++) {
	printf("%.1lf\t%.1lf\n", x[i], y[i]);
    }
    printf("------------\n");

    return;
}

double polygon_area(double x[], double y[], int max) {
    double area;
    int i;

    //Calculates the summation for area using a loop.
    for(i = 0; i < (max - 2); i++) {
	area += (x[i] + x[i+1])*(y[i+1] - y[i]);
    }

    return(fabs(area)/2);
}

int main(void) {
    int corners;
    double x[20], y[20], area;

    corners = get_corners(x, y);
    output_corners(x, y, corners);
    area = polygon_area(x, y, corners);
    printf("Area: %.1lf\n", area);

    return(0);
}
