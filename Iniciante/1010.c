#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int numeroPeca1, qtdPeca1, numeroPeca2, qtdPeca2;
    float valorPeca1, valorPeca2;
    
    scanf("%d %d %f", &numeroPeca1, &qtdPeca1, &valorPeca1);
    scanf("%d %d %f", &numeroPeca2, &qtdPeca2, &valorPeca2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", (qtdPeca1 * valorPeca1) + (qtdPeca2 * valorPeca2));
    
    return 0;
}
 
