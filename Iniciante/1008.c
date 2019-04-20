#include <stdio.h>

int main(){

    int eNumber;
    int wh;
    float amount;

    scanf("%d", &eNumber);
    scanf("%d", &wh);
    scanf("%f", &amount);

    printf("NUMBER = %d\n", eNumber);
    printf("SALARY = U$ %.2f\n", wh * amount);

    return 0;
}
 
