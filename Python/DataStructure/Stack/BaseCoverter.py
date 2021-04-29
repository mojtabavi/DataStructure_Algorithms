from app import ArrayStack

def baseCovertor(number, base):
    digits = "0123456789ABCDEF"
    s = ArrayStack()
    while(number > 0):
        rem = number % base
        s.push(rem)
        number = number // base
    new_string = ""
    while not s.isEmpty():
        new_string = new_string + digits[s.pop()]
    return new_string


print(baseCovertor(80,2))