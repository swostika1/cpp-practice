#include<iostream>
#include<string>
using namespace std;
struct shoes{
	string brand;
    int	price;
};
int main(){
   shoes s1;
   s1.brand="NIKE";
   s1.price=4000;
   
   
   shoes s2;
   s2.brand="caliber";
   s2.price=3000;
   cout<<"The brands of shoes available are:"<<s1.brand<<" "<<"and "<<s2.brand<<" "<<endl;
   return 0;
}