#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int a,b;
    ofstream out("/Users/s20181105303/Desktop/测试一.txt");
    ifstream in("/Users/s20181105303/Desktop/测试二.txt");
    if(in.is_open())
    {
        in>>a>>b;
        cout<<a<<"  "<<b<<endl;
        in.close();
    }
    if(out.is_open())
    {
        out<<"c = "<<a+b<<endl;
        cout<<"c = "<<a+b<<endl;
        out.close();
    }
    
    
    return 0;
}
