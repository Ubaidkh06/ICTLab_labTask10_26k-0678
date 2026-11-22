#include <iostream>
#include <string>

using namespace std;

class book
{
	public:
		string title;
		string author;
		int price;
		
		void display()
		{
			cout << "Title: " << title << endl;
			cout << "Author: " << author << endl;
			cout << "Price: " << price << endl;
		}
};


int main()
{
	book book1;
	book book2;
	
	book1.title = "Harry Potter";
	book1.author = "J.K. Rowling";
	book1.price = 1500;
	
	book2.title = "Programming in C++";
	book2.author = " Robert Lafore";
	book2.price = 2200;
	
	
	
	book1.display();
	book2.display();

	return 0;
}
