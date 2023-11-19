#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool binary_search_recursion (const int *a, int low, int high, int target);
bool binary_search(const int *a, int n, int v);
bool linear_search(const int *a, int n, int v);
void quicksort(int *a, int n);

bool binary_search(const int *a, int n, int v){
    int low = 0;
    return binary_search_recursion(a,low,n,v);
}
bool binary_search_recursion (const int *a, int low, int high, int target){
        return 	(high <= low)                  ?       false:
                a[(low + high) / 2] == target  ?       true:
			    a[(low + high) / 2] > target   ?  	   binary_search_recursion(a, low, high-1, target):
			    binary_search_recursion(a, low+1, high, target );
       
}
bool linear_search(const int *a, int n, int v){
	for(int i = 0; i < n; i++) {
		if(a[i] == v) {
			return true; 
		}
	}
	return false;
}
void quicksort(int *a, int n){
    int low = 0;    

}
void quicksort_recursion(int *a, int low, int high){

}


int main (void){
int array[]= {1,2,3,4,5,6,7,8,9,10};
int array2[]= {3,6,1,4,7,8,5,9,2};
int a;
while (1){
printf("enter a number\n");
scanf("%d",  &a);
int answer = binary_search(array,10, a);

printf(" LINEAR_SEARCH: %d\n",linear_search(array2,9,a));

if(answer==0){
    printf("False boolean is %d\n",answer);
    }
else
    printf("True  boolean is %d\n",answer);
 
    }
    return 0; 
}

/// test kod 