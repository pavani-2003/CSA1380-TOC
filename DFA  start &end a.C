#include <stdio.h>
int transition(int state, char input) {
    if (state == 0 && input == 'a') return 1;
    if (state == 1 && input == 'a') return 1;
    return 0; 
}
int main() {
    int currentState = 0;
    char inputString[100];

    printf("Enter the input string: ");
    scanf("%s", inputString);
    for (int i = 0; inputString[i] != '\0'; i++) 
	{
        currentState = transition(currentState, inputString[i]);
    }
    if (currentState == 1) {
        printf("Accepted\n");
    }
	 else 
	{
        printf("Rejected\n");
    }
    return 0;
}