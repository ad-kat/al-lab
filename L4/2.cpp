#include <iostream>
using namespace std;
int count;
int Knapsack(int W, int wt[], int val[], int i, int** dp)
{
    count++;
    if (i < 0)
    {
        count++;
        return 0;
    }
    count++;
    if (dp[i][W] != -1)
    {
        count++;
        return dp[i][W];
    }
    count++;
    if (wt[i] > W)
    {
        count++;
        dp[i][W] = Knapsack(W, wt, val, i - 1, dp);
        count++;
        return dp[i][W];
    }
    else
    {
        count++;
        dp[i][W] = max(val[i] + Knapsack(W - wt[i], wt, val, i - 1, dp), Knapsack(W, wt, val, i - 1, dp));
        count++;
        return dp[i][W];
    }
}
int knapSack(int W, int wt[], int val[], int n)
{
    count++;
    int** dp;
    count++;
    dp = new int*[n];
    count++;
    count++;
    for (int i = 0; i < n; i++)
    {
        count++;
        dp[i] = new int[W + 1];
        count++;
    }
    count++;
    for (int i = 0; i < n; i++)
    {
        count++;
        count++;
        for (int j = 0; j < W + 1; j++)
        {
            count++;
            dp[i][j] = -1;
            count++;
        }
    }
    count++;
    return Knapsack(W, wt, val, n - 1, dp);
}
int main()
{
    int val[] = {40,35,50,65};
    int wt[] = { 9,6,8,9};
    int W;cout<<"W:";cin>>W;//25
    int n;cout<<"n:";cin>>n; //= 4;
    cout<<"The profit is "<<knapSack(W, wt, val, n)<<endl;
    cout<<"The step count is "<<count;
    return 0;
}
