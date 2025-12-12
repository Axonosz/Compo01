#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double deg){
    return deg * M_PI / 180.0;
}

double rad2deg(double rad){
    return rad * 180.0 / M_PI;
}

double findXComponent(double L1, double t1, double L2, double t2){
    return L1*cos(t1) + L2*cos(t2);
}

double findYComponent(double L1, double t1, double L2, double t2){
    return L1*sin(t1) + L2*sin(t2);
}

double pythagoras(double x, double y){
    return sqrt(x*x + y*y);
}

void showResult(double length, double direction){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << length << endl;
    cout << "Direction of the resultant vector (deg) = " << direction << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

int main(){
    double length1, length2, direction1, direction2, vX, vY, vR, vD;

    cout << "Enter length of the first vector: ";
    cin >> length1;

    cout << "Enter direction of the first vector (deg): ";
    cin >> direction1;

    cout << "Enter length of the second vector: ";
    cin >> length2;

    cout << "Enter direction of the second vector (deg): ";
    cin >> direction2;

    vX = findXComponent(length1, deg2rad(direction1), length2, deg2rad(direction2));
    vY = findYComponent(length1, deg2rad(direction1), length2, deg2rad(direction2));
    vR = pythagoras(vX, vY);
    vD = rad2deg(atan2(vY, vX));

    showResult(vR, vD);
}
