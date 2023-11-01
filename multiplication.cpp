#include <iostream>
using namespace std;
 int main()

{
    int x,b,c,d;
    cout<<"Multiplication Table"<<endl;
    cout<<"Range: ";
    cin>>c;
    cout<<"Enter Number: ";
    cin>>d;
    cout<<"Multiplication Table from "<<c<<" to "<<d<<endl;
    for (b=1;b<=c;b++){
    for (x=1;x<=d;x++){
        if (x<=d-1)
            cout<<" "<<x<<"x"<<b<<"="<<b*x;
        else
            cout<<" "<<x<<"x"<<b<<"="<<b*x;
        }
        cout<<""<<endl;
    }
}
