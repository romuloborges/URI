#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char nome[20];
    double salario;
    double totalVendas;
    
    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &totalVendas);
    
    printf("TOTAL = R$ %.2lf\n", salario+(totalVendas * 0.15));
    
    return 0;
}
 
