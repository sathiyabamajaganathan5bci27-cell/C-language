#include <stdio.h>

// Typedef use panni function signature-a simplified panrom
typedef void (*Operation)();

void start() { printf("Engine Started...\n"); }
void stop() { printf("Engine Stopped!\n"); }
void fuel() { printf("Checking Fuel...\n"); }

int main() {
    // Array of function pointers (Jump Table)
    Operation commands[] = {start, stop, fuel};
    
    int choice;
    printf("Enter Command (0: Start, 1: Stop, 2: Fuel): ");
    scanf("%d", &choice);

    if(choice >= 0 && choice <= 2) {
        commands[choice](); // No Switch, No If-else!
    } else {
        printf("Invalid Command\n");
    }
    
    return 0;
}
