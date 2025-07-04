#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
    int i1, j1, steps;
    
    for(int i=0;i<5;i++){
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                i1 = i;
                j1 = j;
            }
        }
    }

    steps = ((i1>2)?(i1-2):(2-i1)) + ((j1>2)?(j1-2):(2-j1));
    cout<<steps;
    // trick ::-> loop er vitore i ke sudden modify; 😁
    
    
}
