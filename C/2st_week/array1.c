#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);

int main(void){
    int N = get_int("총 과목수: ");
    int scores[N];

    for(int i=0;i<N;i++){
        scores[i] = get_int("점수를 입력하세요: ");
    } 
    printf("Average: %.2f\n", average(N,scores));
}

float average(int length, int array[]) {
    int sum = 0;
    for (int i=0; i<length;i++) {
        sum += array[i];
    }
    return (float)sum / (float)length;
}

