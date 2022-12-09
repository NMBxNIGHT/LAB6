#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double degree)
{

    return (degree*M_PI)/180.0;
}

double findXComponent(double lv1,double lv2,double rad1,double rad2)
{
    
    return lv1*cos(rad1)+lv2*cos(rad2);
}

double findYComponent(double lv1,double lv2,double rad1,double rad2)
{

    return lv1*sin(rad1)+lv2*sin(rad2);
}

double pythagoras(double x, double y)
{

    return sqrt(pow(x,2)+pow(y,2));
}

double rad2deg(double rad)
{

    return rad*180.0/M_PI;
}
void showResult(double vl,double deg)
{
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << vl << endl;
    cout << "Direction of the resultant vector (deg) = " << deg << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    return;
}
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 
    showResult(result_vec_length,result_vec_direction);
}
