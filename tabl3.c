#include <stdio.h>

int main () {
int n,i;

printf("donner le nombre des elements");
scanf("%d",&n);
int tab[n];
int s=0;
for( i=0; i<n; i++) {
 printf("saisir les elements");
 scanf("%d",&tab[i]);
 }
for( i=0; i<n; i++)
s=s+tab[i];
printf("la somme est:%d",s);

return 0;

}