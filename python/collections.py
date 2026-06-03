# Python's built-in data structures: lists, tuples, sets, and dictionaries.
#list: ordered, mutable, allows duplicate elements
words = ['cat', 'window', 'defenestrate']
for w in words:
    print(w, len(w))

words.append('tiger')
print(words[3])

#words.remove('window')

print(words)
print(words[1])

words.pop(1)
print("words after pop:", words)

#tuple: ordered, immutable, allows duplicate elements
t = (1, 2, 3)
print("tuple t:", t)

coordinates = (10.0, 20.0)
print("coordinates:", coordinates)

#sets: unordered, mutable, no duplicate elements
colours = {'red', 'green', 'blue'}
print("colours:", colours)
colours.add('yellow')
print("colours after adding yellow:", colours)

#dictionaries: unordered, mutable, key-value pairs
person = {'name': 'AbdulRehman', 'age': 30, 'city': 'New York'}
persons = {
    'Yameen': {'age': '19', 'city': 'Banihal'},
    'Abdullah': {'age': '21', 'city': 'Pulwama'},
    'AbdulRehman': {'age': '23', 'city': 'Pulwama'}
}

print(persons['AbdulRehman']['city'])