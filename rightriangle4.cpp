#include <iostream>
using namespace std;

int main()
{   
    int n;
    cin >> n;

    int row = 1;
    /*
    while (row<=n)
    {
        int col = 1;
        int value = row;
        while (col<=row)
        {
            cout << value;
            col = col + 1;
            value = value + 1 ;
        }
        cout << endl;
        row = row + 1;

    }
    */

   while (row<=n){
    int col = 1;
    while (col<=row)
    {
        cout << row + col - 1;
        col += 1;
    }
    cout << endl;
    row +=1;
   }

}