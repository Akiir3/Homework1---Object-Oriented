#include "ShapeMaster.h"
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
#include <string>
#include <vector>
#include <list>
#include <algorithm> 
#include <iostream>
#include <bits/stdc++.h>
#include <typeinfo>

using namespace std;



int main(){
  
  //Here I am   constructing the shapes with given dimensions
  Triangle Shape1 (5.0, 12.5);
  Circle Shape2 (2.0, 3.5);
  Square Shape3 (7.0, 7.0);
  Triangle Shape4 (10.0, 12.5);
  Circle Shape5 (5.0, 7.5);
  Square Shape6 (2.0, 2.0);

  // cout << Shape6.theArea() << endl;
  // cout << typeid(Shape6).name() << endl;

  // initializing my vector with all the objects 
  vector<ShapeMaster> myVector; 

  //initializing list 
  // list<ShapeMaster> theList;


  //putting all the objects in the vector 
  myVector.push_back(Shape1);
  myVector.push_back(Shape2);
  myVector.push_back(Shape3);
  myVector.push_back(Shape4);
  myVector.push_back(Shape4);
  myVector.push_back(Shape6);

  // theList.push_back(Shape1);
  // theList.push_back(Shape2);
  // theList.push_back(Shape3);
  // theList.push_back(Shape4);
  // theList.push_back(Shape5);
  // theList.push_back(Shape6);

 //  theList.sort([](float ShapeMaster &f, float ShapeMaster &s) {
 //  	 return f.theArea < s.theArea; });

	// for (auto it = theList.begin(); it != theList.end(); ++it) 
 //        cout << ' ' << *it;

  sort(myVector.begin(), myVector.end());


    for ( int i = 0; i < myVector.size(); ++i ) {
        cout << i + 1 << ". " << myVector[i].theArea() << "\t"<< typeid(myVector[i]).name() << endl;
        // cout<<typeid(Shape4).name()<<"\t"<< quote(Shape4) <<"\n";
        }
  
	return 0;
}





