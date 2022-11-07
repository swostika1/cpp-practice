#include <iostream>
class book
{
    private:
    char  name[20];
    int price:
    public:
    void getdata()
     {
    	cout<<"Enter the name of the book";
    	cin>>name;
    	cout<<"Enter the price of the book";
    	cin>>price;
	}
    void showdata(){
    cout<<"The name of the book is"<<name<<"and price is"<<price<<endl;
    }
};
int main()
{
    Book b1;
    b1.getdata();
    b1.showdata();
    return 0;
}