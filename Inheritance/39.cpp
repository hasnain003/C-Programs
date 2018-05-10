#include<iostream>
using namespace std;

class Staff{
	private:
		string name,code;
	public:
		Staff(string n,string c){
			name=n;
			code=c;
		}
		void display(){
			cout<<"Name: "<<name<<endl;
			cout<<"Code: "<<code<<endl;
			}
	
};
class Teacher:public Staff{
	private:
		string sname;
		int nopub;
	public:
		Teacher(string c,string s,string n,int pub):Staff(c,s)
		{	
			sname=n;
			nopub=pub;
		}
		void display(){
			Staff::display();
			cout<<"Subject Name: "<<sname<<endl;
			cout<<"Number of Publication: "<<nopub<<endl;
		}
	
};
class Typist:public Staff{
	private:
		int speed;
	public:
		Typist(string c,string n, int s):Staff(c,n){
			speed=s;
		}
		void display(){
			Staff::display();
			cout<<"Speed of Typist: "<<speed<<endl;
		}
};
class Regular:public Typist{
	private:
		int salary;
	public:
		Regular(string c,string n,int s,int r):Typist(c,n,s){
			salary=r;
		}
		void display(){
			Typist::display();
			cout<<"Salary of Regular: "<<salary<<endl;
		}
	
};
class Casual:public Typist{
	private:
		int wage,nday;
	public:
		Casual(string c,string n,int s,int w,int day):Typist(c,n,s){
			
			wage=w;
			nday=day;
		}
		void display(){
			Typist::display();
			cout<<"Salary of Regular: "<<endl;
		}
};
int main(){
	int p;
	string n,s,c;
	cout<<"Enter teacher name: "<<endl;
	cin>>n;
	cout<<"Enter teacher code: "<<endl;
	cin>>c;
	cout<<"Enter Subject: "<<endl;
	cin>>s;
	cout<<"Enter number of publication: "<<endl;
	cin>>p;
	Teacher ob(c,n,s,p);
	ob.display();
	
	
	cout<<"Enter name,code, speed and daily wages of Regular typist"<<endl;
	
	int speed,w;
	string n1,s1,c1;
	cin>>c1;
	cin>>n1;
	cin>>speed;
	cin>>w;
	Regular ob1(c1,n1,speed,w);
	ob1.display();
	
	
}
