#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n);

int main(void){
  char*n = readline("Enter an int: ");
  int c = atof(n);
  int sum = digit_sum(c);
  printf("sum of digits of %d is %d.\n",c,sum);
}


int digit_sum(int n){
  if (n>0){
    return (n%10 + digit_sum(n/10));
   }
  else{
    return (n);
   }
 } 