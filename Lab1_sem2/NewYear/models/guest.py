from gift import Gift
from food import Food


class Guest:
    def __init__(self, name: str, age: int, status: str, gifts: list[Gift] = None, active: bool = False,
                 food: list[Food] = None):

        if not isinstance(name, str):
            raise TypeError("Имя гостя должно быть строкой.")
        if not isinstance(age, int) or age < 0:
            raise ValueError("Возраст должен быть положительным целым числом.")
        if not isinstance(status, str):
            raise TypeError("Статус гостя должен быть строкой.")
        if gifts is not None and (not isinstance(gifts, list) or not all(isinstance(g, Gift) for g in gifts)):
            raise TypeError("Подарки должны быть списком объектов Gift.")
        if not isinstance(active, bool):
            active = False
        if food is not None and (not isinstance(food, list) or not all(isinstance(f, Food) for f in food)):
            raise TypeError("Любимая еда должна быть списком объектов Food.")

        self.__name = name
        self.__age = age
        self.__status = status
        self.__gifts = gifts if gifts is not None else []
        self.__active = active
        self.__favoriteFood = food if food is not None else []

    @property
    def name(self):
        return self.__name

    @property
    def age(self):
        return self.__age

    @property
    def status(self):
        return self.__status

    @property
    def gifts(self):
        return self.__gifts

    @property
    def active(self):
        return self.__active

    @property
    def favoriteFood(self):
        return self.__favoriteFood
