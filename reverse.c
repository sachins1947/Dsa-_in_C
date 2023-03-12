#include<stdio.h>
 void reverse(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b= temp;
 }
void main(){
     int a = 4;
     int b= 5 ;
     reverse(&a,&b);
     printf("A %d \n",a);
     printf("B %d \n",b);
}