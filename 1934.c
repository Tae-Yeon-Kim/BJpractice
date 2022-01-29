#include <stdio.h>

int main(){
	
	int a,b,c,i,j;
	scanf("%d",&a);
	int ch;
	int dap[1001];
	for(i=0;i<a;i++){
		scanf("%d %d",&b,&c);
		if(b>=c){
			ch=b;
		}
		else{
			ch=c;
		}
		for(j=c;j>=1;j--){
			if(b%j==0 && c%j==0){
				dap[i]=j*(b/j)*(c/j);
				break;
			}
		}
		
	}
	
	for(i=0;i<a;i++){
		printf("%d\n",dap[i]);
		
	}
	
}
