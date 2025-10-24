#include <stdio.h>

int main(){
    int n1 = 4;
    int n2 = 4;
    int arrayOne[n1];
    int arrayTwo[n2];
    int i , j;
    int interSet[n1+n2];
    int common = 0;
    int interIndex = 0;

    printf("Enter The Number Of Elements First Set: ");
    scanf("%d",&n1);
    printf("Enter The Number Of Elements Of Set 1 \n");
    for(i = 0 ; i < n1 ; i++){
        scanf("%d",&arrayOne[i]);
    }
    printf("\nEnter The Number Of Elements Of 2nd Set: ");
    scanf("%d",&n2);
    printf("Enter The Elements Of Set 2 \n");
    for(i = 0 ; i < n2 ; i++){
        scanf("%d",&arrayTwo[i]);
    }

    for(i = 0 ; i < n1 ; i++){
        for(j = 0 ; j < n2 ; j++){
            if(arrayOne[i] == arrayTwo[j]){
                common = 1;
                break;
            }
        }
        if(common){
            interSet[interIndex] = arrayOne[i];
            common = 0;
            interIndex++;
        }
    }
    printf("The InterSection Set Is Consisting Of ");
    for(i = 0 ; i < interIndex ; i++){
        printf("%d\t",interSet[i]);
    }
}
