#include<stdio.h>

void restituzione(int a[], int c[],int l)
{
//fare cubo input e restituire array

for(int i=0;i<l;i++)
c[i]=a[i]*a[i]*a[i];

}

int main()
{
int array[]={1,2,3,4,5,6,7,8,9,10,11,12,13,123,23,34,56,34,56,68,34,23,55,76,7,234,35,576,7,342,3};
int lunghezza = sizeof(array)/sizeof(int);
int c[lunghezza];
int indice =0;

restituzione(array,c, lunghezza);

for(int i=0;i<lunghezza;i++)
printf("Il cubo e %d\n", c[i]);

//stampare a partire dai primi 10 numeri divisibili per 3

for(int i=0;i<lunghezza;i++)
{
if(c[i]%3 ==0 && indice < 10)
{
printf("Il cubo divisibile per 3 e %d\n ", c[i]);
indice++;
}
}

}
