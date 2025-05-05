#include <iostream>
using namespace std;
int main()
{

int a= 10;
int b=6;
int y=20;
int *c=&a;
cout<<"Alamat nemori : "<<c << endl;
cout<<" Nilai dari c : "<<*c<<endl;
c= &y;

cout<<"Alamat nemori : "<<c << endl;
cout<<" Nilai dari c : "<<*c<<endl;

//refernce
 int &d=b;
 cout<<"Na;ai "<<d<<endl;
 cout<<"Reference"<< &d<<endl;
 int f=5;
 int g=f;
 
 


};