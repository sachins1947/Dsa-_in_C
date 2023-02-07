#include<stdio.h>
#include<stdlib.h>
struct NODE
{
int info;
struct NODE *link;
};
void Traverse(struct NODE *ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->info);
        ptr = ptr->link;
    }
}
void Traverse2(struct NODE *ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->info);
        ptr = ptr->link;
    }
}
 struct NODE *linkreverse(struct NODE *first){
    struct NODE *cur,*temp;
    temp =NULL;
    while(first!=NULL){
        cur = first;
        first = first->link;
        cur->link = temp;
     temp = cur;      
    }
    return temp;
 }
struct NODE *concatenate(struct NODE *first,struct NODE *third){
     struct NODE *cur;
     if(first= NULL)
     return third;
    if(third= NULL)
    return first;
    cur = first;
    while(cur->link!=NULL){
       cur = cur->link;
    }
    cur->link = third;
    return first;
}
struct NODE *deletewithvalue(struct NODE *first,int item){
    struct NODE *temp,*cur,*per;
    if(item==first->info){
         temp = first;
        first = first->link;
        free(temp);
        return first;
    }
    per = NULL;
      cur = first;
    while (cur!=NULL && item!=cur->info)
    {
         per = cur;
         cur = cur->link;
    }
    if(cur==NULL)
    printf("Element is not in the list");
    per->link = cur->link;
    free(cur);
    return first;
}
void main(){
   struct   NODE  *first, *second,*third,*four,*five;
  first = (struct NODE*)malloc(sizeof(struct NODE));
second = (struct NODE*)malloc(sizeof(struct NODE));
 third = (struct NODE* )malloc(sizeof(struct NODE));
 four = (struct NODE* )malloc(sizeof(struct NODE));
  five  = (struct NODE* )malloc(sizeof(struct NODE));

first->info = 10;
first->link = second;
second->info = 20;
second->link = third;
third->info=  30;
third->link = NULL;
/*third->info = 30;
third->link = four;
four->info = 40;
four->link = five;
five->info = 50;
five->link = NULL;*/
  printf("first List\n");
  Traverse(first);
 // printf("Second List\n");
 // Traverse2(third);

 // first = concatenate(first,third);
 first =deletewithvalue(first,30);
  printf("After Deletion\n");
      Traverse(first);

}