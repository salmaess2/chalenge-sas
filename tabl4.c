#include <stdio.h>

int main () {
int n,i;
printf("donner le nombre des elements");
scanf("%d",&n);
int tab[n];
int max;
for( i=0; i<n; i++) {
 printf("saisir les elements");
 scanf("%d",&tab[i]);
 }
for( i=0; i<n; i++) {
max= tab[0];
if(tab[i]>tab[0])
max=tab[i];
}
printf("le plus grand est %d",max);
return 0;

}