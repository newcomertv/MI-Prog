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


def rm_user(var):
        if(len(userlist) < var):
                userlist[var-1]=default


def uprint(user):
        print(user.name)
        print(user.apartment)
        print(user.phonenumber)
        print(user.button)



tester=User("placeholer", 2,2,2)

add_user(default)
add_user(tester)

uprint(userlist[1])
uprint(default)