class BankAccount:
    def __init__(self, name, balance):
        self.name = name
        self.__balance =balance


    def get_balance(self):
        return self.__balance


    def deposit(self, amount):
        self.__balance += amount
        return self.__balance
