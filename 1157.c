#include <stdio.h>
#include <string.h>
int main(){

    char a[1000000];
    fgets(a,sizeof(a), stdin );
    int check[26]={0};
    int i,len,tmp;
    len = strlen(a);
    int dap=0,num;
    for(i=0;i<len;i++){
    	if((int)a[i]>=97){
    		tmp = (int)a[i]-97;
    		
    		
		}
		else{
			tmp = (int)a[i]-65;
			
		}
		check[tmp]+=1;
		
	}
	for(i=0;i<26;i++){
		//printf("%d :%d \n" ,i,check[i]);
		if(check[i]>dap){
			dap = check[i];
			num=i;
		}

	}
	for(i=0;i<26;i++){
		
		if(check[i]==dap && i!=num){
			printf("?");
			break;
		}
		else if(i==25){
			printf("%c",num+65);	
			
			}

	}


}
