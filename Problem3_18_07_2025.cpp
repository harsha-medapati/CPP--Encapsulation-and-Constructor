//Problem 3: Product Inventory
#include<bits/stdc++.h>
using namespace std;
class product
{
	private:
		int price;
		int stock;
	public:
		string productName;
		string catogery;
	product(int p,int s,string n,string c)
	{
		setprice(p);
		setstock(s);
		productName = n;
		catogery = c;
	}
	void setprice(int p)
	{
		if(p<0)
		{
			cout<<"price can't be negative"<<endl;
		}
		else
		{
			price=p;
		}
	}
	int getprice()
	{
		return price;
	}
	void setstock(int s)
	{
		if(s < 0)
		{
			cout<<"Stock can't be negative"<<endl;
		}
		else
		{
			stock = s;
		}
	}
	int getstock()
	{
		return stock;
	}
	void displaySummary()
	{
    	cout << "Product Name: " << productName << endl;
    	cout << "Category: " << catogery << endl;
    	cout << "Price: " << price << endl;
    	cout << "Stock: " << stock << endl;
	}
};
int main()
{
    product myProduct(120, 50, "Mouse", "Electronics");
    myProduct.displaySummary();
    myProduct.setprice(100);
    cout<<"Updated price : "<<myProduct.getprice()<<endl;
    myProduct.setstock(-40);
}
