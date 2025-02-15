class Decoration:
    def __init__(self, type, place, color):
        self.__type = type
        self.__place = place
        self.__color = color

    @property
    def type(self):
        return self.__type

    @property
    def color(self):
        return self.__color

    @property
    def place(self):
        return self.__place

    @place.setter
    def place(self, place):
        self.__place = place

    def remove(self):
        self.place = None