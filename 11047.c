#include <stdio.h>
#include <string.h>
int main(){
	
	int a,b,c,d,e,i;
	int dong[10]={0};
	int hap =0;
	int tmp=0;
	scanf("%d %d",&a,&b);
	for(i=0;i<a;i++){
		scanf("%d",&c);
		dong[i]=c;
	}
	

	for(i=-1+a;i>=0;i--){
		if((b/dong[i])>=0){
			tmp=(b/dong[i]);
			hap+=(b/dong[i]);
			b-=(tmp*dong[i]);
		}
		
	}
	printf("%d",hap);
	
}
