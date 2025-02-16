from gift import Gift

class Guest:
    def __init__(self, name, age, status, gifts: Gift, active):
        self.__name = name
        self.__age = age
        self.__status = status
        self.__gifts = []
        self.__active = False
