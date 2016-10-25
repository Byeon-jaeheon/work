#include <stdio.h>
#include <string.h>
int main(){
	char u1[10] = "Hanyang"; 
	char u2[10] = "Ansan";  
	char u3[10] = "ERICA";   
	printf("%d\n", any(u1,u2));  
	printf("%d\n", any(u2,u3)); 
	printf("%d\n", any(u3,u1)); 
	printf("%d\n", any(u2,u1)); 
	printf("%d\n", any(u3,u2)); 
	printf("%d\n", any(u1,u3));

}
int any(char a[], char b[]){
	size_t leng;
	int i,j,k;
	for(i = 0; i<strlen(a); i++){
		for (j = 0; j<strlen(b); j++){
			if(a[i]==b[j]){
				return i;
			}
		}
	}
	return -1;
}