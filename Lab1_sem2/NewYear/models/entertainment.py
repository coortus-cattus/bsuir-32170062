from guest import Guest

class Entertainment:
    def __init__(self, name: str, host: Guest, description: str, activeGuests: list[Guest] = None):
        if not isinstance(name, str):
            raise TypeError("Название должно быть строкой.")
        if not isinstance(host, Guest):
            raise TypeError("Ведущий должен быть в списке гостей.")
        if not isinstance(description, str):
            raise TypeError("Описание должно быть строкой.")
        if activeGuests is not None and not isinstance(activeGuests, list) or not all(isinstance(a, Guest) for a in activeGuests):
            raise TypeError("ActiveGuests должен быть списком элементов типа Guest")

        self.__name = name
        self.__host = host
        self.__description = description
        self.__activeGuests = activeGuests if activeGuests is not None else []
        self.__status = "Не начато."

    @property
    def name(self):
        return self.__name

    @property
    def host(self):
        return self.__host

    @property
    def description(self):
        return self.__description

    @property
    def activeGuests(self):
        return self.__activeGuests

    @property
    def status(self):
        return self.__status

    def startAct(self):
        self.__status = f"Развлечение {self.__name} началось."

    def addGuest(self, guest):
        if guest is not Guest:
            return "Гость должен быть гостем."
        self.__activeGuests.append(guest)

    def finishAct(self):
        self.__status = f"Развлечение {self.__name} окончилось."



