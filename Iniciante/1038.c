#include <stdio.h>

int main(){
    
    float precos[5];
    precos[0] = 4;
    precos[1] = 4.5;
    precos[2] = 5;
    precos[3] = 2;
    precos[4] = 1.5;
    
    int code, amount;
    
    scanf("%d %d", &code, &amount);
    
    printf("Total: R$ %.2f\n", precos[code-1]*amount);
    
    return 0;
}
 
