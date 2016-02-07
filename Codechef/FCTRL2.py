import sys
 
T = int(raw_input())
 
N = [int(raw_input()) for i in range(0, T)]
 
hashtab = {1:1}
for i in range(2, 101):
	hashtab[i] = hashtab[i-1]*i
 
for i in N:
	print hashtab[i]