from Crypto.Cipher import AES
from pwn import * 

# Set the flag value to be 0x0031337 in order to trigger the flag :)
def get_key_cipher(): 
    key = "\x00" * 16 
    iv = p32(0xfeedfacf) + p32(0xdeadc0de) + p32(0xbabecafe) + p32(0xa55b00b) 

    cipher = AES.new(key, AES.MODE_CBC,iv) 
    pt = "1" * 16 + p32(0x31337) + "\x00" * 12
    
    # This needs to be decrypt in order for the encryption to work properly later on!
    # Honestly, did not figure this one out on my own...
    msg = cipher.decrypt(pt) 
    return key, msg

get_key_cipher()
