#include <stdio.h>

#define N_ELEMENTS(array) (sizeof(array)/sizeof((array)[0])) 


int quicksort(int a[],int inicio,int fin);
int printArray(int a[]);


int main(void){
	int arreglo[]={1,2,3,4,5};
	int total=N_ELEMENTS(arreglo);
	printf("%d",total);
	quicksort(arreglo,0,total);
	printArray(arreglo);
}


int quicksort(int a[],int inicio,int fin){
	int central=(inicio+fin)/2;
	int pivote=a[central];
	int i=inicio;
	int j=fin;
	do{
		while(a[i]<pivote)
			i++;
		while(a[j]>pivote)
			j--;
		if(i<=j){
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++;
			j++;
		}
	}while(i<=j);
	if(inicio<j)
		quicksort(a,primero,j);
	if(i<fin){
		quicksort(a,i,fin);	
	}
}

int printArray(int a[]){
        int total=N_ELEMENTS(a);
        for(int i=0;i<total;i++){
                printf("%d,",a[i]);
        }   
        printf("\n");
}

