f = open("output",'r') 
contents = f.read() 

for i in range(len(contents)):
    if(ord(contents[i]) == 0x9):
        pass 
    print hex(ord(contents[i]))

