/*The length and bredth of a rectangle , raidus of a cirle is input through the keyboard*/
/*write a program to calculate the area and perimeter of the rectangle and area and circumference of the circle*/

#include<stdio.h>

int main(){
       /*rectangle section*/
	float length;
	printf("\nEnter the length of the rectangle: ");
	scanf("%f", &length);
	float bredth;
	printf("\nEnter the bredth of the rectangle: ");
	scanf("%f", &bredth);

       /*Circle section*/
       float radius;
       printf("\nEnter the radius of the circle:"); 
       scanf("%f", &radius); 

       /*Calculation section*/

       float perimeter = 2*length + 2*bredth;
       float area_rec = length * bredth;

       float circumference= 2*3.14* radius;
       float area_c= 3.14*radius*radius;

       /*print statement*/
       printf("\nPerimeter of the rectangle is :%f unit\n", perimeter);
       printf("Area of the rectangle is :%f sq unit\n", area_rec);
       printf("Circumference of the circle is:%f unit\n ", circumference);
       printf("Area of the circle is:%f sq unit\n", area_c);




       return 0;
}
