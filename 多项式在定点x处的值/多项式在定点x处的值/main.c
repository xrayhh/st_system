//
//  main.c
//  多项式在定点x处的值
//
//  Created by 朱敬业 on 2023/3/30.
//

#include<stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int x;
    scanf("%d", &x);
    int nums[20];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int p = nums[n-1];
    while (i - 1 >= 0) {
        p = (p * x + nums[i-1]);
        i--;
    }
    printf("%d", p);
}
