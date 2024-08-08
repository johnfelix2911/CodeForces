#include <iostream>
#include <bits/stdc++.h>

int main()
{
    int t, n, max, count;
    scanf("%d \n", &t);
    while (t--)
    {
        scanf("%d \n", &n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d ", &a[i]);
        }
        max = 0;
        count = 0;
        for (int i=0; i<n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
        }
        for (int i=0; i<n; i++)
        {
            if (max == a[i])
            {
                count++;
            }
        }
        if (count % 2 == 1)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::sort(a, a + n);
            while (true)
            {
                n = n - count;
                if (n <= 0)
                {
                    std::cout << "NO" << std::endl;
                    break;
                }
                count = 0;
                max = 0;
                for (int j = 0; j<n; j++)
                {
                    if (max < a[j])
                    {
                        max = a[j];
                    }
                }
                for (int j=0; j<n; j++)
                {
                    if (max == a[j])
                    {
                        count++;
                    }
                }
                if (count % 2 == 1)
                {
                    std::cout << "YES" << std::endl;
                    break;
                }
            }
        }
    }
}