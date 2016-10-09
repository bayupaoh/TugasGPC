#include <stdio.h>

int main(void) {
	// your code goes here
	int sisi;
	printf("Masukan jumlah sisi persegi : ");
	scanf("%d", &sisi);
	
	for(int i=0;i<sisi;i++){
		printf("*");
		for(int j=0;j<sisi;j++){
			if(i==0){
				printf("*");				
			}else if(i==sisi-1){
				printf("*");				
			}else{
				printf(" ");
			}
		}
		printf("*\n");	
	}
	return 0;
}

