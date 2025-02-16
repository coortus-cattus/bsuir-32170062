from meal import Meal

class Food(Meal):
    def __init__(self, name):
        super().__init__(name)
        self.__ingredients = []


    @property
    def ingredients(self):
        return self.__ingredients

    @ingredients.setter
    def ingredients(self, ingr):
        if not isinstance(ingr, list):
            raise TypeError("Ингридиенты должны быть списком.")
        self.__ingredients = ingr

