//create a class with attributes length and breadth.Create a subclass of area as rectangle and calculate area of rectangle

#include<iostream>
using namespace std;
class area{
	public:
		int length,breadth;
		void getData(){
			cout<<"enter length and breadth: "<<endl;
			cin>>length>>breadth;
		}
};
class rectangle:public area{
	public:
		int Area(){
			return (length*breadth);
		}
};
int main(){
	rectangle r;
	r.getData();
	cout<<"Area: "<<r.Area()<<endl;
}

