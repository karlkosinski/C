//School store project
//#define _CRT_SECURE_NO_WARNING
#include<stdio.h>

int main() {

	int pencils = 0;                                     				   // Allocate and initilize memory
	double price = 0, subtotal = 0, tax = 0, total = 0;
	
	printf("\n                Name:               Karl                             "); // initial student name


	printf("\n                Student Number:     123-456-789                       ");

	printf("\n");
	printf("\n                                         Humber Stationary Store ");     // Title
	printf("\n");
	printf("\n");

	printf("\n                Enter the number of pencils to purchased: "); 	   // # of pencils
	scanf_s("%d", &pencils);
	printf("\n");

	printf("\n                Enter the price of one pencil: $ ");                    // price of one pencil 
	scanf_s("%lf", &price);
	printf("\n");

	subtotal = pencils * price;
	tax = subtotal * 0.13;
	total = subtotal + tax;

	printf("\n                  Number of Pencils purchased: %d", pencils);
	printf("\n");

	printf("\n                  Price of each pencil: $ %lf", price);
	printf("\n");

	printf("\n                  Sub Total: $ %lf", subtotal); 			  // Subtotal 
	printf("\n");

	printf("\n                  Tax Amount at 13%% HST: $ %lf", tax);                 // Hst 13%
	printf("\n");

	printf("\n                  Total Amount Due Now: $ %lf", total);                 // total = subtotal + tax 
	printf("\n");


	return 0;
}

