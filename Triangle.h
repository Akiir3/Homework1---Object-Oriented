#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle : public ShapeMaster {
  public:
    Triangle (float base, float height);
    //string display();
    float theArea();

  private:
    float base, height;
};

#endif
