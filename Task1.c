#include <stdio.h>

int main(){
    int arrayOne[4] = {1,2,3,4};
    int arrayTwo[4] = {3,4,5,6};
    int n1 = sizeof(arrayOne)/sizeof(arrayOne[0]);
    int n2 = sizeof(arrayTwo)/sizeof(arrayTwo[0]);

    int unionSet[n1+n2];
    int i , j , k;
    int newElement = 0;
    int arrTwoCom;

    for(i = 0 ; i < n1 ; i++){
        unionSet[i] = arrayOne[i];
    }
    for(i = 0 ; i < n2 ; i++){
    	arrTwoCom = 1 ;
        for(j = 0 ; j < n1 ; j++){
            if(unionSet[j] == arrayTwo[i]){
                arrTwoCom = 0;
                break;
            }
        }

        if(arrTwoCom){
		unionSet[n1+newElement] = arrayTwo[i];
        newElement++;
		}
    }
    for(i = 0 ; i < n1 + newElement ; i++){
        printf("%d\t",unionSet[i]);
    }
}
