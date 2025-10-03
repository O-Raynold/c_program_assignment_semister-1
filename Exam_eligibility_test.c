// exam validity checker 
 #include<stdio.h>
 
 int main(){
     int attendance;
    double marks;
    
    
    printf("Enter yr attendance percentage:");
    scanf("%d" ,&attendance);
    
    printf("\n Enter yr marks:");
    scanf("%lf" ,&marks);
 
      if(attendance>=75 &&marks>=50){
      printf("eligible for exams.");
      }
      else {
      printf(" Not eligible for exams.");
      }
 return 0;
 }
