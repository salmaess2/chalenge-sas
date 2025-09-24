#include <stdio.h>
int main() {
int i,N;
int s=0;
printf("donner un entier positif");
scanf("%d",&N);
for( i=1 ; i<=N ;i++) {
 s=s+i;
}
printf("resultat=%d",s);
return 0;

}