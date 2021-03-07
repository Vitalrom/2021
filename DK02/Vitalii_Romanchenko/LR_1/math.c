
#include "math.h"

#define MOD(n) (n < 0 ? -n : n) 


long factorial(int number)
{
    return (number == 0 || number == 1) ? 1 : number * factorial(number - 1);
}

double power(int base, int pow){
    int i = 0;
    double res= 1.0;
	for (i = 0; i < MOD(pow); i ++) {
		res *= base;
	}
    return (pow < 0) ? 1.0 / res : res;
}

double q(int A, int B, int C) {
	return (power(A, 2) + power(B, 2)) / (double)(B + power(5, C)) + factorial(B);
}

//if (number == 0 || number == 1) return 1;
//  if (number >1) return number * factorial(number - 1);
