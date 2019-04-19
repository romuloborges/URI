#include <stdio.h>

#define n 3.14159

int main(){
	double raio;
	double A;
	scanf("%lf", &raio);
	A = (raio*raio)*n;
	printf("A=%.4f\n", A);
	
	return 0;
}
 
