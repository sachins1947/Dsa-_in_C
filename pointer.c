#include<stdio.h>

  void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a= *b;
    *b= temp;
  //  printf("a = %d b = %d",a*,b*);
  }
void main(){
   int c =4, d =5;
   swap(&c,&d);
   printf("c= %d d = %d\n",c,d);
}
