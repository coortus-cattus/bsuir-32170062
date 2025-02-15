class Music:
    def __init__(self, genre, tracklist, current_track, volume, status):
        self.__genre = genre
        self.__tracklist = []
        self.__current_track = None
        self.__volume = volume
        self.__status = False

    def turnOn(self):
        self.__status = True

    def turnOff(self):
        self.__status = False

    def swichTrack(self, track):
        if track in self.__tracklist:
            self.__current_track = track
            return f"Трек {track} успешно переключен."
        else:
            return f"{track} нет в списке треков."

    def changeVolume(self, newVolume):
        if isinstance(newVolume) and  -1 < newVolume < 100:
            self.__volume = newVolume
            return f"Громкость изменена на {newVolume}"
        else:
            return "Недопустимое значение."

    def addTrack(self, track):
        self.__tracklist.append(track)

    def showTracklist(self):
        return "\n".join(f"{index+1}. {track}" for index, track in enumerate(self.__tracklist))

    def delTrack(self, track):
      try:
          self.__tracklist.remove(track)
          return f"{track} удален из списка."
      except ValueError:
          return f"{track} нет в списке треков."