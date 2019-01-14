/* Area and Perimeter of circle program using pass by reference method.
 * Written by: Shreevathsa
 * Date: 14/01/2019
 */
#include<stdio.h>
void areaPeri(int , float *, float *);

int main(){
	int r;
	float area, periM;

	printf("Enter the radius of circle: ");
	scanf("%d", &r);
	areaPeri(r ,&area, &periM);
	printf("The area of circle      : %f\n", area);
	printf("The perimeter of circle : %f\n", periM);
	return 0;
}

void areaPeri(int r, float *area, float *periM){
	*area  = 3.14 * r * r;
	*periM = 2 * 3.14 * r;
}
