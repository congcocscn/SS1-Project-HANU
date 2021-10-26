class Car:
    def __init__(self, __year_model, __make, __speed):
        self.__year_model = __year_model
        self.__make = __make
        self.__speed = __speed

    def acceletare(self):
        self.__speed += 5
    def brake(self):
        self.__speed -= 5
    def get_speed(self):
        return self.__speed


c = Car(2020, "congcocscn",0)

c.acceletare()
print(c.get_speed())
c.acceletare()
print(c.get_speed())
c.acceletare()
print(c.get_speed())
c.acceletare()
print(c.get_speed())
c.acceletare()
print(c.get_speed())

c.brake()
print(c.get_speed())
c.brake()
print(c.get_speed())
c.brake()
print(c.get_speed())
c.brake()
print(c.get_speed())
c.brake()
print(c.get_speed())
