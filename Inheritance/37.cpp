// Creating area , cost and rectangle and t subclass using multilevel inheritence


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
class rectangle:public area,public cost
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
class totalcost:public rectangle{
	public:
		int tCost(){
			return(rectangle::Cost()+0.18*rectangle::Cost());
		}
};
int main(){
	totalcost ob;
	ob.getdata();
	cout<<"Area : "<<ob.Area()<<endl;
	cout<<"Cost : "<<ob.Cost()<<endl;
	cout<<"Total Cost : "<<ob.tCost()<<endl;
}


