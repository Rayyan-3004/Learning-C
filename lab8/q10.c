/*10. A space research lab processes 5 image frames (4×4 pixels each). Each pixel value ranges from
0–255. Input all pixel values, calculate:
? The average brightness per frame,
? Identify the brightest and dullest frames,
Then apply a threshold filter:
if pixel < 128 = 0
else = 255
Display filtered frames.*/

#include <stdio.h>
#include <stdlib.h>

void printfilteredarray(int filtered_array[5][4][4]){
	for (int i = 0; i<5; i++ ){
		for (int j = 0; j <4; j++){
			for (int k = 0; k <4; k++){
				printf("%d ", filtered_array[i][j][k]);
			}
			printf("\n");
		}
			printf("\n");
}
}

int main(){
	int array[5][4][4];
	int t_brightness = 0;
	int filtered_array[5][4][4];
	int filtered_max = 0;
	int filtered_min = 0;
	
	for (int i = 0; i<5; i++ ){
		for (int j = 0; j <4; j++){
			for (int k = 0; k <4; k++){
				printf("Enter value (0-255) for frame number %d \npixel: %d, %d\n", i+1, j+1, k+1);
				scanf("%d", &array[i][j][k]);
				
				if ((array[i][j][k] <0) || (array[i][j][k] >=256))
				{
					printf("\nEnter AGAIN you entered value out of range (0-255)\n");
					k-=1;
				} else{
				
				    if((array[i][j][k] >=0) && (array[i][j][k] <256)){
					    t_brightness +=  array[i][j][k];
				} 
				    if((array[i][j][k] >=0) && (array[i][j][k] <128)){
					    filtered_array[i][j][k] = 0;
					    filtered_max +=  1;
				} 			
				    if((array[i][j][k] >=128) && (array[i][j][k] <256)){
					filtered_array[i][j][k] = 255;
					filtered_min +=  1;
				}
            } 	
			}	
		}	
	}	
	int avg_b = t_brightness/(5*4*4);
	printf("\nYour average brightness is: %d", avg_b);
	printf("\nYour number of brightest pixels is: %d", filtered_max);
	printf("\nYour number of dullest pixels is: %d", filtered_min);
	
	int yesorno = 0;
	
	printf("\nDo you want the filtered array to be printed? 0 if no, 1 if yes.\n");
	scanf("%d", &yesorno);
	if (yesorno == 1){
		printfilteredarray(filtered_array);
	}
}

