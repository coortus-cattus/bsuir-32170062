from meal import Meal

class Drink(Meal):
    def __init__(self, name: str, alcohol: bool, temperature: str):

        if not isinstance(alcohol, bool):
            raise TypeError("Поле 'alcohol' должно быть True или False.")
        if temperature not in ("холодный", "горячий"):
            raise ValueError("Температура должна быть 'холодный' или 'горячий'.")

        super().__init__(name)
        self.__temperature = temperature
        self.__alcohol = alcohol

        @property
        def temperature(self):
            return self.__temperature

        @property
        def alcohol(self):
            return self.__alcohol


