// Creating area , cost and rectangle subclass using multiple inheritence


#include<iostream>

using namespace std;
class area{
	public:
		int getarea(int length,int breadth){
		return(length*breadth);	
		}
		
};
class cost{
	public:
		int getcost(int area){
			return (1000*area);
		}
};
class rectangle:public area, public cost
{
	private:
		int l,b,a;
	public:
		void getdata(){
			cout<<"Enter length and breadth of the rectangle:"<<endl;
			cin>>l>>b;
		}
		int Area(){
			a=getarea(l,b);
			return a;
		}
		int Cost(){
			return cost::getcost(a);
		}
};
int main(){
	rectangle r;
	r.getdata();
	cout<<"Area : "<<r.Area()<<endl;
	cout<<"Cost : "<<r.Cost()<<endl;
}


