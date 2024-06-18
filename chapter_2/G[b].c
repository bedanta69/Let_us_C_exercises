/*Write a program to receive Cartesian co-ordinates(x,y)
  of a point and convert them into polar co-ordinates  */

#include<stdio.h>
#include<math.h>
int main(){
	float x,y ;
	printf("Enter the value x co-ordinate:");
	scanf("%f",&x);
	printf("Enter the value of y co-ordinate:");
	scanf("%f", &y);
	float r = sqrt(x*x + y*y);
	float theta = atan2(y,x);
	theta = theta*180/3.14;
	printf("The polar co-ordinates are: (%f,%f)\n", r, theta);
	return 0;
}
