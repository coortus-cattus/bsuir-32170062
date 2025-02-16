class Meal:
    def __init__(self, name: str):
        if not isinstance(name, str):
            raise TypeError("Название должно быть строкой.")

        self.__name = name
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
