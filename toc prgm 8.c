#include <stdio.h>
#include <stdbool.h>


bool transition(int state, char input) {
    switch(state) {
        case 0:
            return input == 'b' ? true : false;
        case 1:
            return input == 'a' ? true : false;
        default:
            return false;
    }
}
bool simulateNFA(char *input) {
    int currentState = 0; 
    int i = 0;
    
    while(input[i] != '\0') {
        if (transition(currentState, input[i])) {
            currentState++;
        }
        i++;
    }
    
    return currentState == 2; 
}
int main() {
    char input[100];
    
    printf("Enter a string: ");
    scanf("%s", input);
    
    if (simulateNFA(input)) {
        printf("String accepted!\n");
    } else {
        printf("String rejected!\n");
    }
    
    return 0;
}