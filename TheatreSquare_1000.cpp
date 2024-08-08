#include <iostream>
#include <cmath>

int main()
{
    long long int n, m, a;
    std::cin >> n >> m >> a;
    long long int req;
    req =  std::ceil(m/double(a)) * std::ceil(n/double(a));
    std::cout << req<<std::endl;
    return 0;
}