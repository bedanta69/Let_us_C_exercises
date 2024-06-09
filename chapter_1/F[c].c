/*Paper of size A0 has dimentions 1189 mm x 841 mm . Each subsiquent size A(n) is defined as 
A(n-1) cut in half, parallel to its shorter sides thus paper of size A1 would have dimentions 
841 mm x 594 mm. Write a program to calculate and print paper sizes A0, A1, A2 ...A8.*/


#include<stdio.h>

int main(){
	int c= 0 ;
	int d = 1189 ;
	int e = 841 ;

	


	while(c<9){
            if(d>e){
	       printf("The dimentions of paper of size A%d is : %d mm x %d mm\n", c,d,e);
               d/=2;
	    
	    }else{
               printf("The dimentions of paper of size A%d is : %d mm x %d mm\n",c,e,d);
	       e/=2;
	    }
	    c++;

	}   

	   

	return 0;
}

