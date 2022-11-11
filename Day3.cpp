#include <iostream>
using namespace std;
class sum
{
   public:
   	int a,b,c;
   	void getdata();
   	void showdata();
};
void sum::getdata()
{
	cout<<"Enter any two numbers:";
	cin>>a>>b;
}
void sum::showdata()
{
	c=a+b;
	cout<<"The sum is:"<<c;
}
int main()
{
sum s;
s.getdata();
s.showdata();
return 0;
}
