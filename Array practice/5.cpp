//count even,odd negative values in array


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




