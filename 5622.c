#include <stdio.h>
#include <string.h>


int main()
{
	char a[16];
	int i,c=0;
	fgets(a,sizeof(a),stdin);
	
	
	for (i=0;i<=16;i++)
	{
		if('A'==a[i] ||'B'==a[i] ||'C'==a[i])
		{c+=3 ;
		}
		
		if('D'==a[i] ||'E'==a[i] ||'F'==a[i])
		{c+=4 ;
		}
		
		if('G'==a[i] ||'H'==a[i] ||'I'==a[i])
		{c+=5;
		}
		
		if('J'==a[i] ||'K'==a[i] ||'L'==a[i])
		{c+=6;
		}
		
		if('M'==a[i] ||'N'==a[i] ||'O'==a[i])
		{c+=7;
		}
		
		if('P'==a[i] ||'Q'==a[i] ||'R'==a[i] || 'S'==a[i])
		{c+=8;
		}
		
		if('T'==a[i] ||'U'==a[i] ||'V'==a[i])
		{c+=9;
		}
		
		if('W'==a[i] ||'X'==a[i] ||'Y'==a[i] || 'Z'==a[i])
		{c+=10;
		}
	}
	
	printf("%d",c);
	
 } 
