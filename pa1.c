#include<pa1.h>

int main(void){
  char line[MAX_LENGTH];
  while(fgets(line, MAX_LENGTH, stdin)){//gets a new single line from stdin..
    int len = strlen(line) - 1;//excluding the new line at the end
    line[len] = '0';//dropping the new line

    //Singleton pattern
    if(is_singleton(line)) {
      printf("singleton\n");
      //check for other patterns...
    }

    //Arithmetic pattern
    if (is_arithmetic(line)) {
      printf("arithmetic\n");
    }

    //reverse arithmetic pattern
    if (is_reverse_arithmetic(line)) {
      printf("reverse arithmetic\n");
    }

    //balanced tripartite pattern
    if (is_balanced_tripartite(line)) {
      printf("balanced tripartite\n");
    }

    //balanced bipartite pattern
    if (is_balanced_bipartite(line)) {
      printf("balanced bipartite\n");
    }

    //palindrome pattern
    if(is_palindrome(line)){
      printf("palindrome\n");
    }
    printf("\n");
  }
}