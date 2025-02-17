import string
letter=string.ascii_uppercase
for j in range(26):
 for i in letter:
    print(chr(((ord(i)+j-65)%26)+65)," ")
    


