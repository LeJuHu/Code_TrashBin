def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if y != 0:
        return x / y
    else:
        return "Error: Cannot divide by zero."

print("계산기를 시작합니다.")
print("사용 가능한 연산: +, -, *, /")
operation = input("원하는 연산을 입력하세요 (+, -, *, /): ")

if operation in ('+', '-', '*', '/'):
    num1 = float(input("첫 번째 숫자를 입력하세요: "))
    num2 = float(input("두 번째 숫자를 입력하세요: "))

    if operation == '+':
        print(f"{num1} + {num2} = {add(num1, num2)}")
    elif operation == '-':
        print(f"{num1} - {num2} = {subtract(num1, num2)}")
    elif operation == '*':
        print(f"{num1} * {num2} = {multiply(num1, num2)}")
    elif operation == '/':
        print(f"{num1} / {num2} = {divide(num1, num2)}")
else:
    print("유효하지 않은 연산입니다. +, -, *, / 중 하나를 선택하세요.")
