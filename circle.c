#include <malloc.h>
#include "circle.h"
#include <stdbool.h>


void fiveCircles(circle c[]) {

//creating an array of 5 circles.
for(int i = 0; i < 5; i++)		
{
	c[i].r = i;
	c[i].p.x = i;
	c[i].p.y = i; 
}

}

// Checking if the circle is valid.
bool circleIsValid(const circle * c) {
switch ((*c).r > 0)
{
case 1:
	return true;	
	break;

default:
	return false; 
	break;
}

	return 0;
}

// Adding a pointer coordinates to a circles coordinates.
void translate(circle* c, const point* p) {

(*c).p.x += (*p).x;
(*c).p.y += (*p).y;	

}


