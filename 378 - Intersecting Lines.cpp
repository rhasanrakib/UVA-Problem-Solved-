
#include <bits/stdc++.h>
using namespace std;

#define pdd pair<double, double>


pdd lineLineIntersection(pdd A, pdd B, pdd C, pdd D)
{
    // Line AB represented as a1x + b1y = c1
    double a1 = B.second - A.second;
    double b1 = A.first - B.first;
    double c1 = a1 * (A.first) + b1 * (A.second);

    // Line CD represented as a2x + b2y = c2
    double a2 = D.second - C.second;
    double b2 = C.first - D.first;
    double c2 = a2 * (C.first) + b2 * (C.second);

    double determinant = a1 * b2 - a2 * b1;
    double determinant1 = a1 * c2 - a2 * c1;
    double determinant2 = b1 * c2 - b2 * c1;

    if (determinant == 0)
    {
        if (determinant1 == 0 && determinant2 == 0)
        {
            return make_pair(FLT_MIN, FLT_MIN);
        }
        return make_pair(FLT_MAX, FLT_MAX);
    }
    else
    {
        double x = (b2 * c1 - b1 * c2) / determinant;
        double y = (a1 * c2 - a2 * c1) / determinant;
        return make_pair(x, y);
    }
}

// Driver code
int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int cases;
    while (cin >> cases)
    {
        cout << "INTERSECTING LINES OUTPUT" << endl;
        for (int i = 1; i <= cases; i++) {
            double x1, x2, x3, x4, y1, y2, y3, y4;
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
            pdd A = make_pair(x1, y1);
            pdd B = make_pair(x2, y2);
            pdd C = make_pair(x3, y3);
            pdd D = make_pair(x4, y4);

            pdd intersection = lineLineIntersection(A, B, C, D);

            if (intersection.first == FLT_MAX && intersection.second == FLT_MAX)
            {
                cout << "NONE" << endl;
            }
            else if (intersection.first == FLT_MIN && intersection.second == FLT_MIN)
            {
                cout << "LINE" << endl;
            }

            else
            {
                double x = intersection.first;
                double y = intersection.second;

                x = (x == -0.00) ? x = 0.000 : x;
                y = (y == -0.00) ? y = 0.000 : y;

                printf("POINT %.2lf %.2lf\n", x, y);

            }
            if (i == cases)
                cout << "END OF OUTPUT" << endl;
        }
    }

    return 0;
}
