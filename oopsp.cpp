#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int s1;
class customer{
	string first_name,last_name,email;
	long int mobile_no;
	int age;


	public:

	void setfirstname(){
		cout << "Enter the first name: " << endl;
		cin >> first_name;
	}
	void setlastname(){
		cout << "Enter the last name: " << endl;
		cin >> last_name;
	}
	void setemail(){
		cout << "Enter Email id: " << endl;
		cin >> email;
	}
	void setage(){
		cout << "Enter age: " << endl;
		cin >> age;
	}
	void setmobile(){
		cout << "Enter mobile number: " << endl;
		cin >> mobile_no;
	}

	void getdata(){
		cout << "Name: " << first_name <<" "<< last_name << endl;
		cout << "\n";		
		cout << "Age: " << age << endl;
		cout << "\n";
		cout <<"Email: " <<email << endl;
		cout << "\n";
		cout <<"Mobile number: " << mobile_no <<endl;
	}

	int railway(){
		int rail;
		srand(time(0));
		rail = (rand() % 135) + 1;
		cout << "Available seats are: " << rail << endl;
		//s1=rail;
		return rail;
	};

// 	int bus(){
// 		int bus;
// 		srand(time(0));
// 		bus = (rand() % 30) + 1;
// 		cout << "Available seats are: " << bus << endl;
// 		s1=bus;
// 		return bus;
//	};
	int flight(){
		int flight;
		srand(time(0));
		flight = (rand() % 30) + 1;
		cout << "Available seats are: " << flight << endl;
		//s1=flight;
		return flight;
	};
    
    void booking(){
        cout << "Your seat has been booked and your seat details will come on your given mobile number and email " << endl;
    }

	};

	class railway{


	};

int main(){
	int a;

	cout << "*************************************** Welcome to Online Ticket Reservaion System ***************************************" << endl;
tryagain:
	cout << "                      ---------------For existing coustomer type 0 and if new customer type 1----------------" << endl;
	cin >> a;
	if (a==1){
		customer c1;
	}
	else{
		if(a==0){
			string username;
			cout << "Enter the user name: " << endl;
			cin >> username;
			cout << "No Data found" << endl;
			goto tryagain;
		}
		else{
			cout << "This is not a valid no." << endl;
			goto tryagain;
		}
	}
	customer c1;
	cout << "\n";
	c1.setfirstname();
	cout << "\n";

	c1.setlastname();
	cout << "\n";

	c1.setage();
	cout << "\n";

	c1.setmobile();
	cout << "\n";

	c1.setemail();
	cout << "\n\n\n\n";
	
	cout << "Check the details: " << endl;

	c1.getdata();

	int b;
check:
	//b=10;
	cout << "If you want any changes in above details type 0 for no and 1 for yes " << endl;
	cin >> b;

	cout << "\n\n";
	
	if(b!=0 && b!=1){
		cout << "This is not a valid argument " << endl;
		goto check;
	}

	if (b==0){}
	else 
		if(b==1){
			int c;
		cout << "Please type \n1 for first name \n2 for last name \n3 for age \n4 for mobile no. \n5 for email " << endl;
		cin >> c;
		switch (c){

			case 1:
				c1.setfirstname();
				break;
			case 2:
				c1.setlastname();
				break;
			case 3:
				c1.setage();
				break;
			case 4:
				c1.setmobile();
				break;
			case 5:
				c1.setemail();
				break;
			default:
				cout << "This is not a valid argument " << endl;
			}
		}

	cout << "Check the details: \n" << endl;
	c1.getdata();

	cout << "You're all done. " << endl;
	cout << "\n\n\n";
	
	int x;
	cout << "Enter 1 for continue and any integer to end the program" << endl;
	cin >> x;
	if (x!=1){
	    goto done;
	}
	
	int d;
	cout << "You can book Domestic flight ticket and Railway ticket form here. \n" <<  endl;
	cout << "Choose \n1 for Domestic flight ticket \n2 for Railway ticket  " << endl;
	cin >> d;

	if (d==1){
		cout << "The available domestic flights are:\n1 Delhi to Dehradun\n2 Delhi to Mumbai\n3 Delhi to Patna\n4 Delhi to Goa" << endl;
		cout << "\n\n" ;
		int e;
		cout << "Choose the respective number" <<endl;
			cin >> e;
		switch (e){
			case 1:
				cout << "Delhi to Dehradun\n  " << c1.flight() << endl;
				break;
			case 2:
				cout << "Delhi to Mumbai\n  " << c1.flight() << endl; 
				break;
			case 3:
				cout << "Delhi to Patna\n  " << c1.flight() << endl; 
				break;
			case 4:
				cout << "Delhi to Goa\n  " << c1.flight() << endl; 
				break;
			default:
				cout << "This is not a valid argument " << endl;
		}
		int t1;
		cout << "To book the seat Please enter 1 " << endl;
		cin >> t1;
		if(t1==1){
		    c1.booking();
		}
		else{
		    goto done;
		}
	}
    //cout << "\n\n\n" ;
	if (d==2){
		cout << "The available trains are\n1 Delhi to Rmamnagar\n2 Delhi to Dehradun\n3 Delhi to patna" << endl;
		int f;
		cout <<"\n\n" << endl;\
		cout <<"Choose respective number to book the train " << endl;
		cin >> f;
		switch(f){
		    case 1:
		    cout <<"Delhi to Rmamnagar " << c1.railway() << endl;
		    break;
		    case 2:
		    cout <<"Delhi to Dehradun " << c1.railway() << endl;
		    break;
		    case 3:
		    cout <<"Delhi to Patna " << c1.railway() << endl;
		    break;
		}
		int t2;
		cout << "To book the seat Please enter 1 " << endl;
		cin >> t2;
		if(t2==1){
		    c1.booking();
		}
		else{
		    goto done;
		}
	}
	cout << "\n\n\n" ;
	
done:
    cout <<"THANK YOU FOR USE THE PROGRAM\nPlease give feedback to group member" << endl;

	return 0;
}
