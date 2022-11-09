#include <iostream>
using namespace std;
class Rectangle
{
	int l,b,a;
	public:
		void getdata(){
			cout<<"Enter the length and breadth of the rectangle";
			cin>>l>>b;
			
		}
		void showdata(){
			a=l*b;
			cout<<"The area of the rectangle is:"<<a;
			
		}
};
int main(){
	Rectangle R;
	R.getdata();
	R.showdata();
	return 0;
}
