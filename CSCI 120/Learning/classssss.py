class Cool():
    def __init__(self) -> None:
        self.v = 10

    @property
    def c(self, j):
        pass

    @c.setter
    def c(self, j):
        self.v = j


k = Cool()
b = k.c = 23

print(b)
