#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1;

    while (i<20){
    int result = system("ping -n 1 -w 1000 192.168.100.i >nul");

    if (result == 0) {
        printf("192.168.100.%d is alive\n", i);
    } else {
        printf("192.168.100.%d did not respond\n", i);
    }
    i++;}
    
    
    return 0;
}