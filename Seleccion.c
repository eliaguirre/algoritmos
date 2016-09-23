#include <stdio.h>

#define N_ELEMENTS(array) (sizeof(array)/sizeof((array)[0])) 


int seleccion(int a[],int total);
int printArray(int a[]);


int main(void){
	int arreglo[]={1,2,3,4,5};
	int total=N_ELEMENTS(arreglo);
	printf("%d",total);
	seleccion(arreglo,total);
	printArray(arreglo);
}


int seleccion(int a[],int total){
	int indice;
	int temp=0;
	for(int i=0;i< total-1;i++){
		indice=1;
		for(int j=i+1;j < total;j++){
			if(a[j]<a[indice]){
				indice=j;
			}
			if(i!=indice){
				temp=a[i];
				a[i]=a[indice];
				a[indice]=temp;
			}
		}		
	}
}

int printArray(int a[]){
        int total=N_ELEMENTS(a);
        for(int i=0;i<total;i++){
                printf("%d,",a[i]);
        }   
        printf("\n");
}

