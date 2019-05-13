  #include <stdio.h>
  #include <math.h>
  
  #define PI 3.14159265
  
  float add_sin(float a, float b) {
  
  	float val = PI / 180;
  	
  	float sin1 = sin(a*val);
  	float sin2 = sin(b*val);
  	
  	float total = sin1 + sin2;
  
  	return total;
  
  }