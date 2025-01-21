import re

def Emailchecker(z):
    '''x = "^\S+@\S+\.\S+$" '''
    x=r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,7}\b'
    objs = re.search(x, z)
    try:
        if objs.string == z:
            print("Valid  Gmail")
    except:
        print("Invalid Gmail")
z=input("enter Email ")
Emailchecker(z)
