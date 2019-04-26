#include <stdio.h>
#include <stdlib.h>

int main(){

    int spentTime, averageSpeed;
    
    scanf("%d", &spentTime);
    scanf("%d", &averageSpeed);
    
    printf("%.3f\n", (spentTime * averageSpeed)/12.0);

    return 0;
}
 
