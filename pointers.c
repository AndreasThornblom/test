#include <stdio.h>

void swap(int *a, int *b );
void array_add(int array[]);
void array_add2(int *a);
int main (void){
    // sending regular pointers 
    int x =5; 
    int y = 10;
    printf("X:%d y: %d \n", x,y);
    swap(&x,&y); 
    printf("New value x:%d  New value y: %d\n", x,y);

    

   //arrray

int myarray[5] = {1,2,3,4,5};
/*
array_add(myarray);
printf("myarray[0]: %d\n",myarray[0]);
printf("myarray: %p\n, ",myarray);
*/

// nya test
array_add2(myarray);
printf("myarray[0]: %d\n",myarray[0]);
printf("myarray: %p\n, ", myarray);

// int *a och myarray [] är ekvivalent because a pointer decays to a pointer when it pass to an argument
    return 0;
}

void swap (int *a, int *b){
int temp;
temp =*a; 
*a =*b;
*b = temp;
}
void array_add(int array[]){
array [0] +=array[0]; 
}
void array_add2(int *a){
  a[0] +=a[0]; 
  printf("a: %p\n, ", a);
}