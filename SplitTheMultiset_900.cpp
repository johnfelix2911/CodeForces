#include <bits/stdc++.h>

int main()
{
    int t, k, n, no_of_op;
    std::cin >> t;
    for (int i=0; i<t; i++)
    {
        std::cin >> n;
        std::cin >> k;
        if (n == 1)
        {
            std::cout << "0" << std::endl;
        }
        else
        {
            no_of_op = (int)std::ceil((n - 1)/(float)(k - 1));
            std::cout << no_of_op << std::endl;
        }
    }
    return 0;
}