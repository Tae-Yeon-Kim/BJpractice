#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int *arr;
int tmp ;
void bubble(int arr[]){
	int i,j;
	int ch;
	
	for(i=0;i<tmp;i++){
		for(j=0;j<tmp-i;j++){
			if(arr[j]>arr[j+1]){
				ch = arr[j];
				arr[j]= arr[j+1];
				arr[j+1] = ch;
			}
		}
	}
}

int main(){
	int i,a,b,c;
	
	
	scanf("%d",&a);
	arr =(int *)malloc(a*sizeof(int));
	tmp = a-1;
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
		
	}
	
	bubble(arr);
	int dap =0;
	for(i=0;i<a;i++){
		dap+=(arr[i]*(a-i));
	}
	
	printf("%d",dap);
	
	
}
