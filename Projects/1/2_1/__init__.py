import decimal
import math
import sys

l = (0.0, 5.4, 2.5, -2.5)

for x in l:
    print(x)


print("")
f = float()
x = float(54321.012345678987654321)
y = float(9876)
x1 = decimal.Decimal(54321.012345678987654321)
y1 = decimal.Decimal(9876)
x2 = complex(54321.012345678987654321)
y2 = complex(9876)

# print( x+y )

i=0
while i<1000:
    print( str(i) + ") " + chr(i) )
    i+=1
