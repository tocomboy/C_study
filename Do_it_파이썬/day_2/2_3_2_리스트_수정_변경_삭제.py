# 하나의 값 수정
a = [1, 2, 3]
a[2] = 4
print(a)

# 연속된 범위의 값 수정
a[1:2] = ['a', 'b', 'c']
print(a)

# [] 사용해 리스트 요소 삭제
a[1:3] = []
print(a)

# del 함수를 사용해 리스트 요소 삭제
del a[1]
print(a)