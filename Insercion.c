#include <stdio.h>

#define N_ELEMENTS(array) (sizeof(array)/sizeof((array)[0])) 


int insercion(int a[],int total);
int printArray(int a[]);


int main(void){
	int arreglo[]={1,2,3,4,5};
	int total=N_ELEMENTS(arreglo);
	printf("%d",total);
	insercion(arreglo,total);
	printArray(arreglo);
}


int insercion(int a[],int total){
	int temp=0;
	for(int i=1;i < total;i++){
		temp=a[i];
		for(int j=i;j>0 && temp<a[j-1];j--){
			a[j]=a[j-1];
		}
		a[j]=aux;		
	}
}

int printArray(int a[]){
        int total=N_ELEMENTS(a);
        for(int i=0;i<total;i++){
                printf("%d,",a[i]);
        }   
        printf("\n");
}

