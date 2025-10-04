// #include <iostream>
// using namespace std;

// int print(int a){
//     a=a+1;
//     return a;
// }

// int main(){

//     cout<<print(5);
// }

// #include <iostream>
// using namespace std;

// string prime(int n) {
//     if (n <= 1) {
//         return "not prime";
//     }

//     int count = 0;
//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             count++;
//         }
//     }

//     if (count == 2) {
//         return "prime";
//     } else {
//         return "not prime";
//     }
// }

// int main() {
//     cout << prime(5);
// }

// #include <iostream>
// using namespace std;

// void detail(string name , string city , string state , int marks){
//     cout<<"Name : "<<name<<endl;
//     cout<<"City : "<<city<<endl;
//     cout<<"State : "<<state<<endl;
//     cout<<"Marks : "<<marks<<endl;
// }

// int main(){
//     string name, city, state;
//     int marks;

//     cout<<"Enter name : ";
//     cin>>name;

//     cout<<"Enter city : ";
//     cin>>city;

//     cout<<"Enter state : ";
//     cin>>state;

//     cout<<"Enter marks : ";
//     cin>>marks;

//     detail(name , city , state, marks);
// }

// #include <iostream>
// using namespace std;

// int main() {

// 	int n;
// 	cout<<"enter no: ";
// 	cin>>n;

// 	for(int i = 1 ; i<=n; i++) {
// 		int temp = 1;
// 		for(int j = 1; j<=n; j++) {
// 			if(j>=i) {
// 				cout<<temp<<" ";
// 				temp++;
// 			}
// 			else {
// 				cout<<"  ";
// 			}

// 		}
// 		cout<<endl;
// 	}
// }

// #include <iostream>
// using namespace std;

// int main() {

// 	int n;
// 	cout<<"enter no: ";
// 	cin>>n;

// 	for(int i = 1 ; i<=n; i++) {
// 		int temp = 1;
// 		for(int j = 1; j<=n; j++) {
// 			if(j>=i) {
// 				cout<<temp<<" ";
// 				temp++;
// 			}
// 			else {
// 				cout<<" ";
// 			}

// 		}
// 		cout<<endl;
// 	}
// }

// #include <iostream>
// using namespace std;

// int main() {

// 	int n;
// 	cout<<"enter no: ";
// 	cin>>n;

// 	for(int i = 1 ; i<=n; i++) {
// 		char temp = 'A';
// 		for(int j = 1; j<=n; j++) {
// 			cout<<temp<<" ";
// 			temp++;
// 		}
// 		cout<<endl;
// 	}
// }

// #include <iostream>
// using namespace std;

// int main() {

// 	int n;
// 	cout<<"enter no: ";
// 	cin>>n;

// 	for(int i = 1 ; i<=n; i++) {
// 		char temp = 'C';
// 		for(int j = 1; j<=n; j++) {
// 			cout<<temp<<" ";
// 			temp--;
// 		}
// 		cout<<endl;
// 	}
// }

// #include <iostream>
// using namespace std;

// int main() {

// 	int n;
// 	cout<<"enter no: ";
// 	cin>>n;

//     char temp = 'A';
// 	for(int i = 1 ; i<=n; i++) {

// 		for(int j = 1; j<=n; j++) {
// 			cout<<temp<<" ";
// 			temp++;
// 		}
// 		cout<<endl;
// 	}
// }

// #include <iostream>
// using namespace std;

// int main()
// {

// 	int n;
// 	cout << "enter no: ";
// 	cin >> n;

// 	for (int i = 1; i <= n - 1; i++)
// 	{

// 		for (int j = 1; j <= n; j++)
// 		{
// 			if (i == 2 && j == 2 || i == 2 && j == 3)
// 			{
// 				cout << "  ";
// 			}
// 			else
// 			{
// 				cout << "* ";
// 			}
// 		}
// 		cout << endl;
// 	}
// }



//Array

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5]={1,2,3,4,5};
    
//     // cout<<arr[0];
//     // cout<<arr[1];
//     // cout<<arr[2];
//     // cout<<arr[3];
//     // cout<<arr[4];
//     // cout<<arr[5];
    
//     for(int i =0;i<5;i++){
//         cout<<arr[i]<<endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {	
    
//     int even=0;
    
    
// 	int arr[5]= {1,2,3,4,5};

// 	for(int i = 0; i<5; i++) {
	    
// 	    if(arr[i]%2==0){
	        
// 	        even++;
// 	    }
	    
		
// 	}
// 	cout<<even;

// 	return 0;
// }



// #include <iostream>
// using namespace std;

// int main()
// {


// 	int arr[5]= {1,2,3,4,5};

// 	for(int i = 0; i<5; i++) {
	    
//         int n=3;
        
// 		if(arr[i]==n) {
		    
// 		   cout<<i;
		   
// 		}

// 	}
	
// 	return 0;
// }



// #include <iostream>
// using namespace std;

// int main()
// {


// 	int arr[5]= {1,2,3,4,5};

// 	for(int i = 0; i<5; i++) {

// 		int target = 3;

// 		if(arr[i]==target) {

// 			cout<<i;

// 		}

// 	}


// 	return 0;
// }





#include <iostream>
using namespace std;

int main()
{	
    
    int odd=0;
    int even = 0;
    int negative = 0;
    
    
	int arr[6]= {1,2,4,-3,6,-9};

	for(int i = 0; i<6; i++) {
	    
	    if(arr[i]%2!=0 && arr[i]>0){
	        
	        odd++;
	    }
	    if(arr[i]%2==0 && arr[i]>0){
	        
	        even++;
	    }
	    if(arr[i]<0){
	        
	        negative++;
	    }
		
	}
	cout<<odd<<endl;
		cout<<even<<endl;
				cout<<negative<<endl;



	return 0;
}




