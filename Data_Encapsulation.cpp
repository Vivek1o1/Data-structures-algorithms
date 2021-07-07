#include <iostream>
using namespace std;

class Student{
	string adress;
	void privateMethod(){
		cout<<"I am private"<<endl;
	}
	public:
		string firstName;
		string lastName;

		void printInfo(){
			cout<<firstName<<" "<<lastName<<endl;
			cout<<adress<<endl;
			privateMethod();
		}
		
		// setter methods
		void setAddress(string s){
			adress = s;
		}

		// gettter methods
		void getAdress(){
			cout<<"Adress => "<<adress<<endl;
		}

};


main(){
	Student one;
	one.firstName = "Yatin";
	one.lastName = "Kumar";
	one.setAddress("Delhi");
	one.getAdress();
	one.printInfo();
}

