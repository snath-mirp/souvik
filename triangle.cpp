 #include<iostream>
 using namespace std;
 int main()
 {
  int x1, y1, x2, y2, x3, y3 , AB, BC, CA;
  cout<< "let the triangle have 3 vertices: A, B and C."<<endl;
  cout<<"Enter the coordinates:";
  cin>> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
  AB=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  BC=((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
  CA=((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));

  if((AB==BC)&&(AB==CA))
  cout<<"It is an equilateral triangle.";

  else if((AB==BC)&&(AB!=CA))
  cout<<"It is an isosceles triangle.";
 
  else if((AB!=BC)&&(AB==CA))
  cout<<"It is an isosceles triangle.";
  
  else if ((AB!=BC)&&(AB!=CA))
  cout<<"It is a scalene triangle.";

  return 0;
 }
 
  
 
