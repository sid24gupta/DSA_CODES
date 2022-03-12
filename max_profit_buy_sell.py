prices = [7,1,5,3,6,4]
mininum = prices[0]
profit = 0
for price in prices:
    mininum = min(mininum,price)
    diff = price - mininum
    profit = max(profit, diff)
print(profit)