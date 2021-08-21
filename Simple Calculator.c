// Simple calculator / The humble begginings.
#define _CRT_SECURE_NO_WARNING 
#include<stdio.h>

int main(void) {


	
		double f, s, o, A, S, M, D;
		int Mod;

		printf("\n Enter first number: ");						// First #
		scanf_s("%lf", &f);
		printf("\n");
		printf("\n Enter second number: ");  						// Second #
		scanf_s("%lf", &s);
		printf("\n List of operations to choose from are: "); 				// Choose your operator
		printf("\n");
		printf("\n 1- Addition");
		printf("\n 2- Subtracion");
		printf("\n 3- Multiplication");
		printf("\n 4- Division");
		printf("\n 5- Modulus");
		printf("\n 6- Exit");
		printf("\n");
		printf("\n Please Enter the operation number you want to do: ");
		scanf_s("%lf", &o);
		printf("\n");

		A = (f + s);									// Adding
		S = (f - s);									// Subtracting
		M = (f * s);									// Multiplication
		D = (f / s);									// Division
		Mod = ((int)f) % ((int)s);

		if (o == 1)
		{
			printf(" You chose addition result is: %lf \n", A);
		}
		else if (o == 2)
		{
			printf(" You chose Subtraction, result is: %lf \n", S);
		}
		else if (o == 3)
		{
			printf(" You chose Multiplication, result is: %lf \n", M);
		}
		else if (o == 4)
		{
			printf(" You chose Division, result is: %lf \n", D);
		}
		else if (o == 5)
		{
			printf(" You chose Modulus, result is: %d \n", Mod);
		}
		else if (o == 6)
		{
			printf(" Thank you for using Karls calculator Good Bye \n");
		}
		else if (o > 6)
		{
			printf(" Choose a number between 1-6 ! \n");			// If not a correct number is entered 
		}

		printf("\n");
	
}

