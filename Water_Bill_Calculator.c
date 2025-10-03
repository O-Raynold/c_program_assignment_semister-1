// WATER BILL CALCULATOR
/* 
Name: Raynold Ongaki 
Reg no. PA106/G/28820/25
Discription : wringting a program to caclulate charges on water consuption
*/ 

	#include <stdio.h>
	int main(){
		int units_consumed; 
		double water_bill;
		
		//promting user to enter number of water units consum
		printf("\n Please enter the number of  units consumed: ");
		scanf("%d", &units_consumed);
		
		//setting up instructions guidlines
		if(units_consumed<0){
			printf(" \n units connot be negative.\n");
		}
		 else if( units_consumed<=30){
	   	 water_bill  = units_consumed*20 ;
		 }
		else if( units_consumed<=60){
		 water_bill =units_consumed*25 ;
		}
		else if(units_consumed>60){
		 water_bill =units_consumed*30 ;
		}
	
		 	
		// dislplaying results of bill amount
		printf("\n ---calculation results---  \n");
		printf(" \n Total units consumed: %d" , units_consumed);
		printf(" \n Total water bill :%.2f KES" ,water_bill);
		
		return 0;

		}
