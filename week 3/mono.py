# Raja Umer Saleem 2023-CS-609
# Monoalphabetic Cipher
# and its further required types
import random
import string
def random_map():
    letters = list(string.ascii_uppercase)
    shuffled = letters[:]
    random.shuffle(shuffled)
    return dict(zip(letters, shuffled))

def revers_map(mapping):
    return {v: k for k, v in mapping.items()}

def encrypt_with_mapping(text, mapping):
    return ''.join(mapping.get(c, c) for c in text.upper())

def decrypt_with_mapping(text, reverse_map):
    return ''.join(reverse_map.get(c, c) for c in text.upper())

def cisercipher(text, key):
    return ''.join(chr(((ord(c) - 65 + key) % 26) + 65) if c.isalpha() else c for c in text.upper())

def cisercipher_decrypt(text, key):
    return ''.join(chr(((ord(c) - 65 - key) % 26) + 65) if c.isalpha() else c for c in text.upper())

def multiplicative(text, key):
    return ''.join(chr(((ord(c) - 65) * key % 26) + 65) if c.isalpha() else c for c in text.upper())

def mod_inverse(a, m):
    for x in range(1, m):
        if (a * x) % m == 1:
            return x
    return -1

def mul_decrypt(text, key):
    inverse_key = mod_inverse(key, 26)
    if inverse_key == -1:
        return "Invalid Key"
    return ''.join(chr(((ord(c) - 65) * inverse_key % 26) + 65) if c.isalpha() else c for c in text.upper())

def affine(text, key1, key2):
    return ''.join(chr(((ord(c) - 65) * key1 + key2) % 26 + 65) if c.isalpha() else c for c in text.upper())

def affine_dec(text, key1, key2):
    inverse_key1 = mod_inverse(key1, 26)
    if inverse_key1 == -1:
        return "Invalid Key"
    return ''.join(chr(((ord(c) - 65 - key2 + 26) * inverse_key1 % 26) + 65) if c.isalpha() else c for c in text.upper())

def main():
    text = "UNIVErsity of LAGOS"
    shift_key = 4
    mult_key = 5
    aff_key1, aff_key2 = 7, 2
    
    encrypt=  cisercipher(text, shift_key)

    print("Shift Cipher Encrypted:", encrypt)
    print("Shift Cipher Decrypted:", cisercipher_decrypt(encrypt, shift_key))
    
    mul_enc=multiplicative(text, mult_key)
    print("Multiplicative Cipher Encrypted:", mul_enc)
    print("Multiplicative Cipher Decrypted:", mul_decrypt(mul_enc, mult_key))
    affine_enc = affine(text, aff_key1, aff_key2)
    print("Affine Cipher Encrypted:", affine_enc)
    print("Affine Cipher Decrypted:", affine_dec(affine_enc, aff_key1, aff_key2))
    
    random_mapping = random_map()
    reverse_keys = revers_map(random_mapping)
    random_enc = encrypt_with_mapping(text, random_mapping)
    print("Random Mapping Cipher Encrypted:", random_enc)
    print("Random Mapping Cipher Decrypted:", decrypt_with_mapping(random_enc, reverse_keys))
    
if __name__ == '__main__':
 main()
