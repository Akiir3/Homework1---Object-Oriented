#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public ShapeMaster {
  	public:
    	Circle (float center, float radius);
    //string display();
    	float theArea();
  	private:
    	float center, radius;
};
#endif
