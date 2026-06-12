a = []

print("Enter 5 elements:")

for i in range(5):
    element = int(input("Enter number: "))
    a.append(element) 

for i in range(4):
    
   
    for j in range(4 - i):
        
       
        if a[j] > a[j + 1]:
          
            temp = a[j]
            a[j] = a[j + 1]
            a[j + 1] = temp

print("Sorted elements of array:")
for i in range(5):
    print(a[i])