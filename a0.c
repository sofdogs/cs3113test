#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int boomersooner() {
    // TODO write code here
    while(1) { 
	  int num; 
	  char name; 
	  //check if int or not
	  if(scanf("%d%c", &num, %name) !=2){ 
		  printf("not an integer,goodbye!\n"); 
		  break; 
        	}
	 //if it is an integer we need to check if divisible 
	 //by 3 or/and  5  
	 if(num%3 ==0 && num%5 ==0) 
	 { 
		 printf("Boomer Sooner!\n"); 
	 } 
	 else if (num%3 ==0) 
	 { 
		 printf("Boomer!\n"); 
	 } 
	 else if (num%5 ==0) 
	 { 
		 printf("Sooner!\n"); 
	 } 
	 else 
	 { 
		 printf("%d\n", num);
	 } 
	} 
    return 0; // <-- Update as needed
}

int main (int argc, char **argv) {
    int result; 

    // Error Check
    if (argc > 1) {
        dprintf(STDERR_FILENO, "Usage: %s <n>\n", argv[0]);
        exit(0);
    }
    else {
        dprintf(STDERR_FILENO, "Starting BoomerSooner...\n");
    }

    // Call the function to print out values
    result = boomersooner();

    return result; // Return program status
}
