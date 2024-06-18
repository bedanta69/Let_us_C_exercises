/*If a five digit number is input through the keyboard, write a program
to calculate the sum of its digits. */


#include<stdio.h>
int main(){
    int a;
    int sum = 0;
    printf("Enter the number:");
    scanf("%d", &a);
    int count = 1;
    do{
	    sum+= a%10;
	    a=a/10;
	    count++;
      
    }while(count<=5);
    printf("The sum of the digits of the number is:%d", sum);
    
    return 0;
}
