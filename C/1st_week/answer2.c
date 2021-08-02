#include <cs50.h>
#include <stdio.h>

void calculate(void);

int main(void){
    calculate();
}

void calculate(void){
    float rate=1.012;
    int total = get_int("목표금액 : ");
    printf("환급액은 %.0f 원입니다.\n", total*rate);
    printf("순이익은 %.0f 원입니다.\n", total*rate-total);
}


