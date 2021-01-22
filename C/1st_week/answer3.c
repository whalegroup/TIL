#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){

    while(true) {
        string menu;
        string day = get_string ("요일을 입력하세요:");
        int run = 0;

        if(strcmp(day,"월요일") == 0){
            menu ="청국장";
        }else if(strcmp(day,"화요일") == 0){
             menu ="비빔밥"; 
        }else if(strcmp(day,"수요일") == 0){
            menu ="된장찌개";
        }else if(strcmp(day,"목요일") == 0){
            menu ="칼국수";
        }else if(strcmp(day,"금요일") == 0){
            menu ="냉면";
        }else if(strcmp(day,"수요일") == 0){
            menu ="된장찌개";
        }else if(strcmp(day,"토요일") == 0){
            menu ="소불고기";
        }else if(strcmp(day,"일요일") == 0){
            menu ="오삼불고기";
        }else{  
            printf("다시 입력해주세요\n");
            run =1;
        }
        
        if(run==0){
            printf("%s의 메뉴는 %s입니다.\n",day,menu);
        }
    }
}


