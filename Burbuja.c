#include <stdio.h>

#define N_ELEMENTS(array) (sizeof(array)/sizeof((array)[0])) 


int burbuja(int a[],int total);
int printArray(int a[]);


int main(void){
	int arreglo[]={1,2,3,4,5};
	int total=N_ELEMENTS(arreglo);
	printf("%d",total);
	burbuja(arreglo,total);
	printArray(arreglo);
}


int burbuja(int a[],int total){
	int temp=0;
	int interruptor=1;
	for(int i=0;i<total-1 && interruptor ;i++){
		interruptor=0;
		for(int j=0;j< total-i-1;j++){
			if(a[j]>a[j+1]){
				interruptor=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;	
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

