from guest import Guest


class Gift:
    def __init__(self, gift_type: str) -> None:
        if not isinstance(gift_type, str):
            raise TypeError("Тип подарка должен быть строкой.")

        self._type = gift_type
        self._status = "Не упакован."

    @property
    def type(self) -> str:
        return self._type

    @property
    def status(self) -> str:
        return self._status

    def pack(self) -> None:
        self._status = "Упакован."

    def give(self, guest: Guest) -> None:
        if not isinstance(guest, Guest):
            raise TypeError("Гость должен быть объектом Guest.")

        self._status = "Подарен."

    def __repr__(self) -> str:
        return f"Gift(type='{self._type}', status='{self._status}')"
