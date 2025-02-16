class Drink:
    def __init__(self, name: str, alcohol: bool, temperature: str):
        if not isinstance(name, str):
            raise TypeError("Название должно быть строкой.")
        if not isinstance(alcohol, bool):
            raise TypeError("Поле 'alcohol' должно быть True или False.")
        if temperature not in ("холодный", "горячий"):
            raise ValueError("Температура должна быть 'холодный' или 'горячий'.")

        self.__name = name
        self.__temperature = temperature
        self.__alcohol = alcohol
        self.__status = "Не готов."

    @property
    def name(self):
        return self.__name

    @property
    def status(self):
        return self.__status

    def cook(self):
        self.__status = "Приготовлено."

    def serve(self):
        self.__status = "Подано."