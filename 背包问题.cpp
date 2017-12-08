//  Copyright &#169; 2017年 郑炜强. All rights reserved.

#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n=4,v=5;
    int best[6][6]={0};
    int need[5]={0,2,3,4,1},value[5]={0,2,5,3,2};
    for (int j=1;j<=v;j++)
    {
        best[0][j]=0;
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=v;j++)
        {
            if (j<need[i])
            {
                best[i][j]=best[i-1][j];
            }
            else best[i][j]=max(best[i-1][j-need[i]]+value[i],best[i-1][j]);
        }
    }
    cout<<best[4][5]<<endl;
}
