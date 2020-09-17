//Author: Dominic Savaglio djs7129@psu.edu
//Collaborator: Jack Scallan jgs5472@psu.edu
//Collaborator: Adam Greenberg aqg5910@psu.edu
//Collaborator: Tuan Nguyen tmn5319@psu.edu
//Section: 10R
//Breakout: 3
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
int sum_n(int n){
  if (n < 1){
    return 0;
  } else {
    return n + sum_n(n-1);
  }
}
char print_n(char *s, int n){
  if (n <= 0){
    return 0;
  } else {
    printf("%s\n", s);
    print_n(s, n-1);
    return 0;
  }
}
int main(void){
  char *sum = readline("Enter an int: ");
  int add = atof(sum);
  sum_n(add);
  printf("sum is %d.\n", sum_n(add));
  char *print = readline("Enter a string: ");
  print_n(print, add);
}
