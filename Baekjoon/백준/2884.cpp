#include <iostream>
using namespace std;

int main()
{
    int H;
    int M;

    cin>>H>>M;

    if(M < 45){
        M = M + 15;
        H--;
        if(H < 0){
            H = 23;
        }
    }
    else{
        M = M - 45;
    }

    cout << H << " " << M;

    return 0;
    
}

