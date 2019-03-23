class User:
    def __init__(self, name, apartment, phonenumber, button):
        self.name = name
        self.apartment = apartment
        self.phonenumber = phonenumber
        self.button = button


userlist = []

name = "name"
apartment = 0
phonenumber = 0
button = 0

default = User(name, apartment, phonenumber, button)


def add_user(user):
    if (type(user) == User):
        userlist.append(user)


add_user(default)

print(userlist[0])
