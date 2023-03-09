l = [0,0,0,0,0,0,0,0,0,0]
l2 = [0,0,0,0,0,0,0,0,0,0]

print (l)
print (l2)
ch =1
while(ch==1):
	key = int(input("enter key in list 1 "))
	add=key%10
	for i in l:
		if l[add]>0:
			add=+1
	l[add]=key
	
	
	
	
	key = int(input("enter key in list 2 "))
	add=key%10
	for i in l2:
		if l2[add]>0:
			add=+1
	l2[add]=key
	
	print(l)
	print(l2)
	ch= int(input("do you wish to continue 1 0 "))
	
#delete
ch =1
while(ch==1):
	delete = int(input("enter no to be deleted "))
	add=delete%10
	if l[add]>0:	
		l[add] =0
		
	print (l)
	ch= int(input("do you wish to continue 1 0 "))

#traverse
key = int(input("enter no to be search "))
for i in range(10):
	if l[i]==key:	
		
		break
print("loc",i)	
	
	
#union
print(union)
l=set(l)
l2=set(l2)
u =l.union(l2)
u = list(u)
print(u)

#intersection
print(intersection)
i =l.intersection(l2)
i = list(i)
print(i)

#difference
print(difference)

d= l-l2
d = list(d)
print(d)
