// this program asks user for a number l. Then it will use for loop to print l starts in a row. Then it will
// repeat this printing process in following line with l-1 stars and so on until last line which prints only 1 star. 

#include <iostream>

using namespace std;
int main() {
    unsigned int l{};
    cout << "Please give me a positive number: ";
    cin >> l;

    for(int j=l; j> 0; --j)
    {
        for(int i=0; i<j; ++i)
        {
            cout<<"*";
        }
        cout<<endl;
    }
        

    return 0;
}