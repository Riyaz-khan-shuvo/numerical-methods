#include <bits/stdc++.h>
#define ERR 0.001
#define f(x) x *x - 3 * x + 2
#define f1(x) 2 * x - 3
using namespace std;
int main()
{
    float x0, x1, f0, f1, f2, counter = 0;
    cout << "Enter the value of x0 = ";
    cin >> x0;
    while (1)
    {
        f0 = f(x0);
        f1 = f1(x0);
        x1 = x0 - (f0 / f1);
        f2 = f0 / f1;
        cout << "Step " << counter << " x1= " << x1 << endl;
        if (fabs(f2) < ERR)
        {
            cout << "Step " << counter << " Root is " << x1 << endl;
            break;
        }
        else
        {
            x0 = x1;
            counter++;
        }
    }
    return 0;
}
