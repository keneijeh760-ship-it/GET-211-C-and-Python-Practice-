class Car:
    def __init__(self, brand, year):
        self.bran = brand
        self.yea = year


    def display_info(self):
        print(f"{self.yea} and  {self.bran}")

test  = Car("Toyota", 2024 )
test.display_info()
