#include <stdio.h>
#include <string.h>

int main(){
	
	int a[15][15];
	int dap[1000];
	int i,j;
	int n,b,c;

	for(i=0;i<=14;i++){
		for(j=0;j<=14;j++){
			
			if(i==0||j==0){
				a[i][j]=j;
			}
			else if(i>=1){
				a[i][j]=a[i][j-1] + a[i-1][j];
			}
			
			
			
		}
	}
	
	
	
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&b);
		scanf("%d",&c);
		dap[i]=a[b][c];
		
		
		
	}
	for(i=0;i<n;i++){
		printf("%d\n",dap[i]);
	}


}
