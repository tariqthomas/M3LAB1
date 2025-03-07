#include <iostream>
using namespace std;

int main() {

    int eat;
    

    cout <<"Do you eat 2 apples or 4 oranges"<< endl;
    cout <<" type 2 or 4 ";
    cin >> eat;

    if (2 == eat) {
        
        cout<<"you eat 2 apples"<< endl;}
    

        else if (4 == eat) {

 cout <<"you eat 4 oranges"<< endl;
        }

        else{
            cout << "you stay hungry"<< endl;
        }

    cout <<"thanks for playing!"<< endl;

    return 0;
}