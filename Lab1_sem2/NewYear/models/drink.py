from meal import Meal

class Drink(Meal):
    def __init__(self, name: str, alcohol: bool, temperature: str) -> None:
        if not isinstance(alcohol, bool):
            raise TypeError("Поле '_alcohol' должно быть True или False.")
        if temperature not in ("холодный", "горячий"):
            raise ValueError("Температура должна быть 'холодный' или 'горячий'.")

        super().__init__(name)
        self._temperature = temperature
        self._alcohol = alcohol

    @property
    def temperature(self) -> str:
        return self._temperature

    @property
    def alcohol(self) -> bool:
        return self._alcohol

    def __repr__(self) -> str:
        return f"Drink(name='{self.name}', alcohol={self._alcohol}, temperature='{self._temperature}')"
