#include <stdio.h>
int max(int a,int b) {
if (a>b)
    return a;
else
    return b;
}
int main() {
    int a= 3,b= 2;
    printf("%d",max(a,b));
    return 0;
}