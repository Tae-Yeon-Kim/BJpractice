#include <stdio.h>

int main(){

    int x,y,w,h;

    int check,check2;

    scanf("%d %d %d %d",&x,&y,&w,&h);

    if((w-x)<(h-y)){

        check = w-x;

    }

    else{

        check = h-y;

    }
	if(x>y){
		check2=y;
	}
	else{
		check2=x;
	}
	if(check2<check){
	    printf("%d",check2);

	}
	else{
		printf("%d",check);
	}

}

