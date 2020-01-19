
def leading_zeros(num):
    hex_num = hex(num)[2:] 
    while(len(hex_num) != 8):
        hex_num = "0" + hex_num
    
    return hex_num

var = 0x41414141
print leading_zeros(var) 
print len(leading_zeros(var))
