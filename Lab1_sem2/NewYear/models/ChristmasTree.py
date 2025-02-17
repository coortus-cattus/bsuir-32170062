from gift import Gift
from decoration import Decoration

class ChristmasTree:
    def __init__(self, size: str, glows: bool = False, decorations: list[Decoration] = None, gifts: list[Gift] = None):
        if not isinstance(size, str):
            raise TypeError("Размер долен быть указан строкой.")
        if not isinstance(glows, bool):
            raise TypeError("Светится должно быть указано типом bool")
        if decorations is not None and (not isinstance(decorations, list) or
                                        not all(isinstance(d, Decoration) for d in decorations)):
            raise TypeError("Список декораций должен быть списком типа Decoration")
        if gifts is not None and (not isinstance(gifts, list) or not all(isinstance(g, Gift) for g in gifts)):
            raise TypeError("Список подарков должен быть списком типа Gift")

        self.__size = size
        self.__glows = glows
        self.__decorations = decorations if decorations is not None else []
        self.__gifts = gifts if gifts is not None else []

    @property
    def size(self):
        return self.__size

    @property
    def glows(self):
        return self.__glows

    @property
    def decorations(self):
        return self.__decorations

    @property
    def gifts(self):
        return self.__gifts

    def turnLightOn(self):
        self.__glows = True

    def turnLightOff(self):
        self.__glows = False

    def addDecorations(self, decoration: Decoration):
        if decoration is not Decoration:
            return "Декорация должна быть типа Decoration"
        self.__decorations.append(decoration)

