def minNumberOfCoins(n , denoms):
    numberOfCoins = [float("inf") for amt in range(n+1)]
    numberOfCoins[0] = 0
    
    for denom in denoms:
        for amt in range(len(numberOfCoins)):
            if denom <= numberOfCoins[amt]:
                numberOfCoins[amt] = min(numberOfCoins[amt], 1+ numberOfCoins[amt - denom])
    return numberOfCoins[n] if numberOfCoins[n] != float("inf") else -1

print(minNumberOfCoins(10 , [1, 5 , 7]))