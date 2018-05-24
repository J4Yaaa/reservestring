#include <iostream>
using namespace std;
#include <string>

void reservestring(string& str,int len,int index)
{
    //ABCDEFGH
    //ABCDEFGHABCDEFGH
    //     FGHABCDE  
    str += str;
    str.erase(0,index+1);
    str.erase(len,len-index-1);
}

int main()
{
    string str("ABCDEFGH");
    cout<<str<<endl;
    reservestring(str,8,4);
    cout<<str<<endl;
    return 0;
}
