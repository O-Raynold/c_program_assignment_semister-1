//Loan approval check
/*
Name:Raynold Ongaki
Reg no.:PA106/G/28820/25
Discription: loan approval check
*/

#include<stdio.h>
int main(){
//variables declaration
  int age;
float income;
	
//prompt user to enter age;
    printf("enter your age:");
    scanf("%d" ,&age);
 
 //prompt user to enter income
    printf("enter your income:");
   scanf("%f" ,&income);
 
 if(age >= 21 && income>=21000){
 	 printf("Congradulations you qualify for a loan.");
 }
 else{
	 printf("Unfortunatley , we are unable to offer you a loan.");
 }
	
	
	return 0;
}