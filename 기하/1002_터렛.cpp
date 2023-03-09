#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int x1, y1, r1, x2, y2, r2, d;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        
        d = (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2);
        
        int a1, a2;
        
        a1 = (r1-r2) * (r1-r2);
        a2 = (r1+r2) * (r1+r2);
        
        if(d == 0)
        {
            if(a1 == 0)
                cout << "-1" << '\n';
            else
                cout << "0" << '\n';
        }
        else if (d == a1 || d == a2)
            cout << "1" << '\n';
        else if (a1 < d && d < a2)
            cout << "2" << '\n';
        else
            cout << "0" << '\n';
    }

}