#include <stdio.h>
int main() {
    int a, b, c;
    int av;
    float ave;
    scanf("%d %d %d", &a, &b, &c);
    av = a+b+c;
    ave = av/3.0;
    printf("Average: %.2f\n", ave);
    return 0;
}