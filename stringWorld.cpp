#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    string str;
     /// Taking string input using getline()
    getline(cin,str);
    cout << "The initial string is : ";
    cout<<str<<endl;

    /// Using push_back() to insert a character at end
    str.push_back('s');
    cout<<"After Push String condition is: "<<str<<endl;

    /// Using pop_back() to delete a character at end
    str.pop_back();
    cout<<"After Pop String condition is: "<<str<<endl;

    std::string::iterator it;
    std::string::reverse_iterator revIt;

    cout<<"The String after using forward iterators "<<endl;
    for(it=str.begin(); it!=str.end(); it++)
    {
        cout<<*it;
    }
    cout<<endl;

    cout<<"The String after using backward iterators "<<endl;
    for(revIt=str.rbegin(); revIt!=str.rend(); revIt++)
    {
        cout<<*revIt;
    }
    cout<<endl;

    str.resize(13);
    cout<<"After Resize String condition is: "<<str<<endl;

    cout<<"String capacity is "<<str.capacity()<<endl;
    cout<<"The string length is "<<str.length()<<endl;

    ///Decreasing the capacity of string
    str.shrink_to_fit();
    cout<<"The new capacity after shrinking is :"<<str.capacity()<<endl;

    char ch[30];
    ///copies the substring in target character array mentioned in its arguments.
    ///It takes 3 arguments, target char array, length to be copied and starting position in string to start copying.
    str.copy(ch,13,0);
    cout<<"New string after copy: "<<ch<<endl;

    string str2 = "Probook best buying";
    cout<<"First String : "<<str<<endl;
    cout<<"Second String: "<<str2<<endl;

    str.swap(str2);
    cout<<"First String : "<<str<<endl;
    cout<<"Second String : "<<str2<<endl;
}
