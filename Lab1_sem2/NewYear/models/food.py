from typing import List

from meal import Meal

class Food(Meal):
    def __init__(self, name: str, ingredients: List[str] = None) -> None:
        if ingredients is not None and (not isinstance(ingredients, List) or
                                        not all(isinstance(i, str) for i in ingredients)):
            raise TypeError("Ингредиенты должны быть списком строк.")

        super().__init__(name)
        self._ingredients = ingredients if ingredients is not None else []


    @property
    def ingredients(self) -> List[str]:
        return self._ingredients

    @ingredients.setter
    def ingredients(self, ingredients) -> None:
        if not isinstance(ingredients, list):
            raise TypeError("Ингредиенты должны быть списком.")
        self._ingredients = ingredients

    def __repr__(self) -> str:
        return f"Food(name='{self.name}', ingredients='{self._ingredients}')"
