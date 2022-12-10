#include <bits/stdc++.h>
#define E 0.001
#define F(x) (x * x * x) - x - 1
using namespace std;
int main()
{
    float x0, x1, x2, f0, f1, f2, root;
    int c = 1;
    printf("Enter the value of x1 and x2 : ");
    scanf("%f %f", &x1, &x2);
    while (1)
    {
        f1 = F(x1);
        f2 = F(x2);
        if (f1 * f2 > 0)
        {
            printf("the equation is not calculatable !!!");
            break;
        }
        else
        {
            x0 = (x1 + x2) / 2;
            f0 = F(x0);
            printf("In %d iteration the result is : %f\n", c, x0);
            if (f0 * f1 < 0)
            {
                x2 = x0;
            }
            else
            {
                x1 = x0;
            }
        }
        if (fabs(f0) < E)
        {
            root = x1 + x2 / 2;
            printf("The root is : %f", root);
            break;
        }
        c++;
    }

    return 0;
}