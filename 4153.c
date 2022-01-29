#include <stdio.h>
#include <string.h>

int main(){
	
	int a,b,c;
	int i,check[1000],ch=0;
	scanf("%d %d %d",&a,&b,&c);
	while(a!=0 && b!=0 && c!=0){
		int a1=a*a;
		int b1=b*b;
		int c1=c*c;
		
		if(a>=b && a>=c){
			if(a1==b1+c1){
				check[ch]=1;
			}
			else{
				check[ch]=0;
			}
		}
		else if(b>=a && b>=c){
			if(b1==a1+c1){
				check[ch]=1;
			}
			else{
				check[ch]=0;
			}
		}
		else{
			if(c1==a1+b1){
				check[ch]=1;
			}
			else{
				check[ch]=0;
			}
		}
		ch+=1;
		scanf("%d %d %d",&a,&b,&c);
	}
	for(i=0;i<ch;i++){
		if(check[i]==1){
			printf("right\n");
		}
		else{
			printf("wrong\n");
		}
	}
}
