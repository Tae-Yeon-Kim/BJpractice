#include <stdio.h>

int main(){
	int a,b,c,i;
	scanf("%d %d",&a,&b);
	
	if(a<=b){
		c=b;
	}
	else{
		c=a;
	}
	
	for(i=a;i>=1;i--){
		if(a%i ==0 && b%i==0){
			printf("%d\n%d",i,i*(a/i)*b/i);
			break;
		}
	}

		
} 
