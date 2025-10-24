#include <stdio.h>

int main(){
    int n1 = 4;
    int n2 = 4;
    int arrayOne[n1];
    int arrayTwo[n2];
    int i , j;
    int common = 0;

    printf("Enter The Number Of First Set: ");
    scanf("%d",&n1);
    printf("Enter The Elements Of Set 1 \n");
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
                common++;
                break;
            }
        }
    }
    printf("There are %d common elements\n",common);
}