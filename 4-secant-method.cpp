#include <bits/stdc++.h>
#define E 0.1
#define F(x) x *x - 4 * x - 10
using namespace std;
int main()
{
    float x0, x1, x2, f0, f1, f2, root;
    int counter = 0;
    printf("Enter the value of X1 and X2 : ");
    scanf("%f %f", &x1, &x2);

    while (1)
    {
        f1 = F(x1);
        f2 = F(x2);
        x0 = (((f1 * x1) - (f1 * x2)) / (f2 - f1));
        f0 = F(x0);
        printf("Step : %d X1 = %f\n", counter, x0);
        if (fabs(f0) < E)
        {
            root = (((f1 * x1) - (f1 * x2)) / (f2 - f1));
            printf("Step : %d X1 = %f\n", counter, x1);
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