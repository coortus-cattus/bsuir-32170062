from music import Music
from food import Food
from christmasTree import ChristmasTree
from guest import Guest
from gift import Gift
from decoration import Decoration
from entertainment import Entertainment

class Holiday:
    def __init__(
        self,
        date: str,
        theme: str,
        place: str,
        guests: list[Guest],
        gifts: list[Gift],
        decorations: list[Decoration],
        entertainments: list[Entertainment],
        food: Food,
        music: Music,
        christmasTree: ChristmasTree = None,
    ):
        if not isinstance(date, str):
            raise TypeError("Дата должна быть строкой.")
        if not isinstance(theme, str):
            raise TypeError("Тема должна быть строкой.")
        if not isinstance(place, str):
            raise TypeError("Место должно быть строкой.")
        if not all(isinstance(g, Guest) for g in guests):
            raise TypeError("Список гостей должен содержать объекты Guest.")
        if not all(isinstance(g, Gift) for g in gifts):
            raise TypeError("Список подарков должен содержать объекты Gift.")
        if not all(isinstance(d, Decoration) for d in decorations):
            raise TypeError("Список украшений должен содержать объекты Decoration.")
        if not all(isinstance(e, Entertainment) for e in entertainments):
            raise TypeError("Список развлечений должен содержать объекты Entertainment.")
        if not isinstance(food, Food):
            raise TypeError("Еда должна быть объектом Food.")
        if not isinstance(music, Music):
            raise TypeError("Музыка должна быть объектом Music.")
        if christmasTree is not None and not isinstance(christmasTree, ChristmasTree):
            raise TypeError("Елка должна быть объектом ChristmasTree или None.")

        self.__date = date
        self.__theme = theme
        self.__place = place
        self.__guests = guests
        self.__gifts = gifts
        self.__decorations = decorations
        self.__entertainments = entertainments
        self.__food = food
        self.__music = music
        self.__christmasTree = christmasTree
        self.__status = "Запланирован"

    @property
    def date(self):
        return self.__date

    @property
    def theme(self):
        return self.__theme

    @property
    def place(self):
        return self.__place

    @property
    def guests(self):
        return self.__guests

    @property
    def gifts(self):
        return self.__gifts

    @property
    def decorations(self):
        return self.__decorations

    @property
    def entertainments(self):
        return self.__entertainments

    @property
    def food(self):
        return self.__food

    @property
    def music(self):
        return self.__music

    @property
    def christmasTree(self):
        return self.__christmasTree

    @property
    def status(self):
        return self.__status

    def start(self):
        if self.__status == "Запланирован":
            self.__status = "Идет"
            return "Праздник начался!"
        return "Праздник уже идет или завершен."

    def finish(self):
        if self.__status == "Идет":
            self.__status = "Завершен"
            return "Праздник завершен."
        return "Праздник не идет, завершать нечего."

    def exchange_gifts(self):
        if self.__status != "Идет":
            return "Нельзя обмениваться подарками, пока праздник не начался."
        if not self.__guests or not self.__gifts:
            return "Не хватает гостей или подарков для обмена."
        return "Обмен подарками прошел успешно!"
