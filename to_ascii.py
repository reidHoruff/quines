import sys

src = open(sys.argv[1])
s = str(map(int, bytearray(src.read())))
print '{%s}' % s[1:-1]

