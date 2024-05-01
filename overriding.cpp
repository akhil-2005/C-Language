//Imagine a publishing company that markets both book and audiocassette versions of its
 //works. Create a class publication that stores the title (a string) and price (type float)
 //of a publication. From this class derive two classes: book, which adds a page count (type
 //int), and tape, which adds a playing time in minutes (type float). Each of these three
 //classes should have a getdata() function to get its data from the user at the keyboard,
 //and a putdata() function to display its data.
// Write a main() program to test the book and tape classes by creating instances of them,
 //asking the user to fill in data with getdata(), and then displaying the data with putdata().
 #include<iostream>
 #include<string>
 class publication
 {
 public:
 std::string title;
 float prize;
 float playtime;
  };

 class book:public publication
 {
 	public:
 	int pagecount;
 };
 class tape:public publication
 {
 	public:
 	float playtime;
 };
   void getdata( publication &pub)
 {
 	std::cout<<"enter the title:";
	std::cin>>pub.title;
	std::cout<<"enter the price:";
	std::cin>>pub.prize;
	std::cout<<"enter the playtime:";
	std::cin>>pub.playtime;
 }
 void putdata(publication &pub)
 {
	std::cout<<"title"<<pub.title;
	std::cout<<"prize"<<pub.prize;
	std::cout<<"playtime"<<pub.playtime;
}
main()
{
 book myBook;
   tape myTape;
   playtime myplaytime;

    std::cout << "For the book:\n";
    getdata(myBook);
    std::cout << "For the tape:\n";
    getdata(myTape);
    std::cout << "For the playtime:\n";
    getdata(my playtime);

    std::cout << "\nBook details:\n";
    putdata(myBook);
    std::cout << "\nTape details:\n";
    putdata(myTape);
     std::cout << "\nplaytime details:\n";
    putdata(my playtime);


    return 0;
	
}

 

 
