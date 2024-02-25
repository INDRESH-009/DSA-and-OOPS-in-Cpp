//C++ has many function that helps to perform mathematical operation
//You can use the max and min function directly but to use other math functions we have use the header file 
//#include <cmath>

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    //max and min
    int x = max(6,5);
    int y = min(3,8);
    cout<<x<<" is maximum out of 6 and 5 , "<<y<<" is the minimum out of 3 and 8"<<endl;
    cout<<max(2,3)<<endl;

    //sqrt
    int a = sqrt(25);
    int b = sqrt(64);
    cout<<a<<endl<<b<<endl;

    //round
    int c =round(2.7);
    int d = round(4.3);
    cout<<c<<endl<<d<<endl;

    //log
    int e = log(1);
    float f = log(2);
    cout<<e<<endl<<f<<endl;

    //A list of other popular Math functions (from the <cmath> library) can be found in the table below:
/*
        Function	    Description
        abs(x)	        Returns the absolute value of x
        acos(x)	        Returns the arccosine of x
        asin(x)	        Returns the arcsine of x
        atan(x)	        Returns the arctangent of x
        cbrt(x)	        Returns the cube root of x
        ceil(x)	        Returns the value of x rounded up to its nearest integer
        cos(x)	        Returns the cosine of x
        cosh(x)	        Returns the hyperbolic cosine of x
        exp(x)	        Returns the value of Ex
        expm1(x)        Returns ex -1
        fabs(x)	        Returns the absolute value of a floating x
        fdim(x, y)	    Returns the positive difference between x and y
        floor(x)	    Returns the value of x rounded down to its nearest integer
        hypot(x, y)	    Returns sqrt(x2 +y2) without intermediate overflow or underflow
        fma(x, y, z)    Returns x*y+z without losing precision
        fmax(x, y)	    Returns the highest value of a floating x and y
        fmin(x, y)	    Returns the lowest value of a floating x and y
        fmod(x, y)	    Returns the floating point remainder of x/y
        pow(x, y)	    Returns the value of x to the power of y
        sin(x)	        Returns the sine of x (x is in radians)
        sinh(x)	        Returns the hyperbolic sine of a double value
        tan(x)	        Returns the tangent of an angle
        tanh(x)	        Returns the hyperbolic tangent of a double value
*/

}
