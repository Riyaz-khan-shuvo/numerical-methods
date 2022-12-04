#include <bits/stdc++.h>
#define E 0.1
#define F(x) ((x * x * x) + 4 * x * x - 3 * x - 18)
using namespace std;
int main()
{
    float x0, x1, x2, f0, f1, f2, root, a, b, dx, i = 0;
    printf("Enter the value of a and b : ");
    scanf("%f %f", &a, &b);
    scanf("%f", &dx);
    while (1)
    {
        i++;
        x1 = a;
        x2 = dx + x1;
        while (1)
        {
            f1 = F(x1);
            f2 = F(x2);
            if (f1 * f2 > 0)
            {
                printf("The equation is not calculate able!");
                break;
            }
            else
            {
                x0 = (x1 + x2) / 2;
                f0 = F(x0);
                if (f1 * f0 < 0)
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
                root = (x1 + x2) / 2;
                printf("The root is : %f\n", root);
            }
        }
        if (x2 < b)
        {
            a = x2;
        }
        else
        {
            break;
        }
    }

    return 0;
}