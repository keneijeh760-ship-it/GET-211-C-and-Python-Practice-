class EvenCurrentSumCalculator:
    def __init__(self, currents):
        self.currents = list(currents)

    def positive_even_sum(self):
        sum = 0

        for current in self.currents:
            if current % 2 == 0 and current > 0:
                current += sum

        return sum
