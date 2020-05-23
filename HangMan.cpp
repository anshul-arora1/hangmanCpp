#include <cstdio>
#include <iostream>
#include <cstdio>
#include <stdio.h>
/* Try to use all the concepts of C++ I have learned so far
Such as
- Structs
- Pointers
- Arrays
- Functions
- For Loops and While Loops
- Printf Statements and So on
- Passing Functions by References and Passing by Pointer
*/
using namespace std;

/*struct hangman{
    int turns;
    char word[];


};*/
//int guess(int);
int guess(int &turns){
    printf("Turns Remaining: %d", turns);
    printf("Enter a Letter: ");
    return 0;
}


int main(){
    char word[30];
    int turns = 10;
    char *wordPointer = word;
    printf("Enter Word: ");
    scanf("%s", wordPointer);
    int counter = 0;
    while (counter != 100){               // Creating White Space to hide Answer
        printf("\n");
        counter++;
    }
    bool guessed = false;
    while (turns != 0 || guessed == true){
        guess(turns);
        break;
    }
}
