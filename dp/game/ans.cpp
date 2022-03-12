    bool divisorGame(int n) {
        vector<int>dp(n+1, 0);
        dp[2] = 1;
        // 0 false
        // 1 true
             
        for(int i=4;i<=n;i++)
        // building dp table
            for(int j=1;j<i;j++)
                if(i%j == 0)
                    
                    if (1-dp[i-j] == 1) {
                        dp[i]=1-dp[i-j]
                        break;
                    }
                    // we can break to optmize the code
                    //if we see a true 
        return dp[n] > 0;        
    }
