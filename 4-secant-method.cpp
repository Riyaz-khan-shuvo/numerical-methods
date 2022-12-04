#include <bits/stdc++.h>
#define E 0.001
#define F(x) x *x - 4 * x - 10

using namespace std;
int main()
{
    float x0, x1, x2, f0, f1, f2, root, counter = 0;
    printf("Enter the value of X1 and X2 : ");
    scanf("%f %f", &x1, &x2);
    while (1)
    {
        f1 = F(x1);
        f2 = F(x2);
        x0 = (((f1 * x1) - (f1 * x2)) / (f2 - f1));
        f0 = F(x0);
        cout << "Step " << counter << " x1= " << x1 << endl;
        if (fabs(f0) < E)
        {
            root = (((f1 * x1) - (f1 * x2)) / (f2 - f1));
            printf("Root is : %f", root);
            break;
        }
        else
        {
            x1 = x2;
            x2 = x0;
            counter++;
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// #define ERR 0.001
// #define f(x) x *x - 4 * x - 10
// using namespace std;
// int main()
// {
//     float x1, x2, x3, f1, f3, f2, root, counter = 0;
//     cout << "Enter the value of x1 = ";
//     cin >> x1;
//     cout << "Enter the value of x2 = ";
//     cin >> x2;
//     while (1)
//     {
//         f1 = f(x1);
//         f2 = f(x2);
//         x3 = x2 - (f2 * (x2 - x1)) / (f2 - f1);
//         f3 = f(x3);
//         cout << "Step " << counter << " x1= " << x1 << endl;
//         if (fabs(f3) < ERR)
//         {
//             cout << "Step " << counter << " Root is " << x1 << endl;
//             break;
//         }
//         else
//         {
//             x1 = x2;
//             x2 = x3;
//             counter++;
//         }
//     }
//     return 0;
// }
