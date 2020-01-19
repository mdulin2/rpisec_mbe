# rpisec_mbe
Binary exploitation course done by RPISEC.   

## Happenings 
- Most of the files in this work on the vanilla version of the VM. 
- I did not version control throughout and lost the first 4 labs, sadly. 
- Most of the directories have extra files in them. This is because I would run small test in order to understand the functionality of specific aspects of a program better. 
- All of the exploits are written into the ``exploit.py`` file. DO NOT USE ``pwn.py``; this will break pwntools. I defintely learned this one the hard way. 
- The final project only works with a debugger because my stack pivot ROP gadget sets a flag that turns on the debugger. However, I decided to just call this good, for the time being, considering that I created an entire ROP chain for it. 
