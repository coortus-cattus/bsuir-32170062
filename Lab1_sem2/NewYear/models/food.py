class Food:
    def __init__(self, name):
        self.__name = name
        self.__ingredients = []
        self.__status = "Не готов."

    @property
    def name(self):
        return self.__name

    @property
    def ingredients(self):
        return self.__ingredients

    @ingredients.setter
    def ingredients(self, ingr):
        self.__ingredients = ingr

    @property
    def status(self):
        return self.__status

    def cook(self):
        self.__status = "Приготовлено."

    def serve(self):
        self.__status = "Подано."