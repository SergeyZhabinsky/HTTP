# import collections
#
# L = collections.namedtuple("L", "one two three")
#
# r = L("l1", "l2", "l3")
#
# print(r.one)
# print(r.two)
# print(r.three)



# c = 123456
import collections

c1 = ("1", "2", "3", "4", "5", "6")
# mt = "".maketrans("135", "000")
# s = int(str(c).translate(mt))
# print(s*100)


str = "aq aw ae ar at ay"
z = collections.namedtuple("z", str)
a = z("a1", "a2", "a3", "a4", "a5", "a6")
print( a.ar )


def srt(x):
    return x.lower()

dict = ["f", "a", "D", "c", "b"]
print(dict)
# dict.sort(key=str.lower())
dict.sort()
print(dict)
dict.sort(key=srt)
print(dict)