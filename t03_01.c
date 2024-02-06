// 12S23030 - Simorangkir Jonathan
#include <stdio.h>

int main() {
    int n, num;
    int min_val = 100; 
    int max_val = -100; 

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num < min_val) {
            min_val = num;  
        }
        if(num > max_val) {
            max_val = num;
        }
    }

    printf("%d\n", min_val);
    printf("%d\n", max_val);

    return 0;
}