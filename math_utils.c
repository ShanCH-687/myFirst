#include"math_utils.h"
int factorial(int n){
    int object=1;
    for(int i=1;i<=n;i++){
        object*=i;
    }
    return object;
}