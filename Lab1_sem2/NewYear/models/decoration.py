class Decoration:
    def __init__(self, decor_type: str, place: str, color: str):
        if not isinstance(decor_type, str):
            raise TypeError("Тип украшения должен быть строкой.")
        if not isinstance(place, str):
            raise TypeError("Место должно быть строкой.")
        if not isinstance(color, str):
            raise TypeError("Цвет должен быть строкой.")

        self._type = decor_type
        self._place = place
        self._color = color

    @property
    def type(self) -> str:
        return self._type

    @property
    def color(self) -> str:
        return self._color

    @property
    def place(self) -> str:
        return self._place

    @place.setter
    def place(self, new_place: str) -> None:
        if not isinstance(new_place, str):
            raise TypeError("Место должно быть строкой.")
        self._place = new_place

    def remove(self) -> None:
        """Удаляет украшение, сбрасывая его место."""
        self._place = None

    def __repr__(self) -> str:
        return f"Decoration(type='{self._type}', place='{self._place}', color='{self._color}')"
