/* Prints the all ASCII characters using loop statements
 * Written by: Shreevathsa
 * Date: 14/01/2019.
 */

#include<stdio.h>
int main(){
	
	int number;

	for(number = 0; number <= 255; number++){
		printf("%c,\t", number);
	}

	return 0;
}
