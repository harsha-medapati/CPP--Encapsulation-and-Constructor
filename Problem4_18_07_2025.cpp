//Problem 4: Library Book Management
//Method: issueBook() reduces copy by 1 if available
//Method: addCopies(int n)
#include<bits/stdc++.h>
using namespace std;
class book
{
	private:
		string isbn;
		int copies;
	public:
		string title;
		string author;
	book(string i,int c,string t,string a)
	{
		setisbn(i);
		setcopies(c);
		title = t;
		author = a;
	}
	void setisbn(string i)
	{
		isbn = i;
	}
	string getisbn()
	{
		return isbn;
	}
	void setcopies(int c)
	{
		if(c<=0)
		{
			cout<<"Copies -> Can't be negative"<<endl;
		}
		else
		{
			copies = c;
		}
	}
	void issuecopies()
	{
		if(copies<0)
		{
			cout<<"Not avilable"<<endl;
		}
		else
		{
			copies--;
			cout<<"Total avilable copies are : "<<copies<<endl;
		}
	}
	void addcopies(int n)
	{
		copies += n;
		cout<<n<<" Copies are added"<<endl;
	}
	void displayInfo() 
	{
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Available copies: " << copies << endl;
    }
};
int main()
{
	book b1("978-3-16-148410-0", 5, "The Great Gatsby", "F. Scott Fitzgerald");
    b1.displayInfo();

    b1.issuecopies();
    b1.issuecopies();
    b1.addcopies(3); 
    b1.issuecopies();
}
