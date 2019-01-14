/* Prints Armstrong numbers.
 * Written by: Shreevathsa
 * Date: 14/01/2019.
 */
#include<stdio.h>
int main(){
	int f;
	int s;
	int t;
	int count = 0;

	//printf("Enter the range: ");
	//scanf("%d", &range);
	
	for(int i = 1; i <= 500; i++){
		t = i % 10;
		s = (i % 100) / 10;
		f = i / 100;
		if(i == (f*f*f)+(s*s*s)+(t*t*t)){
			if(count < 3){	
				printf("%d\t", i);
				count++;
			}
			else{
				printf("\n");
				count = 0;
			}
			
		}
		}

	printf("\n");
	return 0;
}
