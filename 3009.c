#include <stdio.h>

int ch(int ac[]){
	int dap;
	if(ac[0]==ac[1]){
		dap = ac[2];
	}
	else if(ac[1]==ac[2]){
		dap = ac[0];
	} 
	else {
		dap=ac[1];
	}
	
	return dap;
}

int main(){
	int a[3],b[3];
	
	int i,j;
	int dap1,dap2;
	for(i=0;i<3;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	
	dap1=ch(a);
	dap2=ch(b);
	printf("%d %d",dap1,dap2);
}
