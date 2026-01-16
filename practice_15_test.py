def calculate_price(cost, tax_rate = 0.05):
    return cost * (1 - tax_rate)

test = calculate_price(59)

print(test)
