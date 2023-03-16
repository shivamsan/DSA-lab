A = [0]*5
B = [0]*5

for i in A:
	A[i] = int(input("Enter Value Set 1 "))

for i in B:
	B[i] = int(input("Enter Value Set 2 "))

A1 = set(A)
B1 = set(B)

ch = 1
while (ch == 1):
	print("1. Union")
	print("2. Intersection")

	choice = int(input("Enter choice: "))
	if (choice == 1):
		print(A1.union(B1))
	else:
		print(A1.intersection(B1))
	ch = int(input("Do u wanna continue: "))