from typing import List

from guest import Guest


class Entertainment:
    def __init__(self, name: str, host: Guest, description: str, active_guests: List[Guest] = None):
        if not isinstance(name, str):
            raise TypeError("Название должно быть строкой.")
        if not isinstance(host, Guest):
            raise TypeError("Ведущий должен быть объектом Guest.")
        if not isinstance(description, str):
            raise TypeError("Описание должно быть строкой.")
        if active_guests is not None and (not isinstance(active_guests, list) or not all(isinstance(a, Guest) for a in active_guests)):
            raise TypeError("active_guests должен быть списком элементов типа Guest.")

        self._name = name
        self._host = host
        self._description = description
        self._active_guests = active_guests if active_guests is not None else []
        self._status = "Не начато."

    @property
    def name(self) -> str:
        return self._name

    @property
    def host(self) -> Guest:
        return self._host

    @property
    def description(self) -> str:
        return self._description

    @property
    def active_guests(self) -> List[Guest]:
        return self._active_guests

    @property
    def status(self) -> str:
        return self._status

    def start_act(self) -> None:
        self._status = f"Развлечение '{self._name}' началось."

    def add_guest(self, guest: Guest) -> str:
        if not isinstance(guest, Guest):
            return "Гость должен быть объектом Guest."
        self._active_guests.append(guest)
        return f"Гость {guest} добавлен в список активных участников."

    def finish_act(self) -> None:
        self._status = f"Развлечение '{self._name}' окончено."

    def __repr__(self) -> str:
        return f"Entertainment(name='{self._name}', host={self._host}, status='{self._status}')"

