//Define a class named GroceryItem. 
//Include private fields that hold an item’s 
//stocknumber, price, quantity in stock,and total value.
// Write a public function named
//dataEntry()that calls four private functions.
// Three of the private functions prompt
//the user for keyboard input for a value for
 //one of the data fields stock number, price,
//and quantity in stock. 
 //Include a fourth private function that calculates
 // the GroceryItem’s total value field
//(price times quantity in stock). 
//Write a public function that displays a GroceryItem’s
//values. 
//Finally, write a main()function that declares a GroceryItem object, assigns
//values to its fields, and uses the display function. Save the file as Grocery.cpp*/
#include<conio.h>
#include<iostream>
using namespace std;
 
 class Groceryitem
 {
 	private:
 		int stock_number;
 		float price;
 		int quantity;
 		float total_value;
	private:
		  	void set_stock_number()
		  	{
		  		  cout<<"\n Enter stock number";
				  cin>>stock_number;
			  }
 		    void set_price()
 		    {
 		    	 cout<<"\nEnter price";
				 cin>>price;
			 }
			 void set_quantity()
			 {
			 	 cout<<"\nEnter the quantity";
				 cin>>quantity;
			 }
			 void set_total_value()
			 {
			 	total_value=(price*quantity);
			 }
			 public:
			 	void data_entry()
			 	{
			 		set_stock_number();
			 		set_price();
			 		set_quantity();
			 		set_total_value();
				 }
			 void display()
			 {
			 	cout<<stock_number<<"\n"<<price<<"\n"<<quantity<<"\n"<<total_value;
			 }
};
			 main()
			 {
			 Groceryitem g1;
			 g1.data_entry();
			 g1.display();
			 }
