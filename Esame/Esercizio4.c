#include<stdio.h>
#include<stdlib.h>
#include "zip.h"
#include "somma.h"

int main(){

int a[] = {1,7,9,4};
int b[] = {4,5,6,9};
int sizenuova = 100;
int testpari[sizenuova];
int testdispari[sizenuova];

int lunghezza1,lunghezza2;
int ris1;

lunghezza1 = sizeof(a)/sizeof(int);
lunghezza2 = sizeof(b)/sizeof(int);

int size = lunghezza1 *2;
int c[size];

if(lunghezza1!=lunghezza2){

return EXIT_FAILURE;

	}
int j = 0;

for(int i = 0; i < (sizenuova*2); i++){
	if(i % 2 == 0){
	testpari[j] = i;
	j++;
	}
}

j = 0;

for(int i = 0; i < (sizenuova*2); i++){
	if(i % 2 != 0){
	testdispari[j] = i;
	j++;
	}
}

zip(testpari,testdispari,c,sizenuova*+1);

zip(a,b,c,lunghezza1);

ris1 = somma(c,size);

printf("La somma è: %d\n", ris1);

return EXIT_SUCCESS;
} 

