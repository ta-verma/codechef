from collections import Counter

T = int(input())

for _ in range(T):
	total, no_of_ele = 0, 0
	arr = []
	N = int(input())
	for _ in range(N):
		M = list(map(int, input().split()))
		K = M[1:]
		K.sort()
		no_of_ele += len(K)
		arr.append(K)

	flag = 0
	for i in range(N):
		size = len(arr[i])
		if arr[i][0] < 0 or arr[i][size-1]>0:
			flag = 1

	if flag == 1:
		summ = 0
		for i in range(N):
			neg_count = int(len(list(filter(lambda x: (x < 0), arr[i]))))
			pos_count = int(len(arr[i])) - neg_count
			summ += neg_count * pos_count;  
		total += summ
	extra_collision = dict(Counter([x for sublist in arr for x in sublist]))
	counter = 0
	for val in extra_collision.values():
		if val>1:
			counter+=1

	total+=counter 
	print(total) 