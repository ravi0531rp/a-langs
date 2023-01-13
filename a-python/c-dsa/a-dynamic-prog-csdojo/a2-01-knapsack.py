# 0-1 knapsack
# Weights   1   2   4   2   5
# Values    5   3   5   3   2

def knapsack(weights, index, capacity, values):
    if index == 0 or capacity <=0:
        return 0
    
    if weights[index] > capacity:
        return knapsack(weights, index - 1, capacity, values)
    
    result1 = values[index] + knapsack(weights, index - 1, capacity - weights[index], values)
    result2 = knapsack(weights, index - 1, capacity, values)

    return max(result1, result2)

def knapsack_memoised(weights, index, capacity, values, memo):
    if index == 0 or capacity <=0:
        return 0
    
    if memo[index][capacity]:
        return memo[index][capacity]
    
    if weights[index] > capacity:
        return knapsack_memoised(weights, index - 1, capacity, values, memo)
    
    result1 = values[index] + knapsack_memoised(weights, index - 1, capacity - weights[index], values, memo)
    result2 = knapsack_memoised(weights, index - 1, capacity, values, memo)

    memo[index][capacity]= max(result1, result2)
    return memo[index][capacity]


if __name__ == "__main__":
    weights = [1,2,4,2,5]
    values = [5,3,5,3,2]
    capacity = 10
    value = knapsack(weights, len(weights) - 1, capacity, values)
    print(value)

    weights = [1,2,4,2,5]
    values = [5,3,5,3,2]
    memo = [[None for x in range(capacity + 1)] for y in range(len(weights))]

    print(knapsack_memoised(weights, len(weights) - 1, capacity, values, memo))