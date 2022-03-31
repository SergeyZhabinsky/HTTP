import xlrd

s = "q!we a!sd! z!xc"

print( s[::-1] * 2 )

s = s.replace("!", "=", 2)

str = s.split("!", 1)
print(str)


if s.islower():
    print("OK")
else:
    print("NO")


d = "1", "2", "5"
print(d)

str = "Возможности человека не ограничены!"
# mt = "".maketrans("ч о", "Ч_=", "кыч о")
# res = str.translate(mt)

# ar = str.split()
# i = 0
# for x in ar:
#     ar[i] = x.title()
#     i += 1
# str = " ".join(ar)
# print(str)
# print(res)


# diction = ['qwe', 'asd', 'zxc']
# str = "Первое значение {0[0]}, второе значение {0[1]}, третье значение {0[2]}".format(diction)
print(str)

print(str.encode("ascii", "ignore"))
print(str.encode("ascii", "backslashreplace"))
print(str.encode("utf8"))
print(str.encode("koi8-r"))
print( ord(str[0]) )
print( hex(ord(str[0])) )
