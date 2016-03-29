#include<stdio.h>


void zip(int* ar, int* br, int* cr, int l){


int nuoval = 2*l; //lunghezza del mio array doppia
int j = 0;        //j è l'indice del mio nuovo array
int i = 0;

while(i<l){

	cr[j] = ar[i];

	j += 2;
	i++;
} 

j = 1;
i = 0;

while(i<l){

	cr[j] = br[i];
	j+=2;
	i++;
}

	for(int k=0;k < nuoval;k++){

	printf("Il valore dell'indice è %d e dell'array è %d\n", k, cr[k]);
	
	} 
}

