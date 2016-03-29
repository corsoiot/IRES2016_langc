#include<stdio.h>

int Ritornapositivo(int array[], int lunghezza){

int somma;

for(int i=0; i<lunghezza && (array[i]>=0); i++){

somma += array[i]; 
	}

return somma;

}

int main(){

int array[]={1,4,5,2,6,98,546,123,71,-3,44,5};
int lunghezza;
int ris;

lunghezza = sizeof(array)/sizeof(int);

ris = Ritornapositivo(array,lunghezza);

printf("Il valore della somma è: %d\n", ris);

}
