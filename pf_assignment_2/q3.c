#include <stdio.h>

void update_sector(int grid[5][5]){
    int row, col, choice, flag, bit;
    printf("enter row and col: ");
    scanf("%d %d", &row, &col);
    printf("1 power  2 overload  3 maintenance\n");
    printf("enter choice: ");
    scanf("%d", &choice);
    printf("1 to set or 0 to clear: ");
    scanf("%d", &flag);

    bit = choice - 1;

    if(flag == 1){
        grid[row][col] = grid[row][col] | (1 << bit);
    } else {
        grid[row][col] = grid[row][col] & ~(1 << bit);
    }

    printf("status updated\n");
}

void query_sector(int grid[5][5]){
    int row, col;
    printf("enter row and col: ");
    scanf("%d %d", &row, &col);

    int val = grid[row][col];

    printf("\nsector (%d,%d):\n", row, col);
    printf("power: %s\n", (val & 1) ? "on" : "off");
    printf("overload: %s\n", (val & 2) ? "y" : "n");
    printf("maintenance: %s\n", (val & 4) ? "y" : "n");
}

void run_diagnostic(int grid[5][5]){
    int overload = 0, maint = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(grid[i][j] & 2)
                overload++;
            if(grid[i][j] & 4)
                maint++;
        }
    }

    printf("\ntotal overload: %d\n", overload);
    printf("total maintenance: %d\n", maint);
}

int main(){
    int grid[5][5] = {0};
    int op;

    do{
        printf("\n1 update sector\n2 query sector\n3 run diagnostic\n4 exit\n");
        printf("enter option: ");
        scanf("%d", &op);

        switch(op){
            case 1:
                update_sector(grid);
                break;
            case 2:
                query_sector(grid);
                break;
            case 3:
                run_diagnostic(grid);
                break;
            case 4:
                printf("exiting...\n");
                break;
            default:
                printf("invalid option\n");
        }

    }while(op != 4);

    return 0;
}
