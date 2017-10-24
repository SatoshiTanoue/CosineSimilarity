#!/usr/bin/env python
import numpy as np
dictA = {}
dictB = {}
arrayA = np.array([])
arrayB = np.array([])

#ファイルを開いて，連想配列をつくる．
for line in open('result.txt', 'r'):
    #chomp
    after = "".join(line.split())
    dictA.update({after:0})

#ファイルを開いて，連想配列をつくる．
for line in open('result.txt', 'r'):
    #chomp
    after = "".join(line.split())
    dictB.update({after:0})

#ファイルに合ったらそのリストを1にする・
for line in open('resultA.txt', 'r'):
    after = "".join(line.split()) 
    if after in dictA:
        dictA[after] = 1;
    

#ファイルに合ったらそのリストを1にする・
for line in open('resultB.txt', 'r'):
    after = "".join(line.split()) 
    if after in dictB:
      dictB[after] = 1;
    dictB["TODO"] = 1
#numpy のベクトルに変換
for value in dictA.values() :
    arrayA = np.append(arrayA,value)

for value in dictB.values() :
   arrayB =  np.append(arrayB,value)
    
# normA = np.linalg.norm(dictA_array , ord=2, axis=1)
# normB = np.linalg.norm(dictB_array , ord=2, axis=1)

def cos_sim(v1, v2):
    return np.dot(v1, v2) / (np.linalg.norm(v1) * np.linalg.norm(v2))

# normalized_A = dictA_array / normA[:, np.newaxis]
# normalized_B = dictB_array / normB[:, np.newaxis]

print(arrayA)
print(arrayB)
print(cos_sim(arrayA,arrayB))
