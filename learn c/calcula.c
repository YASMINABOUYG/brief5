#include <stdio.h>
int main(){
    int N1 , N2,S,P,DV,Diff;
    printf("Entrer le nombre 1 :");
    scanf("%d",&N1);
    printf("Entrer le nombre 2 :");
    scanf("%d",&N2);
    S=N1+N2 ;
    P=N1*N2 ;
     Diff=N1-N2 ;
    if (N2!=0){
    DV=N1/N2 ;
    printf("La division des nums est :%d\n",DV);
    }
    else printf("impossible de diviser sur 0\n");
    printf("la somme des nums est:%d\n",S);
    printf("le produit des nums est:%d\n",P);
    printf("la difference des nums est:%d\n",Diff);
}

