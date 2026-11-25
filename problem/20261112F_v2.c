#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i){
        int date;
        scanf("%d", &date);

        switch (date){
        case 1:case 3:case 5:
            printf("NO\n");
            break;
        default:
            printf("YES\n");
            break;
        }
    }

    return 0;
}
