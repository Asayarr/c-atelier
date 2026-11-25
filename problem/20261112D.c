#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n <= 4){
        printf("%d\n", 4 * n + 5);
    }
    else if(n < 10){
        printf("%d\n", 3 * n + 5);
    }
    else{
        printf("%d\n", 3 * n);
    }

    return 0;
}