#include<iostream>
using namespace std;
class demo
{
 int x,y,z;
 public:
 demo()
 {
  x=1;
  y=1;
  z=2;
 }
 void operator -()
 {
 x=-x;
 y=-y;
 z=-z; 
 }
 void show()
 {
 cout<<"\n x="<<x<<"\n y="<<y<<"\n z="<<z;
 }
};
main()
{
	demo d1;
	-d1;
	d1.show();

}
