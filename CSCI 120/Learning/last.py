class Fraction:
    def __init__(self, n, d) -> None:
        self._numrator = n
        self._denomenator = d

    def __str__(self) -> str:
        return str(self._numrator)+"/"+str(self._denomenator)

    def __mul__(self, q):
        return Fraction(self._numrator*q._numrator, self._denomenator*q._denomenator)

    def __eq__(self, __value: object) -> bool:
        return self._numrator == __value._numrator and self._denomenator == __value._denomenator

    def __add__(self, __value):
        den = self._denomenator*__value._denomenator
        num = (__value._denomenator*self._numrator) + \
            (self._denomenator*__value._numrator)
        return Fraction(num, den)


f1 = Fraction(3, 4)
print(str(f1))

f2 = Fraction(3, 4)
print(str(f2))

f3 = f1 * f2
print(str(f3))

print(f1 == f2)

f4 = f1+f2

print(str(f4))
