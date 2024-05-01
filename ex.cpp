#include<iostream> 
using namespace std; 
struct phone 
{ 
	int area_code,exchange,number; 
}; 
main() 
{ 
	phone p1,p2; 
	p1.area_code=212; 
	p1.exchange=767; 
	p1.number=8900; 
	cin>>p2.area_code>>p2.exchange>>p2.number; 
	//My number is (212) 767-8900 
	cout<<"\nMy number is ("<<p1.area_code<<") "<<p1.exchange<<"-"<<p1.number; 
	cout<<"\nyour number is ("<<p2.area_code<<") "<<p2.exchange<<"-"<<p2.number; 
}
