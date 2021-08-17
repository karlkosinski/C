// Karl Kosinski Practice 1

#include <stdio.h>
#include <math.h>
int main(void)
{
	float a, b, c, a1, b2, ans;
	int 

	printf("\n       A             12 + B  ");
	printf("\n -------------  +  -----------");
	printf("\n  B + 12 %% 5       C + 6 x 7     ");
	printf("\n");
	printf("\n Given the following equation input the A,B,C to solve it");
	printf("\n");
	printf("\n Input the number you want to use for A: ");
	scanf_s("%f", &a1);
	printf("\n");
	printf("\n Input the number you want to use for B: ");
	scanf_s("%f", &b);
	printf("\n");
	printf("\n Input the number you want to use for C: ");
	scanf_s("%f", &c);


	a1 = (float)(10 + 5 * 2 - 8 / 4 + 10 % 7);
	b2 = (float)(12 + b / c + 6 * 7);
	ans = (float)(a1 + b2);
	
	printf("\n      The answer is  %f", ans); 
	printf("\n");

}
