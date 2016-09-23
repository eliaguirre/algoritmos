#include <stdio.h>

#define N_ELEMENTS(array) (sizeof(array)/sizeof((array)[0])) 


int shell(int a[],int total);
int printArray(int a[]);


int main(void){
	int arreglo[]={1,2,3,4,5};
	int total=N_ELEMENTS(arreglo);
	printf("%d",total);
	shell(arreglo,total);
	printArray(arreglo);
}


int shell(int a[],int total){
	int intervalo=total/2;
	int k;
	while(intervalo>0){
		for(int i=intervalo;i<total;i++){
			j=i-intervalo;
			while(j>=0){
				k=j+intervalo;
				if(a[j]<=a[k]){
					j=-1;
				}else{
					int temp=a[j];
					a[j]=a[k];
					a[k]=temp;
					j-=intervalo;
				}
			}		
		}
		intervalo=intervalo/2;
	}
}

int printArray(int a[]){
        int total=N_ELEMENTS(a);
        for(int i=0;i<total;i++){
                printf("%d,",a[i]);
        }   
        printf("\n");
}

