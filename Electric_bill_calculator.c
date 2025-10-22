 //  creating a function to calculte electricty bill
/* 
Name: Raynold ongaki 
Reg no. PA106/G/28820/25
Discription: Electrick bill Calculator
*/

 
 
 #include <stdio.h>

//function protoype 
float calculateElectricBill(float x);
//main function
void main() {
    float units, bill;
    printf("Enter the number of units consumed this month: ");
    scanf("%f", &units);

    bill=calculateElectricBill(units);
    printf("The electric bill for %.2f units is: %.2f\n", units, bill);
}
//function to calculate electric bill
float calculateElectricBill(float x){
    float amount;
    if(x <= 100){
        amount = x * 10;
    }
    else if(x >= 100 && x <= 200){
        amount = (100 * 10) + ((x - 100) * 15);
    }
    else{
        amount = (100 * 10) + (100 * 15) + ((x - 200) * 20);
    }
    return amount;
}
    