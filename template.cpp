#include<iostream>
using namespace std;
template<class t>
void swap(t a,t b)
{
 t temp =a;
 a=b;
 b=temp; 
}
int main()
{
int a;
int b;
float d;
float e;
cout<<"enter two integers a,b:";
cin>> a, b;
cout<<"\nenter two float d,e:";
cin>>d,e;
swap(a,b);
cout<<"\nafter swaping:"<<a<<b;
swap(d,e);
cout<<"\nafter swaing"<<d<<e;
return 0;

}
