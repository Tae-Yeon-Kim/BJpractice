#include <stdio.h>

int main(){
    int i,a;
    int hap=0;
    int bag,il,sib,tmp1,tmp2;

	
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(i<100){
            hap+=1;
        }
        else if(i>=100&&i<1000){
            bag = i/100;
            sib= (i-bag*100)/10;
            il = i%10;
            
            
            tmp1 = bag - sib;
            
            tmp2=sib-il;
            
            if(tmp1==tmp2){
                hap+=1;
            }
        }
        
        
}printf("%d\n",hap);



}
