#include <stdio.h>
#include <stdlib.h>



int input() {
  printf("input:");
  char test[32];
  char test2[12];
  scanf("%s", &test[32]);
  printf("you are %s ", test);
  printf("test for shoing off the newline");
  return 0;
  fgets(test2, 12, stdin);
}
int simpcalc(){
  double num2;
  double num1;
  printf("enter first num");
  scanf("%lf", &num1);
  printf("enter second num");
  scanf("%lf", &num2);
  printf("Answer = %lf", num1 + num2);
  return 0;
}
int rand(){
  char test[20]; /*20 characters can be added */
  printf("enter a random thing");
  scanf("%s", test);
  printf("you have entered %s", test);
  return 0;
}
int main() { return /*input(),simpcalc()*/ rand(); }
