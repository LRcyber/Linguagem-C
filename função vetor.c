#include <stdio.h>
#include <stdlib.h>

void inc_vet(int [], int);
main(){
int vet[5] = {1,2,3,4,5};

inc_vet(vet, 5);
system("PAUSE");
return 0;
}

void inc_vet(int v[], int m){
int i;

for(i=0;i<m;i++)
v[i]++;
}
