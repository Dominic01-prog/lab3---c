//Author: Dominic Savaglio djs7129@psu.edu
//Collaborator: Jack Scallan jgs5472@psu.edu
//Collaborator: Adam Greenberg aqg5910@psu.edu
//Collaborator: Tuan Nguyen tmn5319@psu.edu
//Section: 10R
//Breakout: 3
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
int main(void) {
  char *sum = readline("Enter an int: ");
  int sumInt = atof(sum);
  return 0;
}
int sum_n(int n){
  if (n <= 0){
    return 0;
  } else {
    return (n + sum_n(n-1));
  }
}
void print_n(const char*s, int n) {
  if (n <= 0){
    return;
  } else {
    printf("%s\n", s);
    print_n(s, n-1);
  }
}