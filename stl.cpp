// #include"stdafx.h"
#include"iostream"
#include"vector"
#include"algorithm"
#include"set"
#include"map"

using namespace std;

bool comparator(int x, int y){
    return x>y;
}

// void vectorDemo(){
//      vector<int> A = {11, 2 ,5 ,13};
//     cout<<A[1]<<endl;

//     sort(A.begin(), A.end());
//     for(int i=0; i<(A.size()); i++){
//         cout<<A[i]<<endl;
//     }

//     bool present = binary_search(A.begin(),A.end(),5);
    
//     if(present)
//     cout<<"present"<<endl;

//     A.push_back(100);
//     present = binary_search(A.begin(),A.end(),5);
//     if(present)
//     cout<<"present 100"<<endl;

//     A.push_back(100);
//     A.push_back(100);
//     A.push_back(100);
//     A.push_back(123);

//     vector<int>::iterator itt = lower_bound(A.begin(),A.end(),100); // >=
//     vector<int>::iterator itt2 = upper_bound(A.begin(),A.end(),100); // >

//     auto itt = lower_bound(A.begin(),A.end(),100); // >=    {alterantive auto of vector<int>::iterator}
//     auto itt2 = upper_bound(A.begin(),A.end(),100); // >    {alterantive auto of vector<int>::iterator}

//     cout<< *itt<<" "<< *itt2<<endl;
//     cout<< itt2 - itt<<endl;

//     sort(A.begin(), A.end(), comparator);
//     for(int i=0; i<A.size(); i++){
//         cout<<A[i]<<endl;
//     }

//     vector<int>::iterator itt3;

//     for( itt3 = A.begin(); itt3 != A.end(); itt3++){      // main printing of array
//         cout<< *itt3 <<" ";
//     }

//     for(int x: A){          // alternative printing of array
//         cout<<x<<" ";
//     }

// }

void setDemo(){

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);

    for(int x: s){
        cout<<x<<" ";
    }

    cout<<endl;

    auto it = s.find(2);
    if(it == s.end()){
         cout << "not present"<<endl;
    }else{
        cout<<"indexxx"<<*it<<endl;
    }
   
    auto it2 = s.lower_bound(-1);
    auto it3 = s.upper_bound(0);

    cout<<"lower bound of -1: "<<*it2<<endl<<"Upper bound of 1:"<<*it3<<endl;

    auto it4 = s.upper_bound(2);
    if( it4 == s.end())
    cout<<*it4<<"not found"<<endl;

    // we can erase an element in set in log(N) time.
    s.erase(-1);

    cout <<"After erasing -1 from array"<<endl;
     for(int x: s){
        cout<<x<<" ";
    }

}

void mapDemo(){

    map<int, int> N;
    N[1] = 100;
    N[2] = -1;
    N[3] = 200;
    N[10000323] = 1;
     
    map<char,int > cnt;
    string x = "Chandan Hari";

    for( char c: x){
        cnt[c]++;
    }

    cout<< cnt['a']<<" "<<cnt['z']<<endl;

}


void power_of_stl(){s
    // [x,y]
    // *add[2,3]
    //  add[10,20]
     

     set< pair<int,int> > S;
     S.insert()

}

int main(){

  // setDemo();

    // mapDemo();

    return 0;
}