#ifndef SHAPE_H
#define SHAPE_H

class ShapeMaster {
	public: 
		ShapeMaster();
		float area;
	    float theArea() const {return area;}
	    

};

bool operator<(const ShapeMaster &s1, const ShapeMaster &s2);

#endif

