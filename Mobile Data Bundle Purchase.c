//  internet sevvice provider
/* 
Name :Raynold  Ongaki
Reg no.PA106/G/28820/25
Description:programming code displaying bundle offered by internet service provider 
*/

  #include<stdio.h>
  int main(){
	  
	  //variable declaretion 
	   int number;
	   
	   // display out data bundle for the user
	  printf("Select your bundle");
  	  printf("\n 1. 100MB @ 50 KES");
   	  printf("\n 2. 500MB @ 200KES");
   	  printf("\n 3. 1GB @ 350KES");
   	  printf("\n 4. 2GB @ 600KES");
   	  
   	  //promt user to enter prefferable bundle package
   	  printf("\n Enter number 1-4:");
   	  scanf("%d" ,&number);
   	  
   	  //analysing user input and printing it
   	  switch(number){
			 case 1:
			 printf("You selected 100MB. cost 50KES");
			 break;
 	 
 	    	case 2:
 	    	printf("You selected 500MB . cost 200KES");
 	    	break;
 	    
 	    	case 3:
 	    	printf("You selected 1GB . 350KES");
 	    	break;
 	    
 	    	case 4:
 	    	printf("You selected 2GB .cost 600KES");
 	    	break;
 	    
 	    	default:
 	    	printf("Invalid choise.");
 	    	break;
 	    	
		 }
	  
	  
	  return 0;
	  
  }
