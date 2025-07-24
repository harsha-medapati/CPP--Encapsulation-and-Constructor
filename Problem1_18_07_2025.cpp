//Problem 1: Student Profile Manager
#include<iostream>
using namespace std;
class student
{
	private:
		int rollNo;
		int marks;
	public:
		string name;
		string branch;
	//The below line is a constructor.
	student(string n,string b,int r,int m)
	{
		name = n;
		branch = b;
		//Cannot use setter function in a constructor.
		setrollNo(r);
		setmarks(m);
	}
	//Best practise is for every setter we need to add a getter.
	void setrollNo(int r)
	{
		if(r>0)
		{
			rollNo = r;
		}
		else
		{
			cout<<"Invalid";
		}
	}
	
	void setmarks(int m)
	{
		if(m>=0 && m<=100)
		{
			marks = m;
		}
		else
		{
			cout<<"Invalid";
		}
	}
	void display()
	{
		cout<<name<<" "<<branch<<" "<<rollNo<<" "<<marks<<endl;
	}
};
int main()
{
	student s1("Harsha","C.S.E",18,100);
	s1.display();
	s1.setmarks(26);
	s1.display();
}
