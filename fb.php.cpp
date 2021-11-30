t = int(input())
for i in range(t):
	s = input()
	vowels_count = 0
	cons_count = 0
	vowels_occurence = {}
	cons_occurence = {}
	for c in s:
		if c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U':
			vowels_count = vowels_count + 1
			try:
				vowels_occurence[c] = vowels_occurence[c] + 1
			except:
				vowels_occurence[c] = 1
		else:
			cons_count = cons_count + 1
			try:
				cons_occurence[c] = cons_occurence[c] + 1
			except:
				cons_occurence[c] = 1
	#print(s , vowels_count ,cons_count)
	vowel_dic = sorted(vowels_occurence.items(), key=lambda item: item[1] , reverse = True)
	cons_dic = sorted(cons_occurence.items() , key=lambda item: item[1] , reverse = True)
	#print(vowel_disc , cons_dic)
	if vowels_count > 0:
		main_vowel =(vowels_count - vowel_dic[0][1]) * 2 + cons_count
	else:
		main_vowel = cons_count
	if cons_count > 0:
		main_cons = (cons_count - cons_dic[0][1])*2 + vowels_count
	else:
		main_cons = vowels_count
	#print(main_cons , main_vowel)
	print(f'Case #(i+1): {min(main_vowel,main_cons)}')
