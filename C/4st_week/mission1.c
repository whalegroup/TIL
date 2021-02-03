#include<stdio.h>
#include<string.h>

void Bub_Sort(int arr[]);
void camArray(int arr1[], int arr2[]);

int main(void) {
    int ana_num1[5]={1,2,3,4,5};
    int ana_num2[5]={5,4,3,2,1};
    int ana_num3[5]={1,4,2,5,8};
    int ana_num4[5]={2,5,4,3,1};
    int ana_num5[5]={1,1,1,3,2};
    int ana_num6[5]={2,1,1,3,1};

    Bub_Sort(ana_num1);
    Bub_Sort(ana_num2);
    Bub_Sort(ana_num3);
    Bub_Sort(ana_num4);
    Bub_Sort(ana_num5);
    Bub_Sort(ana_num6);

    camArray(ana_num1,ana_num2);
    camArray(ana_num3,ana_num4);
    camArray(ana_num5,ana_num6);
}

// 버블정렬
void Bub_Sort(int arr[]) {
    int temp;
    for (int i=0; i < 5; i++) {
        for (int j=0; j < 5 - i - 1; j++) {
          if (arr[j] > arr[j+1])  {//앞의 숫자가 뒤의 숫자보다 큰 경우
            temp = arr[j]; //임시변수에 뒤의 (큰) 숫자 임시 저장
            arr[j] = arr[j+1]; //자리 바꿈
            arr[j+1] = temp; //뒤 자리에 큰 숫자 대입
          }
        }
    }
}

// 애너그램 true/false체크
void camArray(int arr1[], int arr2[]) {
    for(int i=0; i<5;i++) {
        if(arr1[i] != arr2[i]) {
            printf("False\n");
            return;
        }
    }
    printf("True!\n");
}



