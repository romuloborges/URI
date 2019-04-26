#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int duration;
    
    scanf("%d", &duration);
    
    if(duration < 0)
        exit(1);
    
    printf("%d:%d:%d\n", duration/3600, (duration%3600)/60, (duration%3600)%60);
    
    return 0;
}
