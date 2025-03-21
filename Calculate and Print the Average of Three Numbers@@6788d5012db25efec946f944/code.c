#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d, %d, %d", &a, &b, &c);
    int av;
    av = a + b + c;
    float ave;
    ave = av/3;
    printf("Average: %f", ave);
    return 0;
}