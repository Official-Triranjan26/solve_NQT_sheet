// Concatenate one string to another

#include<bits/stdc++.h>
using namespace std;

string concatenateSrtings(string str1,string str2)
{
    return str1.append(str2);

}
int main(){
    string str1="Hello";
    string str2="World";
    cout<<concatenateSrtings(str1,str2);
    return 0;
}