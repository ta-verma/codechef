def give_list(H, num):
	T = H;
	T.remove(num)
	return T


def helping_tracy(H, K, memo={}):
	if K in memo:
		return memo[K]
	if K == 0:
		return []
	if K < 0:
		return None

	shortest_combination = None

	for i, num in enumerate(H):
		remainder = K - num
		
		remainder_combination = helping_tracy(give_list(H, num), remainder, memo)
		
		
		if remainder_combination is not None:
			remainder_combination.append(num)
			combination = remainder_combination

			if (shortest_combination is None) or (len(combination) < len(shortest_combination)):
				shortest_combination = combination


	memo[K] = shortest_combination
	return shortest_combination


T = int(input())
for _ in range(T):
	N, K = map(int, input().split())
	H = list(map(int, input().split()))
	F = helping_tracy(H, K)
	print(F)