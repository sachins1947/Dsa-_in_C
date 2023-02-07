#include<stdio.h>
    void TowerofHanoi(int n,char src,char helper,char des){
     if(n==1){
     printf("Transfer Disk %d form %c to %c des\n",n,src,des);
     return;}
    TowerofHanoi(n-1,src,des,helper);
      printf("Transfer Disk %d form %c to  %c des\n",n,src,des);
      TowerofHanoi(n-1,helper,src,des);
 }
  void main(){
       TowerofHanoi(3,'S','h','d');
  }