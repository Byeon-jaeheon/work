#include <stdio.h>
#include <string.h> 

void print_hex(unsigned x) {
    int i,j,k,l,m;
    const int SIZE = sizeof(x) 	* 8	;
    printf("decimal : %u\n", x);     
    printf("hex : ");         
    for (i = 0; i < SIZE; i=i+4){         
   		int A = ((x>>(SIZE-i-4)&0xf)+48);
   		int B = A & 0xf;
   		int C = B + 48 + (B>9)*7;
    	if(((A>9)*7)+48+A == 48){
    		printf("%c",A);	
    }   	
   		else{
   			printf("%c",C);
   		}		
   }
	printf("\n");
   	

    printf("%c",k);
    
}
void print_oct(unsigned x) {
    int i,j,k;
    const int SIZE = (sizeof(x) * 8) 	;
    printf("decimal : %u\n", x);     
    printf("oct : ");     
    for(i = 0; i<SIZE; i=i+3){
    	printf("%c",(x>>(SIZE-i-2)&7)+48);
    }
    
    printf("\n"); 
} 
int main() {      
	unsigned x = 14;
	print_oct(x);
	print_hex(x);     
	return 0;
}




 