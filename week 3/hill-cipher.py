import numpy as np
dict={
    'a':0,'b':1,'c':2,'d':3,'e':4,'f':5,'g':6,'h':7,'i':8,'j':9,'k':10,'l':11,'m':12,'n':13,
      'o':14,'p':15,'q':16,'r':17,'s':18,'t':19,'u':20,'v':21,'w':22,'x':23,'y':24,'z':25
}
#
# input_string = input("Enter the string: ")
order=3
# key = input("Enter the key must be nine characters long: ")
# key = key.lower()
key="gyongkurp"
plain="act"
key=key.lower()
matrix = np.zeros((order, order), dtype=int)

for i in range(order):
    for j in range(order):
        matrix[i][j] = dict[key[i * order + j]]

print("Matrix:")
print(matrix)

plain = plain.lower()

for i in plain:
        dict[i]
        
        
ecnryption_matrix = np.zeros((order, 1), dtype=int)

for i in range(order):
    sum=0
    for j in range(order):
        sum+= matrix[i][j]*dict[plain[i]]
    print("sum",sum)
    sum=sum%26
    ecnryption_matrix[i]=sum
print("Encrypted Matrix:")
print(ecnryption_matrix)
for encrypted in ecnryption_matrix:
    for key, value in dict.items():
        if value == encrypted:
            print(key, end="")
            