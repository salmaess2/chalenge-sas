#include <stdio.h>

int main () {
int n,i;

printf("donner le nombre des elements");
scanf("%d",&n);
int tab[n];
for( i=0; i<n; i++) {
 printf("saisir les elements");
 scanf("%d",&tab[i]);
 }
for( i=0; i<n; i++)

printf("%d, ",tab[i]);
return 0;

}