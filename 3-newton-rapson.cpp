#include <bits/stdc++.h>
#define E 0.001
#define F(x) x *x - 3 * x + 2
#define F1(x) 2 * x - 3
using namespace std;
int main()
{
    float x0, x1, x2, f0, f1, f2, root;
    int counter = 1;
    printf("Enter the value of x0 : ");
    scanf("%f", &x0);
    while (1)
    {
        f0 = F(x0);
        f1 = F1(x0);
        x1 = x0 - (f0 / f1);
        f2 = f0 / f1;
        printf("Step is %d X1 = %f \n", counter, x1);

        if (fabs(f2) < E)
        {
            printf("Step is %d X1 = %f \n", counter, x1);
            break;
        }
        else
        {
            x0 = x1;
        }
        counter++;
    }
    return 0;
}