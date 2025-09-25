#include <stdio.h>
int factorielle(int a) {
    int i, f=1;
    for ( i=1; i<=a; i++){
     f=f*i;
    }
    return f;
}
int main() {
    int a= 5;
    printf("%d",factorielle(a));
    return 0;
}