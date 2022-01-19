#include <stdio.h>

int main(){
    int c,i;
    
    scanf("%d",&c);
 	
    while(c--){
        char a[101]={0} ;
        int ab[26]={0};
		
		fgets(a,sizeof(a),stdin);
		for(i=0;i<sizeof(a);i++)
		{
			ab[(int)a[i]-97]+=1;
		} 
		for(i=0;i<=26;i++){
			printf("%d : %d \n",i,ab[i]);
		}
    }
}
