#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        float dis;
        scanf("%f", &dis);
        float bt, wt;
        bt = 50 + dis / 3.0;
        wt = dis / 1.2;

        if (bt < wt){
            printf("Bike\n");
        }
        else if(bt > wt){
            printf("Walk\n");
        }
        else{
            printf("All\n");
        }
    }
    return 0;
}