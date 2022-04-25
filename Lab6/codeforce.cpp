#include <iostream>
using namespace std;
int main(void){
    int t;
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        if(s.size()%2==0){
            string left = s.substr(0,s.size()/2);
            string right = s.substr(s.size()/2,(s.size())/2);
            if (left==right){
                cout<<"YES";
            }else{
                cout<<"NO";
            }
        }else{
            cout<<"NO";
        }
        cout<<"\n";
    }
    return 0;
}
