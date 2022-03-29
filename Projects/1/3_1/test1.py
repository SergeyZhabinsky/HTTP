import collections

s = "зНачЕние = 2"

mt = "".maketrans("НЕ", "не")
print( s.translate(mt) )

l = collections.namedtuple("l", "ab1, ab2, ab3")
nd = l("1", "2", "3")
print( nd.ab1 )
print( nd.ab2 )
print( nd.ab3 )


# d = range(1995, 2023)
# for year in d:
#     if(year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
#         print(year)

d = [year for year in range(1995, 2023)
    if(year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)]
print(d)

