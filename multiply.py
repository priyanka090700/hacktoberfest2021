#Taking input from the user.
num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))


#Defining a function to calculate multiplication of the two numbers.
def multiply(a,b):
    result = a * b
    print("Product of two given numbers is: ", result)

    
#Calling the function to get the desired output.
multiply(num1, num2)
