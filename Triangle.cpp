#include "ShapeMaster.h"
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
#include <string>
#include <iostream>

Triangle::Triangle(float Base, float Height){
	base = Base;
	height = Height;
}

float Triangle::theArea(){
	return ((base*height)/2);
}

// string Triangle::display(){
//   return ("Triangle");
// }
