#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int* dp = new int[n+1];
    dp[1] = 0;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + 1;
        if(i%2 == 0) dp[i] = std::min(dp[i], dp[i/2]+1);
        if(i%3 == 0) dp[i] = std::min(dp[i], dp[i/3]+1);
    }
    std::cout << dp[n];
    delete[] dp;
    return 0;
}