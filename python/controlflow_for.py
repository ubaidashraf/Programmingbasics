# words = ['cat', 'window', 'defenestrate']
# for w in words:
#     print(w, len(w))


#Dictionary / Collection in python
users = {'AbulRehman': 'active', 'Yameen': 'active'}
Dupli = {'AbulRehman': 'active', 'Abdullah': 'inactive', 'Yameen': 'active'}
# More Examples
# prices = {'coffee': 3.50, 'tea': 2.75, 'juice': 4.00}
# capitals = {'France': 'Paris', 'Japan': 'Tokyo', 'Australia': 'Canberra'}
# inventory = {'apples': 100, 'bananas': 50, 'oranges': 75}
# config = {
#     'theme': 'dark',
#     'font_size': 14,
#     'autosave': True,
#     'language': 'en'
# }
for user, status in users.copy().items():
    if status == 'inactive':
        del users[user]

active_users = {}
for user, status in users.items():
    if status == 'active':
        active_users[user] = status

print(active_users)
