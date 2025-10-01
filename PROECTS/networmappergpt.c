#include <stdio.h>
#include <stdlib.h>

int main() {
    char choice;
    char subnet[] = "192.168.100.";   // fixed subnet
    char ip[32];
    char cmd[64];
    int result;
    int aliveCount = 0;

    // Ask user if they want to run
    printf("Shall we run the program? (Y/N): ");
    scanf(" %c", &choice); // note the space before %c to skip whitespace

    char defaultgateway[] = system("ipconfig | findstr /R /C:\"Default Gateway\"");
    printf("%s", defaultgateway);


    if (choice != 'Y' && choice != 'y') {
        printf("Exiting program.\n");
        return 0;
    }

    printf("\nScanning %s1-254 ...\n\n", subnet);

    // Loop through all hosts in the subnet
    for (int i = 1; i <= 254; i++) {
        // Build IP address string
        sprintf(ip, "%s%d", subnet, i);

        // Build ping command
        sprintf(cmd, "ping -n 1 -w 200 %s >nul", ip);

        // Run ping and check result
        result = system(cmd);

        if (result == 0) {
            printf("%s is alive\n", ip);
            aliveCount++;
        }
    }

    printf("\nScan complete. %d host(s) responded.\n", aliveCount);

    return 0;
}