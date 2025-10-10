
// #include <bits/stdc++.h>
// using namespace std;
// int main() {

// 	vector<int>v = {3,8,6,4,7};
	
// 	int target=6;


// 	for(int i=1;i<=5;i++){
	    
// 	    if(v[i]==target){
// 	        cout<<"found at index:"<<i;
// 	        return 0;
// 	    }
	    
// 	}
// 	cout<<"Not found";
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {

// 	vector<int>v = {3,8,6,4,7};
	
// 	int lar = 0;
// 	int seclar=0;
	
// 	for(auto x:v){
// 	    if(x>lar){
// 	        lar=x;
// 	    }
// 	    else if(x<lar && x>seclar){
// 	        seclar=x;
// 	    }
// 	}
// 	cout<<seclar;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {

// 	vector<int>v = {3,8,9,4,7};

// 	int lar = 0;
// 	int seclar=0;
// 	int thirdlar=0;

// 	for(auto x:v) {
// 		if(x>lar) {
// 		    thirdlar=seclar;
// 		    seclar=lar;
// 			lar=x;
// 		}
// 		else if(x<lar && x>seclar) {
// 			seclar=x;
// 		}
// 		else if(x<lar && x<seclar && x>thirdlar){
// 		    thirdlar=x;
// 		} 
// 	}
// 	cout<<thirdlar;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {

// 	vector<int>v = {3,9,6,4,7};

// 	int small = INT_MAX;
// 	int secsmall=INT_MAX;

// 	for(auto x:v) {
// 		if(x<small) {
// 		    secsmall=small;
// 			small=x;
// 		}
// 		else if(x<secsmall && x>small) {
// 			secsmall=x;
// 		}
// 	}
// 	cout<<secsmall;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {

// 	vector<int>v = {1,1,6,2,2};
// 	map<int,int>m;


// 	for(auto x:v) {
// 		m[x]++;
// 	}

// 	for(auto x:m) {

// 		cout<<x.first<<"->"<<x.second<<endl;
// 	}
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {

// 	vector<int>v = {1,1,6,2,2};
// 	set<int>s;


// 	for(auto x:v) {
// 		s.insert(x);
// 	}

// 	for(auto x:s) {

// 		cout<<x;
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int>{1,2,3,4,5};
//     vector<int>ans;
    
//     for(auto x:v){
//         ans.push_back();
//     }
    
//     for(auto x:ans){
//         cout<<x;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int>v={1,2,6,4,5};
//     sort(v.begin(),v.end());
    
//     for(auto x:v){
//         cout<<x;
//     }
    
    
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int>v={1,2,6,4,5};
//     int temp =v[0];
    
//     for(int i=1; i<v.size();i++){
//         v[i-1]=v[i];
//     }
//     v[v.size()-1]=temp;
    
//     for(auto x:v){
//         cout<<x;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	vector<int>v= {1,2,6,4,5};
// 	int temp =v[v.size()-1];

// 	for(int i=v.size()-1; i>0;i--) {
// 		v[i]=v[i-1];
// 	}
// 	v[0]=temp;

// 	for(auto x:v) {
// 		cout<<x;
// 	}
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	vector<int>v1= {1,2,6,4,5};
// 	vector<int>v2= {6,7,8,9,10};
// 	vector<int>ans= {};


// 	for(auto x:v1) {
// 		ans.push_back(x);
// 	}
// 	for(auto x:v2) {
// 		ans.push_back(x);
// 	}


// 	for(auto x:ans) {
// 		cout<<x;
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {

// 	vector<int>v = {3,8,6,4,7};
	
// 	int lar = 0;
// 	int seclar=0;
	
// 	for(auto x:v){
// 	    if(x>lar){
// 	        lar=x;
// 	    }
// 	    else if(x<lar && x>seclar){
// 	        seclar=x;
// 	    }
// 	}
// 	cout<<lar*seclar;
// }

