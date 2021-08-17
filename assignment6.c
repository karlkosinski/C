#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findMax(int, int, int);
void calcMe(int, int, int);

int main() {

	int n1, n2, n3;

	printf("\n Type in your three numbers: ");
	scanf("%d%d%d", &n1, &n2, &n3);

    findMax(n1, n2, n3);

    calcMe(n1, n2, n3);

	return 0;

}

int findMax(int a, int b, int c) {

   
    if (a >= b && a >= c)
        printf("\n The Largest number is: %d", a);

    if (b >= a && b >= c)
        printf("\n The Largest number is: %d", b);

    
    if (c >= a && c >= b)
        printf("\n The Largest number is: %d", c);

    return 0; 
}

void calcMe(int n1, int n2, int n3) {


    int total, first, second, first1, second2;
    
    first = n1 + 2 * n3;
    first1 = first / 2 * n1;
    second = 6 * n1 - 2 * n2;
    second2 = second / 4 * n3;
    total = first1 + second2;
    
    printf("\n The total of the equation is: %d", total);
    
}