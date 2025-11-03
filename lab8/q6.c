#include <stdio.h>
#include <math.h>

int main() {
    double coords[4][3]; 


    for (int i = 0; i < 4; i++) {
        printf("Enter coordinates (x y z) for location %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &coords[i][j]);
        }
    }

    printf("\nPairwise Distances:\n");
    printf("\n");


    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            double dx = coords[j][0] - coords[i][0];
            double dy = coords[j][1] - coords[i][1];
            double dz = coords[j][2] - coords[i][2];
            double distance = sqrt(dx * dx + dy * dy + dz * dz);
            printf("Distance between Location %d and Location %d: %.2lf\n", i + 1, j + 1, distance);
        }
    }

    return 0;
}