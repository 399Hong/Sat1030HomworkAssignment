def bottomsUp(self):
        dp = [0 for i in range(len(self.cost)+1)]
        if len(self.cost) < 2:
            return 0
        for i in range(2, len(self.cost)+1):
            dp[i] = min(self.cost[i-1] + dp[i-1], self.cost[i-2] + dp[i-2])
        return dp[-1]

# On space

def bottomsUpOptimized(self):
        prev_1, prev_2 = 0, 0 
        for i in range(2, len(self.cost)+1):
            curr = min(self.cost[i-1] + prev_1, self.cost[i-2] + prev_2)
            prev_2 = prev_1
            prev_1 = curr
        return curr
