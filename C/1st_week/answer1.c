#include <cs50.h>
#include <stdio.h>

int main(void){
    int order;
    int stock=5;  
    float price=10000;
    float tax=1.1;

    printf("주문건수: ");
    scanf("%i", &order);
    printf("----------------------\n");
    printf("기존 재고량: %i\n", stock);
    printf("남은 재고량: %i\n", (stock-order));
    printf("매출액(부가세포함): %.0f원\n", price*tax*order);
}


