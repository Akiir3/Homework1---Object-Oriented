#include "ShapeMaster.h"
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
#include <string>
#include <iostream>

Square::Square(float Base, float Height){
	base = Base;
	height = Height;
}

float Square::theArea(){
	return base*height;
}

// string Square::display(){
//   return ("Square");
// }
