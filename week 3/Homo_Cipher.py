# Homophone Cipher
import random
homophone_cipher = {'a': ('D', 9),'b':'X','c':('S',4),'d':'F','e':('Z',7,2,1),'f':'E','g':'H','h':'C','i':'V','j':'I','k':'T','l':'P','m':'G','n':('A',5),'o':('Q',0),'p':'L','q':'K','r':'J','s':('R',4),'t':('U',6),'u':'O','v':'W','w':'M','x':'Y','y':'B','z':'N'}
input_string = input("Enter the string to be encrypted: ")
input_string = input_string.lower()
output_string = ""
for i in input_string:
 if i in homophone_cipher:
    if isinstance(homophone_cipher[i], tuple):
        output_string += str(random.choice(homophone_cipher[i]))
    else:
        output_string += homophone_cipher[i]
print(output_string)

decoded_string = ""
for i in output_string:
    for key, value in homophone_cipher.items():
        if isinstance(value, tuple):
            if str(i) in map(str, value):
                decoded_string += key
                break
        elif i == value:
            decoded_string += key
            break
print(decoded_string)