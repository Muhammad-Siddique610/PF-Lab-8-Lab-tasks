#include <stdio.h>

int main(){
    int days = 7;
    int shifts = 3;
    float temp[days][shifts];
    int i, j;

    printf("Enter Temperatures In Sequence By Day and shifts \n");
    for(i = 0 ; i < days ; i++){
        for(j = 0 ; j < shifts ; j++){
            scanf("%f",&temp[i][j]);
        }
        printf("\n");
    }
    printf("\nTemperature Table:\n");
	for(i = 0; i < days; i++){
    	for(j = 0; j < shifts; j++){
        	printf("%.2f\t", temp[i][j]);
    	}
    	printf("\n");
	}

    float avgTemp[days];
    float sum = 0;
    for(i = 0 ; i < days ;i++){
        for(j = 0 ; j < shifts ; j++){
            sum += temp[i][j];
        }
        avgTemp[i] = sum/shifts;
        sum = 0;
    }
    for(i = 0 ; i < days ; i++){
        printf("The Average Temperature On Day %d Was %0.2f\n", i+1, avgTemp[i]);
    }
}
