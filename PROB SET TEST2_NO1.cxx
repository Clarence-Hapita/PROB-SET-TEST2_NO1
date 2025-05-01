#include <iostream>
using namespace std;
int main(){
    int n1,n2,n3,n4,n5;
    
    cout<<"Enter five numbers and I'll calculate its average!"<<endl;
    cout<<"First number:";
    cin>>n1;
    cout<<"Second number:";
    cin>>n2;
    cout<<"Third number:";
    cin>>n3;
    cout<<"Fourth number:";
    cin>>n4;
    cout<<"Fifth number:";
    cin>>n5;
    
    float total= n1+n2+n3+n4+n5;
    cout<<"The average is:"<<total/5;
    return 0;
}
    