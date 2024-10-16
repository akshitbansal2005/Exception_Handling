#include <iostream>
using namespace std;

int main() {
    float n1,n2,answer;
    cout<<"enter the values of number 1 and 2:"<<endl;
    cin>>n1>>n2;
    try{
        if(n2==0){
            throw n2;
        }
    else{
        answer=n1/n2;
        cout<<"Answer = "<<answer<<endl;
    }
}
catch(float num){
    cout<<"\nERROR:division by "<<num<<endl;
}
    return 0;
}
//Output
/*enter the values of number 1 and 2:
1.0
0.0

ERROR:division by 0*/
