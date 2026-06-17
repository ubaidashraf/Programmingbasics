print("1-Add")
print("2-Sub")
print("3-multi")
print("4-div")
choice = int(input("Enter choice"))
result=0
if(choice in [1,2,3,4]):
  num1 = int(input("Enter first number"))
  num2 = int(input("Enter second number"))

if(choice==1):
     result= num1+num2
elif(choice==2):
    result = num1-num2
elif(choice==3):
    result= num1 // num2
elif(choice==4):
    result = num1*num2
    
    
else:
    print("Invalid Choice")

print(f"Result is {result}")