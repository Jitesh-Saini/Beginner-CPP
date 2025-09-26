// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;


// int main()
// {
//     int n;
//     cin>>n;
    
//     cout<<int(sqrt(n));

//     return 0;
// }



// #include <iostream>
// using namespace std;


// int main()
// {
//     int r;
//     cin>>r;
//     int area = 3.14 * r * r;
//     cout<<area;
    

//     return 0;
// }


// #include <iostream>
// using namespace std;


// int main()
// {
//     int l;
//     cin>>l;
    
//      int b;
//     cin>>b;
//     int area = l*b;
//     cout<<"area of rectangle:"<<area;
    

//     return 0;
// }



// #include <iostream>
// using namespace std;


// int main()
// {
//     int l;
//     cin>>l;
    
//     int b;
//     cin>>b;
//     int perimeter =2*(l+b);
//     cout<<"perimeter of rectangle:"<<perimeter;
    

//     return 0;
// }



// #include <iostream>
// using namespace std;


// int main()
// {
//     int r;
//     cin>>r;
  
//     int circum = 2 * 3.14 * r;
//     cout<<"circumference of circle:"<<circum;
    

//     return 0;
// }


// #include <iostream>
// using namespace std;


// int main()
// {
//     int cel;
//     cin>>cel;
    
//     int fah = (cel*9/5)+32;
    
//     cout << fah;
   
    
    

//     return 0;
// }


// #include <iostream>
// using namespace std;


// int main()
// {
//     int fah;
//     cin>>fah;
    
//     int cel = (fah-32)*5/9;
    
//     cout << cel;

//     return 0;
// }



// #include <iostream>
// using namespace std;


// int main()
// {
// 	int i = -33;
// 	int even= 0;
// 	int odd = 0;
// 	while(i<=109) {

// 		if(i%2==0) {
// 			even = even + i;
// 		}
// 		else {
// 			odd = odd + i;

// 		}

// 		i++;
// 	}
	
// 	int sub = even - odd;
	
// 	cout<<even<<endl;
// 	cout<<odd<<endl;
// 	cout<<sub;

// 	return 0;
// }


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



