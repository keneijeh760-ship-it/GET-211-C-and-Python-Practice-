def greet(name, message = "Welcome"):
    return f"{message} {name}"

test1 = greet("Jim", "Hello")
test2 = greet('Matt')
print(test1)
print(test2)
