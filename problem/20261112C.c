#include <stdio.h>
#include <math.h>

int main(){
    float x;
    scanf("%f", &x);

    if(x < 0){
        printf("%.2f\n", fabs(x));
    }
    else if(0 <= x && x < 2){
        printf("%.2f\n", sqrt(x + 1));
    }
    else if(2 <= x && x < 4){
        printf("%.2f\n", pow((x + 2), 3));
    }
    else{
        printf("%.2f\n", 2 * x + 5);
    }

    return 0;
}