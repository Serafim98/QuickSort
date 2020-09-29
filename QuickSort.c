#include <stdio.h>

void Troca(int *A, int i, int  j){ 
	int aux;
	aux= *(A+i);
	*(A+i)= *(A+j);
	*(A+j)= aux;
	return;
}

void QuickSort(int *A, int ini, int fim){
   int pivo, i, j, meio;
   i = ini;
   j = fim;
   meio = (i + j)/2;
   pivo = *(A+meio);
   do{
      while (*(A+i) < pivo)  i++;
      while (*(A+j) > pivo)  j--;
      if(i <= j){
         Troca(A, i, j);
         i++;
         j--;
      }
   }while(j > i);
   if(ini < j) QuickSort(A, ini, j);
   if(i < fim) QuickSort(A, i, fim);
   return;   
}


int main(void){
	int i, A[]={5,2,6,4};
	QuickSort(A, 0, 3);
	for(i=0; i<4; i++){
		printf("%d:%d\n", i, *(A+i));
	}
return(1);
}
