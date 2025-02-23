from typing import List

from gift import Gift
from decoration import Decoration


class ChristmasTree:
    def __init__(
        self,
        size: str,
        glows: bool = False,
        decorations: List[Decoration] = None,
        gifts: List[Gift] = None
    ) -> None:
        if not isinstance(size, str):
            raise TypeError("Размер должен быть указан строкой.")
        if not isinstance(glows, bool):
            raise TypeError("Светится должно быть указано типом bool.")
        if decorations is not None and (not isinstance(decorations, list) or
                                        not all(isinstance(d, Decoration) for d in decorations)):
            raise TypeError("Список декораций должен быть списком объектов Decoration.")
        if gifts is not None and (not isinstance(gifts, list) or not all(isinstance(g, Gift) for g in gifts)):
            raise TypeError("Список подарков должен быть списком объектов Gift.")

        self._size = size
        self._glows = glows
        self._decorations = decorations if decorations is not None else []
        self._gifts = gifts if gifts is not None else []

    @property
    def size(self) -> str:
        return self._size

    @property
    def glows(self) -> bool:
        return self._glows

    @property
    def decorations(self) -> List[Decoration]:
        return self._decorations

    @property
    def gifts(self) -> List[Gift]:
        return self._gifts

    def turn_light_on(self) -> str:
        if self._glows:
            return "Огоньки уже горят!"

        self._glows = True
        return "Огоньки включились!"

    def turn_light_off(self) -> str:
        if not self._glows:
            return "Огоньки и так выключены!"

        self._glows = False
        return "Огоньки выключены!"

    def add_decorations(self, decoration: Decoration) -> str:
        if not isinstance(decoration, Decoration):
            return "Декорация должна быть объектом класса Decoration."

        self._decorations.append(decoration)
        return f"В список декораций добавлена декорация: {decoration}."

    def __repr__(self) -> str:
        return f"ChristmasTree(size='{self._size}', glows={self._glows}, decorations={len(self._decorations)}, gifts={len(self._gifts)})"
