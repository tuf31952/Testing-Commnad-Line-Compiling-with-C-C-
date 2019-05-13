#include <stdio.h>
#include <math.h>

float add_sin(float a, float b);
float add_sqrt(float a, float b);

int main(){

   printf("hello world\n");
   
   float z = add_sin(25, 25);
   
   float q = add_sqrt(25, 25);
   
   printf ("The total of the sins is %f.\n", z );
	
   printf ("The total of the square roots is %f.\n", q );

}