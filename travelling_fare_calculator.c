// travelling fare calculator
/* 
Name: Raynold ongaki 
Reg no. PA106/G/28820/25
Discription: A  program to calculate your travelling fare
*/



 #include <stdio.h>

//function protoype 
float calculateFare(float x);

void main() {
    float distance, fare;
    printf("Enter the distance traveled in kilometers: ");
    scanf("%f", &distance);
    fare=calculateFare(distance);
    printf("The fare for traveling %f kilometers is Ksh: %.2f\n", distance, fare);
}
//function to calculate fare
float calculateFare(float x){
    float fare;
    fare=x * 100;
    return fare;

}