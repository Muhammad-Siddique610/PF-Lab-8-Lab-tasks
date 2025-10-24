#include <stdio.h>

int main(){
	char a = 'A';
	int n = 4;
	int i,j;
	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j <= i ; j++){
			printf("%c ",a);
			a++;
		}
		printf("\n");
	}
}
