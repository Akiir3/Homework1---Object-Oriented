#include "ShapeMaster.h"
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
#include <string>
#include <iostream>

Circle::Circle(float Center, float Radius){
	center = Center;
	radius = Radius;
}

float Circle::theArea(){
	return (2*3.14*radius);
}

// string Circle::display(){
//   return ("Circle");
// }
