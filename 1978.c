#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	int i,j,a,c=0;
	int num[10000];
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<a;i++){
		if(num[i]<=1){
		
		c+=1;}
		for(j=2;j<=sqrt(num[i]);j++){
			if(num[i]%j==0){
				c-=1;
				break; 
			}
			
		}
	
	}
	
	printf("%d",c);
	
}
