#include<iostream>
using namespace std;

class Circle{
	private:
		float r;
	public:
		void getdata()
		{
			cout<<"Enter the radius of circle"<<endl;
			cin>>r;
		}
		friend float Area(Circle); 
};

float Area(Circle o){
	return (3.14*o.r*o.r);
}

int main(){
	Circle c;
	c.getdata();
	cout<<"Area :"<<Area(c)<<endl;
}
