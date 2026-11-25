#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n <= 160){
        printf("%d\n", n * 10);
    }
    else{
        printf("%d\n", 1600 + (n - 160) * 30);
    }

    return 0;
}