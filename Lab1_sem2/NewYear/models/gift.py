class Gift:
    def __init__(self, type):
        self.__type = type
        self.__status = "Не упакован."

    def pack(self):
        self.__status = "Упакован."

    def give(self, guest):
        self._status = "Подарен."
        return (f"Подарок {self.__type} подарен гостю {guest}")