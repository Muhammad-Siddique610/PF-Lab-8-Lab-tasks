#include <stdio.h>

int main(){
    int students = 5;
    int subjects = 3;
    int marks[5][3] = {
        {80,75,90} , {60,70,65} , {78,82,88} , {92,85,89} ,{55, 60 , 58}
    };
    int i , j;
    float totalMarks[students];
    float avgMarks[students];

    for (i = 0; i < students; i++){
        for(j = 0 ; j < subjects ; j++){
            totalMarks[i] += marks[i][j];
        }
        avgMarks[i] = totalMarks[i]/subjects;
    }
    for( i = 0 ; i < students ; i++){
        printf("The Total And Average Marks Of Student %d Are %0.1f And %0.3f\n",i+1, totalMarks[i], avgMarks[i]);
    }
}
