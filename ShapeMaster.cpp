#include "ShapeMaster.h"
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


ShapeMaster::ShapeMaster(){
	float area;
	
}

bool operator<(const ShapeMaster &s1, const ShapeMaster &s2){
    return s1.theArea() < s2.theArea();
}
