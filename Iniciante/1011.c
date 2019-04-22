#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(){

    float raio;
    
    scanf("%f", &raio);
    
    printf("VOLUME = %.3f\n", (4.0 / 3) * PI * raio * raio * raio);
    
    return 0;
}
