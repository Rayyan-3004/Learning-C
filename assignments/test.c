#include <stdio.h>

int main() {
    int c1 = 7, c2 = 7, c3 = 10, c4 = 10, c5 = 7;
    int count1, count2;
    int three_found = 0, two_found = 0;

    // --- check c1 ---
    count1 = 1;
    if (c1 == c2) count1++;
    if (c1 == c3) count1++;
    if (c1 == c4) count1++;
    if (c1 == c5) count1++;
    if (count1 == 3) three_found = 1;
    if (count1 == 2) two_found = 1;

    // --- check c2 ---
    count2 = 1;
    if (c2 == c3) count2++;
    if (c2 == c4) count2++;
    if (c2 == c5) count2++;
    if (count2 == 3) three_found = 1;
    if (count2 == 2) two_found = 1;

    // --- check c3 ---
    count2 = 1;
    if (c3 == c4) count2++;
    if (c3 == c5) count2++;
    if (count2 == 3) three_found = 1;
    if (count2 == 2) two_found = 1;

    // --- check c4 ---
    count2 = 1;
    if (c4 == c5) count2++;
    if (count2 == 3) three_found = 1;
    if (count2 == 2) two_found = 1;

    if (three_found && two_found)
        printf("Full house (3 of a kind + 2 of a kind)!\n");
    else
        printf("Not a full house.\n");

    return 0;
}