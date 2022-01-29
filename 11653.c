#include <stdio.h>

int main(){
	
	int a,i=2;
	
	scanf("%d",&a);
	while(a!=1){
		if(a%i==0){
			printf("%d\n",i);
			a=a/i;
		
		}
		else if(a%i!=0){
			i++;
		
		}
		else if(a==1){
			break;
		}
		
		
		
	}
	

	
}
