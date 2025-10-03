// caclulating the volume and surface area of a cylinder
/*
Name: Raynold Ongaki
Reg no.:PA106/G/28820/25
Discription: establishing the surface area and volume of a cylinder
*/
#include<stdio.h>
  int main(){
	  
// value decralation
 float radius,height,volume,surfacearea;
 float pi=3.142;
 
 //prompt user to  enter height
 printf("Enter height:");
 scanf("%f" ,&height);
 
 //prompt user to enter radius
 printf("Enter radius");
 scanf("%f" ,&radius);
 
 
 // compute volume
volume=pi*radius*radius*height;
   
   //display volume
  printf(" \nthe volume =%.2f" ,volume) ;
  
  
  //compute surface area
  surfacearea=( 2*pi*radius*radius)+(2*pi*radius*height);
  
  //display  area
   printf(" \nsufacearea=%.2f" ,surfacearea );
	  
	  
	  
	  return 0;
  }
