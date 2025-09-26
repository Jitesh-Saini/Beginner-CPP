// Make a parking system in which if person parks a car then add 10rs, if parks bus 20rs and if parks cycle 5rs. 
// Also print total money collected at the end of the day. Take n as number of vehicles entered in parking.


#include <iostream>
using namespace std;


int main()
{
	string vehicle;

	int car = 0;
	int bus = 0;
	int cycle = 0;
	
	int n;
	cout<<"enter entry no:";
	cin>>n;


	int i = 1;
	while (i<=n) {
	    
	    cout<<"enter vehicle name: ";
		cin>>vehicle;


		if(vehicle=="car") {
			car+=10;
			cout<<"for car 10rs added"<<endl;
		}

		else if(vehicle=="bus") {
			bus+=20;
			cout<<"for bus 20rs added"<<endl;

		}

		else if(vehicle=="cycle") {
			cycle+=5;
			cout<<"for cycle 5rs added"<<endl;

		}
		else{
		    cout<<"invalid vehicle input"<<endl;
		}

		int total = car + bus + cycle;

		cout<<"Total money:"<<total<<endl;

		i++;
	}
	return 0;
}



