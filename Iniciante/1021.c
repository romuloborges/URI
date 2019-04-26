#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float value;
    
    int intValue;
    
    int floatValue;
    
    scanf("%f", &value);
    
    if(value >= 0 && value <= 1000000){
        intValue = (int) value;
    
        floatValue = (int) roundf((value - intValue)*100);
        
        printf("NOTAS:\n");
        
        printf("%d nota(s) de R$ 100.00\n", intValue / 100);
        
        intValue = intValue % 100;
        
        printf("%d nota(s) de R$ 50.00\n", intValue / 50);
        
        intValue = intValue % 50;
        
        printf("%d nota(s) de R$ 20.00\n", intValue / 20);
        
        intValue = intValue % 20;
        
        printf("%d nota(s) de R$ 10.00\n", intValue / 10);
        
        intValue = intValue % 10;
        
        printf("%d nota(s) de R$ 5.00\n", intValue / 5);
        
        intValue = intValue % 5;
        
        printf("%d nota(s) de R$ 2.00\n", intValue / 2);
        
        intValue = intValue % 2;
        
        printf("MOEDAS:\n");
        
        printf("%d moeda(s) de R$ 1.00\n", intValue);
        
        printf("%d moeda(s) de R$ 0.50\n", floatValue / 50);
        
        floatValue = floatValue % 50;
        
        printf("%d moeda(s) de R$ 0.25\n", floatValue / 25);
        
        floatValue = floatValue % 25;
        
        printf("%d moeda(s) de R$ 0.10\n", floatValue / 10);
        
        floatValue = floatValue % 10;
        
        printf("%d moeda(s) de R$ 0.05\n", floatValue / 5);
        
        floatValue = floatValue % 5;
        
        printf("%d moeda(s) de R$ 0.01\n", floatValue);
        
    }else
        exit(1);
    
    
    
    return 0;
}
 
