#include<bits/stdc++.h>
using namespace std;
struct students{
    vector<int> roll{5};
    vector<string> name{5};
    vector<int> age{5};
};
int main(){
    struct students s;
    for(int i=0;i<5;i++)
    {
        cout<<"Roll No : ";
        cin>>s.roll[i];
        cout<<"\n"<<"Name : ";
        cin>>s.name[i];
        cout<<"\n"<<"Age : ";
        cin>>s.age[i];
        cout<<"\n";
    }
    int no;
    cin>>no;
    cout<<s.roll[no-1]<<"  "<<s.name[no-1]<<"  "<<s.age[no-1];
}
