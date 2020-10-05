#include "euler.h"
#include <stdio.h>

int main(){
    int ans_one = multiples();
    printf("sum of multiples of 3 and 5: %d \n",ans_one);
    
    int ans_two = smallest_divisible();
    printf("smallest number divisible by nums 1-20: %d \n", ans_two);
    
    return 0;
}