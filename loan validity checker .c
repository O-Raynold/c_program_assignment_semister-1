/*
Name: Raynold 
RegNo:PA106/G/28820/25
Description:
*/

#include<stdio.h>
//main fuction
int main(){
    //variable declaration
    int age;
    float salary;

    //Getting the age and salary of the user
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your salary in (Ksh): ");
    scanf("%f", &salary);

    if(age>=21 && salary>21000){
        printf("Congratulations you qualify for a loan.\n");
    }
    else{
        printf("Unfortunately ,we are unable to offer you a loan at this time.\n");
    }
    return 0;
}