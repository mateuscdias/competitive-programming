'''
Solution for problem 1255 (Letter Frequency)- Platform: Beecrowd
Author: Mateus Dias @mateuscdias
All Rights Reserved.
Created on Oct 3 2025
'''

n = int(input())

for i in range(n):

    sequence = list(input().lower())
    letters = {lt for lt in sequence if lt.isalpha()}

    freq = {lt:sequence.count(lt) for lt in letters}

    max_val = max(freq.values())

    max_freq = {lt:val for lt,val in freq.items() if val == max_val}

    most_occur = [lt for lt in max_freq.keys()]

    most_occur.sort()

    print(''.join(most_occur))



