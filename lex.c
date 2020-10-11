#include <stdio.h>
#include <stdbool.h>


void perm(int a){


	int array[a];
	//to hold original a
	int b = a;
	
	//creates array using a
	for(int i = (a-1); i > -1; i--){
		array[i] = a;
	        a--;	
	}

	//prints array
	printf("The original permutation is: ");
	for (int i = 0; i < b ; i++){
		printf("%d", array[i]);
		if( i == (b-1)){
			printf("\n"); 
		}
	}

	bool consec = true;
	
	while(consec == true){
	
		for(int j  = (b-1); j  > 0; j--){
			if(array[j] > array[j-1]){
				int c = array[j-1];
				array[j-1] = array[j];
				array[j] = c; 

				for(int i = 0; i < b; i ++){
					printf("%d", array[i]);
					if(i == (b-1)){
						printf(", ");
					}
				}
				
			}
			else{
				consec = false;
			}
			
		}
	
	}
	
}



int main(){
	
	perm(3);
	
	return 0;
}
