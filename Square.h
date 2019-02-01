#ifndef SQUARE_H
#define SQUARE_H

class Square : public ShapeMaster {
  public:
    Square (float base, float height);
    //string display();
    float theArea();
  private:
    float base, height;
};

#endif
