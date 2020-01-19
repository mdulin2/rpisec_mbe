from ctypes import * 

libc= "/lib/i386-linux-gnu/libc.so.6"

libc = CDLL(libc) 

print libc.rand()
