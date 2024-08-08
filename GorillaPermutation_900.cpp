#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        int a[n];
        int index = 0;
        for(int i = n; i > m; i--){
            a[index] = i;
            index++;
        }
        for(int j = 1; j < m +1; j++){
            a[index] = j;
            index++;
        }
        for(int i  = 0; i < n; i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}