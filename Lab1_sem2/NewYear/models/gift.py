from guest import Guest

class Gift:
    def __init__(self, type: str) -> None:
        self._type = type
        self._status = "Не упакован."

    def pack(self) -> None:
        self._status = "Упакован."

    def give(self, guest : Guest) -> str:
        self._status = "Подарен."
        return (f"Подарок {self._type} подарен гостю {guest}")

    def __repr__(self):
        return f"Gift(type='{self._type}'; status='{self._status}')"