#include <bits/stdc++.h>
using namespace std;

int main()
{
    double timeCharged;
    cin >> timeCharged;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    auto f = [](double x) {
        double n = x * 2, result;
        if(n >= 8) result = 8.0;
        else result = n;

        return result;
    };

    cout << f(timeCharged);
    
    return 0;
}
