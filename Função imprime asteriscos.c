#include<stdio.h>

void prn_quadrado(int);
void prn_quadrado_vaz(int);
void prn_triang(int);
void prn_linha(int);
void prn_linha_vaz(int);


int main(){
int n;
printf("Digite n:");
scanf("%d", &n);

prn_quadrado(n);
prn_quadrado_vaz(n);
prn_triang(n);


return 0;
}
void prn_linha(int n){
int j;
for(j=0;j<n;j++)
printf("*");
printf("\n");
}

void prn_linha_vaz(int n){
int j;
printf("*");
for(j=1;j<n-1;j++)
printf(" ");
printf("*\n");
}
void prn_quadrado(int n){
int i;
for(i=0;i<n;i++)
prn_linha(n);
printf("\n");
}
void prn_quadrado_vaz(int n){
int i;
prn_linha(n);
for(i=1;i<n-1;i++)
prn_linha_vaz(n);
prn_linha(n);
printf("\n");
}
void prn_triang(int n){
int i;
for(i=0;i<n;i++)
prn_linha(i+1);
printf("\n");
}
