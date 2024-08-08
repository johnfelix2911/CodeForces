#include <bits/stdc++.h>

int main()
{
    std::string s;
    int t, flag, c0, c1, n;
    std::cin >> t;
    for (int i=0; i<t; i++)
    {
        std::cin >> n;
        std::cin >> s;
        flag = 0;
        c0 = 0;
        c1 = 0;
        for (char c : s)
        {
            if (c == '0' && flag == 0)
            {
                flag = 1;
                c0++;
            }
            else if (c == '1')
            {
                c1++;
                flag = 0;
            }
        }
        if (c0 >= c1)
        {
            std::cout << "No" << std::endl;
        }
        else
        {
            std::cout << "Yes" << std::endl;
        }
    }
}