#include <math.h>
#ifndef _myfun
#define _myfun
float  det(float **a) 
{   
	float det;
	det=a[0][0]*a[1][1]*a[2][2]+a[0][1]*a[1][2]*a[2][0]+a[0][2]*a[1][0]*a[2][1]-a[0][2]*a[1][1]*a[2][0]-a[0][1]*a[1][0]*a[2][2]-a[0][0]*a[1][2]*a[2][1];
        
        return det;
}
#endif
