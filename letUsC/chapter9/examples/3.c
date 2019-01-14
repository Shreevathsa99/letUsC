/* Swapping two variable's values by pass by reference
 * Written by: Shreevathsa
 * Date: 14/01/2019.
 */

#include<stdio.h>
void swapv(int *, int *);

int main(){
	int a = 10, b = 20;
	swapv(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}

void swapv(int *x, int *y){
	int t;
	 t = *x;
	*x = *y;
	*y =  t;

}
