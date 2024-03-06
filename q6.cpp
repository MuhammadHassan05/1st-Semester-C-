//#include <iostream>
//using namespace std;
//int main() {
//    int x1=0, y1=0, x2=0, y2=0, x3=0, y3=0;
//    cout << "Enter coordinates of three points (x1 y1 x2 y2 x3 y3): "<<endl;
//    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//    int side1 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
//    int side2 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
//    int side3 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
//    // Determining the type of triangle
//    if (side1 == side2 && side2 == side3) {
//        cout << "Equilateral triangle" << endl;
//    }
//    else if (side1 == side2 || side1 == side3 || side2 == side3) {
//        cout << "Isosceles triangle" << endl;
//    }
//    else if (side1 + side2 == side3 || side1 + side3 == side2 || side2 + side3 == side1) {
//        cout << "Right-angled triangle" << endl;
//    }
//    else {
//        cout << "Scalene triangle" << endl;
//    }
//    return 0;
//}
