class example(object):
    x = 0
    y = 0

    def printsum(self):
        print(self)
        print(self.x+self.y)


e = example()
e.x = 1
e.y = 3
f = example()
f.x = 2
f.y = 4


e.printsum()
f.printsum()
