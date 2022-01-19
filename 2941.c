#include <stdio.h>
#include <string.h>


int main()
{
	char a[102];
	int i,c=0;
	
	fgets(a,sizeof(a),stdin);
	
	
	for	(i=0;i<strlen(a)-1;i++){
	
		if((a[i]=='c'||a[i]=='s'||a[i]=='z')&&(a[i+1]=='='||a[i+1]=='-')){
			i+=1;
			c+=1;
			
		}
		else if((a[i]=='l'||a[i]=='n')&&a[i+1]=='j'){
			i+=1;
			c+=1;
			
		}
		else if(a[i]=='d'&&a[i+1]=='-'){
			i+=1;
			c+=1;
			
		}
		else if(a[i]=='d'&&a[i+1]=='z'&&a[i+2]=='='){
			i+=2;
			c+=1;
			
		}
		else{
		
		c+=1;}
	}
	printf("%d",c);
		
	}

