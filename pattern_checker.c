#include<string.h>
//use strlen() to get the Length of a string

//palindrome
int is_palindrome(char str[]){
    //check if str[0] == str[strlen(str)-1], str[1] == str[strlen(str)-2]...
    int len = strlen(str);
    for (int i=0; i < len/2; i++) {
        if (str[i] != str[len-i-1]) {
            return 0; //false
        }
    }
    return 1; //true
}

//arithmetic
int is_arithmetic(char str[]) {
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] != str[i - 1] + 1) return 0;
    }
    return strlen(str) > 0;
}

//reverse arith
int is_reverse_arithmetic(char str[]) {
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] != str[i - 1] - 1) return 0;
    }
    return strlen(str) > 0;
}


//balanced tri
int is_balanced_tripartite(char str[]) {
    int len = strlen(str);
    return len % 3 == 0 && strncmp(str, str + len / 3, len / 3) == 0 &&
           strncmp(str, str + 2 * (len / 3), len / 3) == 0;
}


//balanced bipart
int is_balanced_bipartite(char str[]) {
    int len = strlen(str);
    return len % 2 == 0 && strncmp(str, str + len / 2, len / 2) == 0;
}


//singleton
int is_singleton(char str[]){ //str[0] == str[1] == str[2]...
    return 0;
}