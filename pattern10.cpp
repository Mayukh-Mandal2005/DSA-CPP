#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;

    while (row<=n)
    {
        int col = 1;
        int value = row;
        while (col<=n)
        {
            cout << value;
            value += 1;
            col += 1;
        }
        cout << endl;
        row += 1;

                
    }
    
}