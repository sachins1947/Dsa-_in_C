#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define size 50
int top=-1;
int s[size];
char pos[size];
     void  pushstack(int  temp){
        s[++top] = (int)(pos[temp]-48);
    }
    void calculatepos(char i){
        int ans;
        int a,b;
        a = s[top--];
        b= s[top--];
        switch (i)
        {
        case '+' : ans = b+a;
        break;
        case '-': ans = b-a;
       break;
            case '*' : ans = b*a;
          break;
           case '/': ans =b/a;
       break;
        default:
         ans =0;
         break;
        }
    
    top++;
    s[top] = ans;}
void main(){
    printf("Enter the posfix expression");
    scanf("%s",pos);
    for(int i=0;i<strlen(pos);i++){
        if(pos[i]>='0' && pos[i]<='9'){
            pushstack(i);
        }
        if(pos[i]=='*' || pos[i]=='/' || pos[i]=='+' || pos[i]=='-'){
              calculatepos(pos[i]);
        }
    }
    printf("the Resutlt : %d",s[top]);}
    
