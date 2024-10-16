#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"enter the age for voting:"<<endl;
    cin>>age;
    try{
        if(age<18){
            throw age;
        }
    else{
        cout<<"you are eligible for voting"<<endl;
    }
}
catch(int age){
    cout<<"\nERROR:You are not eligible for voting at:"<<age<<endl;
}
    return 0;
}
//Output
/*enter the age for voting:
14

ERROR:You are not eligible for voting at:14*/
