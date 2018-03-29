#include <iostream>

using namespace std;

int main()
{
double weight,radius;
cout <<"Input weight of the sphere in pounds.";
cin >> weight;
cout <<"Input radius of the sphere in feet.";
cin >> radius;

double Volume = (4.0/3.0)*3.14159*radius*radius*radius;
double Fb = Volume * 62.4;
if(Fb >= weight)
cout << "The sphere will float in water." << endl;
else
cout <<"The sphere will sink in water." << endl;
return 0 ;
}


