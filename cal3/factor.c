#include <stdio.h>
#include <conio.h>

int main(){
int x,fact=1,Nombre;    
 printf("Entrer un Nombre: ");    
  scanf("%d",&Nombre);    
    for(x=1;x<=Nombre;x++){    
      fact=fact*x;    
  }    
  printf("Factoriel de %d est: %d",Nombre,fact);    
return 0;  
}   