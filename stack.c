#include <stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;


int isfull(){
   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}


int push(int data){
   if(!isfull()) {
      top = top + 1;
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

int main(){
   int i;
   push(44);
   push(10);
   push(62);
   push(123);
   push(15);
   printf("Stack Elements: \n");
   
   for(i = 0; i < 8; i++) {
      printf("%d ", stack[i]);
   }
   return 0;
}