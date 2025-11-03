#include <stdio.h>
#include <stdlib.h>

int main(){
	int array[3][4][4];
	int empty = 0;
	int patient = 0;
	int doctor = 0;
	int equipment = 0;
	
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j <4; j++){
			for (int k = 0; k <4; k++){
				printf("Enter 0, 1, 2, 3 (empty, patient, doctor, equipment) what is present on floor %d, room in row %d, column %d\n", i+1, j+1, k+1);
				scanf("%d", &array[i][j][k]);

                if((array[i][j][k]<0) || (array[i][j][k] >3)){
                    printf("\nplease enter a proper number in range 0-3.\n");
                    k-=1;
                }
				
			}
		}
}

	for (int i = 0; i < 3; i++){
		for (int j = 0; j <4; j++){
			for (int k = 0; k <4; k++){
				switch (array[i][j][k]){
					case 0:
						empty += 1;					
						break;
					case 1:
						patient+=1;
						break;
					case 2:
						doctor +=1;
						break;
					case 3:
						equipment +=1;
						break;
				}
			}
		}
	}
	printf("\nEmpty Rooms: %d\nRoom with Patients: %d\nRoom with doctors: %d\nRoom with equipment: %d\n", empty, patient, doctor, equipment);
		
}