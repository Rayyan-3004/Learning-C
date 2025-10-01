#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char choice;
    char subnet[32];
    char ip[32];
    char cmd[64];
    int result;
    int aliveCount = 0;

    printf("\033[1;32m\n _____ _____   _   _ _____ _______        ______  ____  _  __\n| ____|__  /  | \\ | | ____|_   _\\ \\      / / __ \\|  _ \\| |/ /\n|  _|   / /   |  \\| |  _|   | |  \\ \\ /\\ / / |  | | |_) | ' / \n| |___ / /_   | . ` | |___  | |   \\ V  V /| |  | |  _ <|  <  \n|_____/____|  |_|\\_|_____|  |_|    \\_/\\_/  \\____/|_| \\_\\_|\\_\\ \n                                                               \n ____   ____    _    _   _ _   _ _____ ____  \n/ ___| / ___|  / \\  | \\ | | \\ | | ____|  _ \\ \n\\___ \\| |     / _ \\ |  \\| |  \\| |  _| | |_) |\n ___) | |___ / ___ \\| |\\  | |\\  | |___|  _ < \n|____/ \\____/_/   \\_\\_| \\_|_| \\_|_____|_| \\_\\\n\033[0m\n");


    // Ask if user wants to run ipconfig
    printf("Please press (Y) to display your default gateway and (N) to exit the program: ");
    scanf(" %c", &choice);

    if (choice == 'Y' || choice == 'y') {
        // Just run ipconfig with system()
        system("ipconfig | findstr /R \"Default Gateway.*[0-9]\"");
        printf("\nFrom the above, note your gateway (e.g., 192.168.0.1)\n");
    }
    else if(choice != 'Y' && choice != 'y'){
        printf("Exiting Program\n");
        return 0;
    }

    // Ask user to enter subnet prefix
    printf("Please enter the above number without the last digit (example: 192.168.0.): ");
    scanf("%31s", subnet);

    printf("\nScanning for all connected devices\n", subnet);

    // Loop through IP range
    for (int i = 1; i <= 255; i++) {
        sprintf(ip, "%s%d", subnet, i);          // build IP
        sprintf(cmd, "ping -n 1 -w 200 %s >nul", ip); // ping
        result = system(cmd);

        if (result == 0) {
            printf("%s is connected\n", ip);
            aliveCount++;
        }
    }

    printf("\nScan complete. %d device(s) are connected.\n", aliveCount);

}