#include <iostream>
#include <fstream>
using namespace std;
int main(void){
    char cadena[128];
    ifstream fe("archivo.txt");
    int t;
    string s;
    fe >> cadena;
    t = stoi(cadena);
    for(int i=0;i<t;i++)
    {
        fe >> s;
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
    fe.close();
    return 0;
}
