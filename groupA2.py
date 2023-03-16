A = [0,0,0,0,0];
B = [0,0,0,0,0];

print(A)
ch = 1
cnt = 0
# INSERTION
while (ch == 1):
	if (cnt < 5):
		key = int(input("Enter Key: "))
		add = key % 5;

		for i in A:
			if A[add] > 0:
				add+=1
		A[add] = key
		print(A)

		ch = int(input("0/1: "))
		cnt += 1
	else:
		print("Already FULL")
		break

#TRAVERSE
choice = 1
while (choice == 1):
	target = int(input("Enter target: "))
	key = target % 5
	for i in A:
		if (A[key] == target):
			print("Target found at key: ", key)
			break
		else:
			key+=1
	choice = int(input("0/1: "))

#DELETION
delete = 1
while(delete == 1):
	target = int(input("Enter element to delete: "))
	key = target % 5
	for i in A:
		if (A[key] == target):
			A[key] = 0
			print(A)
			break
		else:
			key+=1
	delete = int(input("0/1: "))


# setb = 1
# cntb = 0
# while (setb == 1):
# 	if (cntb < 5):
# 		key = int(input("Enter Key: "))
# 		add = key % 5;

# 		for i in B:
# 			if B[add] > 0:
# 				add+=1
# 		B[add] = key
# 		print(B)

# 		setb = int(input("0/1: "))
# 		cntb += 1
# 	else:
# 		print("Already FULL")
# 		break
