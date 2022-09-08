/*
Define an enumeration type triangleType that has the values scalene, isosceles, equilateral, and noTriangle.

Write following function 

triangleShape that takes as parameters three integers, each of which represents the length of a side of the triangle. The function should return the shape of the triangle(triangleType). (Note: In a triangle, the sum of the lengths of any two sides is greater than the length of the third side.)

printShape that takes as parameters one triangleType and output triangleType.

Write a program that prompts the user to input the length of the sides of a triangle and outputs the shape of the triangle.

Note that only upload functions

For example:

Test
int lenSide1, lenSide2, lenSide3;
triangleType triangle;

while(cin >> lenSide1){
    cin >> lenSide2 >> lenSide3;
    triangle = triangleShape(lenSide1, lenSide2, lenSide3);
    printShape(triangle);
}
return 0;

Input
1 2 3
3 3 3
3 3 4
3 4 5

Result	
noTriangle
equilateral
isosceles
scalene
*/

enum triangleType {scalene, isosceles, equilateral, noTriangle};

triangleType triangleShape(int a,int b,int c){
  if(a+b>c && b+c>a && a+c>b){
    if(a==b && b==c)
      return equilateral;
    else if((a==b && b!=c) || (a==c && c!=b) || (a==b && a!=c))
      return isosceles;
    else
      return scalene;
  }
  else
    return noTriangle;
}

void printShape(triangleType a){
  switch(a){
    case 0:
    cout<<"scalene"<<endl;
    break;
    case 1:
    cout<<"isosceles"<<endl;
    break;
    case 2:
    cout<<"equilateral"<<endl;
    break;
    case 3:
    cout<<"noTriangle"<<endl;
    break;
  }
}