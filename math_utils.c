#include"math_utils.h"
int factorial(int n){
    if(n<0){
        printf("Error: Factorial is not defined for negative numbers.\n");
        return -1; // Return -1 to indicate an error   
    }
    int object=1;
    for(int i=1;i<=n;i++){
        object*=i;
    }
    return object;
}