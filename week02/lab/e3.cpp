#include <iostream>
using namespace std;
int main() 
{//精度不够，显示的位数不够，ieee745
cout.precision(10);
cout << fixed;
float f1 = 1.0f;
cout<<"f1 = "<<f1<<endl;
float a = 0.1f;
float f2 = a+a+a+a+a+a+a+a+a+a;
cout<<"f2 = "<<f2<<endl;
if(f1 == f2)
cout << "f1 = f2" << endl;
else
cout << "f1 != f2" << endl;
return 0;
}