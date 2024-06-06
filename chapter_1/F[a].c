/*Temperature of a city in Fahrenheight degrees is input through the keyboad*/
/*Write a program to convert this temperature into centigrade degrees*/

#include<stdio.h>
int main(){
	printf("\n\nEnter the Fahrenheight value:\n");
	float F;
	scanf("%f", &F);
	float c;
	float r = F - 32 ;
	float e = 5.0 / 9.0 ;
	c=r * e;
	printf("The Centigrade value is = %f degree C\n\n", c);




	


	return 0;
}

