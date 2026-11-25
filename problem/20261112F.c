#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int date;
        scanf("%d", &date);

        if(date == 1 || date == 3 || date == 5){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}