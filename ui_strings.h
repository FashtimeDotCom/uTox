#define STR(x) { .str = (uint8_t*)x, .length = sizeof(x) - 1 }

STRING strings[][64] = {
//Deutsch  GERMAN
{
    //0
    STR("Freundschaftsanfrage verschickt. Dein Freund wird online erscheinen, wenn er deine Anfrage akzeptiert."),
    STR("Versuche DNS Namen aufzulösen..."),
    STR("Fehler: Ungültige Tox ID"),
    STR("Fehler: Keine Tox ID angegeben"),
    STR("Fehler: Nachricht ist zu lang"),
    STR("Fehler: Leere Nachricht"),
    STR("Fehler: Tox ID ist eigene ID"),
    STR("Fehler: Tox ID ist bereits in der Freundesliste"),
    STR("Fehler: Unbekannt"),
    STR("Fehler: Ungültige Tox ID (bad checksum)"),
    STR("Fehler: Ungültige Tox ID (bad nospam value)"),
    STR("Fehler: Kein Speicher"),

    //12
    STR("Neue Datenübertragung"),
    STR("Datenübertragung gestartet"),
    STR(".."),
    STR("Datenübertragung pausiert"),
    STR("Datenübertragung fehlerhaft"),
    STR("Datenübertragung abgebrochen"),
    STR("Datenübertragung fertig"),

    //19
    STR("Anruf abgebrochen"),
    STR("Anruf eingeladen"),
    STR("Anruf klingelt"),
    STR("Anruf gestartet"),

    //23
    STR("Freunde hinzufügen"),
    STR("Tox ID"),
    STR("Nachricht"),
    STR("Suche Freund"),
    STR("Hinzufügen"),
    STR("Profil wechseln"),
    STR("Freundesanfrage"),
    STR("Benutzereinstellungen"),
    STR("Name"),
    STR("Statusnachricht"),
    STR("Vorschau"),
    STR("Geräteauswahl"),
    STR("Audioquelle"),
    STR("Audio-Ausgabegerät"),
    STR("Videoquelle"),
    STR("Andere Einstellungen"),
    STR("DPI"),
    STR("Standort speichern"),
    STR("Sprache"),
    STR("Netzwerk"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("Das Verändern von Netzwerk/Proxy-Einstellungen unterbricht die Verbindung zum Tox-Netzwerk."),

    //41
    STR("Kopieren"),
    STR("Kopieren (ohne Namen)"),
    STR("Ausschneiden"),
    STR("Einfügen"),
    STR("Löschen"),
    STR("Alle auswählen"),
    STR("Entfernen"),
    STR("Verlassen"),
    STR("Akzeptieren"),
    STR("Ignorieren"),

    //50
    STR("Zum speichern klicken"),
    STR("Zum öffnen klicken"),
    STR("Abgebrochen"),
},

//English  ENGLISH
{
    //0
    STR("Friend request sent. Your friend will appear online when he accepts the request."),
    STR("Attempting to resolve DNS name..."),
    STR("Error: Invalid Tox ID"),
    STR("Error: No Tox ID specified"),
    STR("Error: Message is too long"),
    STR("Error: Empty message"),
    STR("Error: Tox ID is self ID"),
    STR("Error: Tox ID is already in friend list"),
    STR("Error: Unknown"),
    STR("Error: Invalid Tox ID (bad checksum)"),
    STR("Error: Invalid Tox ID (bad nospam value)"),
    STR("Error: No memory"),

    //12
    STR("New file transfer"),
    STR("File transfer started"),
    STR(".."),
    STR("File transfer paused"),
    STR("File transfer broken"),
    STR("File transfer cancelled"),
    STR("File transfer complete"),

    //19
    STR("Call cancelled"),
    STR("Call invited"),
    STR("Call ringing"),
    STR("Call started"),

    //23
    STR("Add Friends"),
    STR("Tox ID"),
    STR("Message"),
    STR("Search friends"),
    STR("Add"),
    STR("Switch Profile"),
    STR("Friend Request"),
    STR("User Settings"),
    STR("Name"),
    STR("Status Message"),
    STR("Preview"),
    STR("Device Selection"),
    STR("Audio Input Device"),
    STR("Audio Output Device"),
    STR("Video Input Device"),
    STR("Other Settings"),
    STR("DPI"),
    STR("Save Location"),
    STR("Language"),
    STR("Network"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("Changing Network/Proxy settings will disconnect you from the Tox network"),

    //41
    STR("Copy"),
    STR("Copy (no names)"),
    STR("Cut"),
    STR("Paste"),
    STR("Delete"),
    STR("Select All"),
    STR("Remove"),
    STR("Leave"),
    STR("Accept"),
    STR("Ignore"),

    //50
    STR("Click to save"),
    STR("Click to open"),
    STR("Cancelled"),
},

//Spanish SPANISH
{
    //0
    STR("Friend request sent. Your friend will appear online when he accepts the request."),
    STR("Attempting to resolve DNS name..."),
    STR("Error: Invalid Tox ID"),
    STR("Error: No Tox ID specified"),
    STR("Error: Message is too long"),
    STR("Error: Empty message"),
    STR("Error: Tox ID is self ID"),
    STR("Error: Tox ID is already in friend list"),
    STR("Error: Unknown"),
    STR("Error: Invalid Tox ID (bad checksum)"),
    STR("Error: Invalid Tox ID (bad nospam value)"),
    STR("Error: No memory"),

    //12
    STR("New file transfer"),
    STR("File transfer started"),
    STR(".."),
    STR("File transfer paused"),
    STR("File transfer broken"),
    STR("File transfer cancelled"),
    STR("File transfer complete"),

    //19
    STR("Call cancelled"),
    STR("Call invited"),
    STR("Call ringing"),
    STR("Call started"),

    //23
    STR("Add Friends"),
    STR("Tox ID"),
    STR("Message"),
    STR("Search friends"),
    STR("Add"),
    STR("Switch Profile"),
    STR("Friend Request"),
    STR("User Settings"),
    STR("Nombre"),
    STR("Status Message"),
    STR("Preview"),
    STR("Device Selection"),
    STR("Audio Input Device"),
    STR("Audio Output Device"),
    STR("Video Input Device"),
    STR("Other Settings"),
    STR("DPI"),
    STR("Save Location"),
    STR("Language"),
    STR("Network"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("Changing Network/Proxy settings will disconnect you from the Tox network"),

    //41
    STR("Copy"),
    STR("Copy (no names)"),
    STR("Cut"),
    STR("Paste"),
    STR("Delete"),
    STR("Select All"),
    STR("Remove"),
    STR("Leave"),
    STR("Accept"),
    STR("Ignore"),

    //50
    STR("Click to save"),
    STR("Click to open"),
    STR("Cancelled"),
},

//French FRENCH
{
    //0
    STR("Demande envoyée. Votre ami apparaîtra en ligne quand il acceptera votre demande."),
    STR("Tente de résoudre les noms DNS..."),
    STR("Erreur: Tox ID invalide"),
    STR("Erreur: Aucun Tox ID"),
    STR("Erreur: Message trop long"),
    STR("Erreur: Message vide"),
    STR("Erreur: Tox ID est une ID personnel"),
    STR("Erreur: Tox ID est déjà dans votre liste d'ami"),
    STR("Erreur: Inconnue"),
    STR("Erreur: Tox ID invalide (bad checksum)"),
    STR("Erreur: Tox ID invalide (bad nospam value)"),
    STR("Erreur: Pas de mémoire"),

    //12
    STR("Nouveau transfert de fichier"),
    STR("Transfert de fichier commencé"),
    STR(".."),
    STR("Transfert de fichier en pause"),
    STR("Transfert de fichier interrompu"),
    STR("Transfert de fichier annulé"),
    STR("Transfert de fichier complété"),

    //19
    STR("Appel annulé"),
    STR("Réception d'un appel"),
    STR("Appel en cours"),
    STR("Appel commencé"),

    //23
    STR("Ajouter un ami"),
    STR("Tox ID"),
    STR("Message"),
    STR("Recherche d'ami"),
    STR("Ajouter"),
    STR("Changement de profil"),
    STR("Demande d'ami"),
    STR("Paramètre d'utilisateur"),
    STR("Nom"),
    STR("Message d'humeur"),
    STR("Aperçu"),
    STR("Sélection des périphériques"),
    STR("Périphérique d'entrée audio"),
    STR("Périphérique de sortie audio"),
    STR("Périphérique d'entrée vidéo"),
    STR("Autres paramètres"),
    STR("Taille de la police"),
    STR("Emplacement de sauvegarde"),
    STR("Langue"),
    STR("Réseau"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("Modifier les paramètres Réseau/Proxy vous déconnectera du réseau Tox"),

    //41
    STR("Copier"),
    STR("Copier (sans les noms)"),
    STR("Couper"),
    STR("Coller"),
    STR("Supprimer"),
    STR("Tout sélectionner"),
    STR("Effacer"),
    STR("Partir"),
    STR("Accepter"),
    STR("Ignorer"),

    //50
    STR("Cliquer pour sauvegarder"),
    STR("Cliquer pour ouvrir"),
    STR("Annulé"),
},

//Italiano  ITALIAN
{
    //0
    STR("Richiesta d'amicizia inviata. Il contatto apparirà online quando accetterà la richiesta."),
    STR("Tentativo di risoluzione del nome attraverso DNS..."),
    STR("Errore: Tox ID non valido"),
    STR("Errore: Nessun Tox ID specificato"),
    STR("Errore: Il messaggio è troppo lungo"),
    STR("Errore: Il messaggio è vuoto"),
    STR("Errore: Non puoi inserire il tuo Tox ID"),
    STR("Errore: Questo Tox ID è già nella tua lista dei contatti"),
    STR("Errore: Sconosciuto"),
    STR("Errore: Tox ID non valido (checksum errato)"),
    STR("Errore: Tox ID non valido (valore \"nospam\" errato)"),
    STR("Errore: Memoria insufficiente"),

    //12
    STR("Nuovo trasferimento file"),
    STR("Trasferimento file iniziato"),
    STR("..."),
    STR("Trasferimento file in pausa"),
    STR("Trasferimento file interrotto"),
    STR("Trasferimento file annullato"),
    STR("Trasferimento file completato"),

    //19
    STR("Chiamata annullata"),
    STR("Chiamata invitata"),
    STR("Sta squillando"),
    STR("Chiamata iniziata"),

    //23
    STR("Aggiungi contatto"),
    STR("Tox ID"),
    STR("Messaggio"),
    STR("Cerca contatti"),
    STR("Aggiungi"),
    STR("Cambia Profilo"),
    STR("Richieste d'amicizia"),
    STR("Impostazioni"),
    STR("Nome"),
    STR("Messaggio di stato"),
    STR("Anteprima"),
    STR("Dispositivi"),
    STR("Audio (input)"),
    STR("Audio (output)"),
    STR("Video (input)"),
    STR("Altro"),
    STR("DPI"),
    STR("Salva Locazione"),
    STR("Lingua"),
    STR("Network"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("Cambiando le impostazioni del Network o del Proxy, verrai disconnesso dalla rete Tox"),

    //41
    STR("Copia"),
    STR("Copia (nessun nome)"),
    STR("Taglia"),
    STR("Incolla"),
    STR("Cancella"),
    STR("Seleziona Tutto"),
    STR("Rimuovi"),
    STR("Abbandona"),
    STR("Accetta"),
    STR("Ignora"),

    //50
    STR("Clicca per salvare"),
    STR("Clicca per aprire"),
    STR("Annullato"),
},

//日本語  JAPANESE
{
    //0
    STR("フレンド要求が送信した。フレンドが承認とオンラインで現れます。"),
    STR("DNS解決中"),
    STR("エラー: 無効なTox IDです"),
    STR("エラー: Tox IDが指定されていません"),
    STR("エラー: メッセージが長すぎます"),
    STR("エラー: 空のメッセージ"),
    STR("エラー: Tox IDは自身のIDです"),
    STR("エラー: Tox IDは既にフレンドリストの中です"),
    STR("エラー: 不明"),
    STR("エラー: Tox IDは不正です (不正なチェックサム)"),
    STR("エラー: Tox IDは不正です (不正なnospam)"),
    STR("エラー: メモリが不足です"),

    //12
    STR("新しいファイルの転送"),
    STR("ファイルの転送が開始しました"),
    STR(".."),
    STR("ファイルの転送が停止しまた"),
    STR("ファイルの転送が失敗しました"),
    STR("ファイルの転送がキャンセルしました"),
    STR("ファイルの転送が完了しました"),

    //19
    STR("通話をキャンセルしました"),
    STR("通話を招待しました"),
    STR("通話が鳴っています"),
    STR("通話を開始しますた"),

    //23
    STR("フレンド追加"),
    STR("Tox ID"),
    STR("メッセージ"),
    STR("フレンドの検索"),
    STR("追加"),
    STR("プロファイルを変更する"),
    STR("フレンド要求"),
    STR("ユーザ設定"),
    STR("名前"),
    STR("状態メッセージ"),
    STR("プレビュー"),
    STR("デバイス選択"),
    STR("音声入力デバイス"),
    STR("音声出力デバイス"),
    STR("ビデオ入力デバイス"),
    STR("他の設定"),
    STR("解像度"),
    STR("場所の保存"),
    STR("言語"),
    STR("ネットワーク"),
    STR("IPV6:"),
    STR("UDP:"),
    STR("プロキシ (SOCKS 5)"),
    STR("ネットワークやプロキシの設定を変えるとToxネットワークの接続が切ります"),

    //41
    STR("コピー"),
    STR("コピー（名前を除いて）"),
    STR("カット"),
    STR("ペースト"),
    STR("削除"),
    STR("すべてを選択"),
    STR("削除"),
    STR("退出"),
    STR("承認"),
    STR("無視する"),

    //50
    STR("クリックで保存"),
    STR("クリックで開く"),
    STR("キャンセルしました"),
},

//Polski POLISH
{
    //0
    STR("Zapytanie zostało wysłane. Znajomy pojawi się online kiedy zaakceptuje zapytanie."),
    STR("Próba rozwiązania nazwy DNS..."),
    STR("Błąd: Niepoprawny Tox ID"),
    STR("Błąd: Nie określono Tox ID"),
    STR("Błąd: Wiadomość jest zbyt długa"),
    STR("Błąd: Pusta wiadomość"),
    STR("Błąd: Tox ID to twój ID"),
    STR("Błąd: Tox ID jest już na liście znajomych"),
    STR("Błąd: Nieznany"),
    STR("Błąd: Niepoprawny Tox ID (zła suma kontrolna)"),
    STR("Błąd: Niepoprawny Tox ID (zła wartość nospam)"),
    STR("Błąd: Brak pamięci"),

    //12
    STR("Nowy transfer pliku"),
    STR("Transfer pliku rozpoczęty"),
    STR(".."),
    STR("Transfer pliku wstrzymany"),
    STR("Transfer pliku nieudany"),
    STR("Transfer pliku anulowany"),
    STR("Transfer pliku zakończony"),

    //19
    STR("Rozmowa anulowana"),
    STR("Rozmowa przychodząca"),
    STR("Nawiązywanie połączenia"),
    STR("Rozmowa rozpoczęta"),

    //23
    STR("Dodaj znajomych"),
    STR("Tox ID"),
    STR("Wiadomość"),
    STR("Znajdź znajomych"),
    STR("Dodaj"),
    STR("Zmień profil"),
    STR("Zapytanie do znajomych"),
    STR("Ustawienia użytkownika"),
    STR("Nazwa"),
    STR("Status"),
    STR("Podgląd"),
    STR("Wybór urządzenia"),
    STR("Urządzenie wejściowe audio"),
    STR("Urządzenie wyjściowe audio"),
    STR("Urządzenie wejściowe wideo"),
    STR("Inne ustawienia"),
    STR("DPI"),
    STR("Save Location"),
    STR("Język"),
    STR("Sieć"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Proxy (SOCKS 5)"),
    STR("Zmiana ustawień sieci/proxy rozłączy cię z siecią Tox"),

    //41
    STR("Kopiuj"),
    STR("Kopiuj (bez nazw)"),
    STR("Wytnij"),
    STR("Wklej"),
    STR("Usuń"),
    STR("Zaznacz wszystko"),
    STR("Usuń"),
    STR("Opuść"),
    STR("Zaakceptuj"),
    STR("Ignoruj"),

    //50
    STR("Przyciśnij by zapisać"),
    STR("Przyciśnij by otworzyć"),
    STR("Anulowano"),
},

//Русский RUSSIAN
{
    //0
    STR("Запрос добавления в друзья отправлен. Ваш друг появится в сети, как только подтвердит запос."),
    STR("Попытка определения DNS-имени..."),
    STR("Ошибка: Некорректный Tox ID"),
    STR("Ошибка: Не указан Tox ID"),
    STR("Ошибка: Слишком длинное сообщение"),
    STR("Ошибка: Пустое сообщение"),
    STR("Ошибка: Tox ID совпадает с собственным"),
    STR("Ошибка: Tox ID уже в списке друзей"),
    STR("Ошибка: Неизвестная"),
    STR("Ошибка: Некорректный Tox ID (контрольная сумма не совпадает)"),
    STR("Ошибка: Некорректный Tox ID (плохое значение nospam)"),
    STR("Ошибка: Не хватает памяти"),

    //12
    STR("Передача нового файла"),
    STR("Передача файла начата"),
    STR(".."),
    STR("Передача файла приостановлена"),
    STR("Передача файла прервана"),
    STR("Передача файла отменена"),
    STR("Передача файла завершена"),

    //19
    STR("Звонок отменён"),
    STR("Входящий звонок"),
    STR("Исходящий Звонок"),
    STR("Разговор начат"),

    //23
    STR("Добавить друзей"),
    STR("Tox ID"),
    STR("Сообщение"),
    STR("Поиск друзей"),
    STR("Добавить"),
    STR("Переключить профиль"),
    STR("Запрос добавления в список друзей"),
    STR("Настройки пользователя"),
    STR("Имя"),
    STR("Статусное сообщение"),
    STR("Предпросмотр"),
    STR("Выбор устройств"),
    STR("Устройство ввода звука"),
    STR("Устройство вывода звука"),
    STR("Устройство захвата видео"),
    STR("Другие настройки"),
    STR("Разрешение, точек/дюйм"),
    STR("Сохранить расположение"),
    STR("Язык"),
    STR("Сеть"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Прокси (SOCKS 5)"),
    STR("Изменение настроек сети или прокси-сервера требует отключения от сети Tox"),

    //41
    STR("Копировать"),
    STR("Копировать (без имени)"),
    STR("Вырезать"),
    STR("Вставить"),
    STR("Удалить"),
    STR("Выбрать всё"),
    STR("Удалить"),
    STR("Покинуть"),
    STR("Принять"),
    STR("Игнорировать"),

    //50
    STR("Сохранить"),
    STR("Открыть"),
    STR("Отменено"),
},

//Українська UKRAINIAN
{
    //0
    STR("Запит до друга надіслано. Контакт з'явиться в мережі щойно підтвердить ваш запит."),
    STR("Визначення DNS-імені..."),
    STR("Помилка: Невірний Tox ID"),
    STR("Помилка: Не вказано Tox ID"),
    STR("Помилка: Повідомлення занадто довге"),
    STR("Помилка: Порожнє повідомлення"),
    STR("Помилка: Tox ID є власним ID"),
    STR("Помилка: Tox ID вже у списку друзів"),
    STR("Помилка: Невідома"),
    STR("Помилка: Невірний Tox ID (контрольна сума)"),
    STR("Помилка: Невірний Tox ID (антиспам)"),
    STR("Помилка: Недостатньо пам'яті"),

    //12
    STR("Передача файлу"),
    STR("Розпочато передачу файлу"),
    STR(".."),
    STR("Призупинено передачу файлу"),
    STR("Перервано передачу файлу"),
    STR("Скасовано передачу файлу"),
    STR("Завершено передачу файлу"),

    //19
    STR("Дзвінок скасовано"),
    STR("Вхідний виклик"),
    STR("Вихідний виклик"),
    STR("Розпочато розмову"),

    //23
    STR("Додати друзів"),
    STR("Tox ID"),
    STR("Повідомлення"),
    STR("Пошук друзів"),
    STR("Додати"),
    STR("Перемикання профілю"),
    STR("Запит додання до друзів"),
    STR("Налаштування користувача"),
    STR("Ім'я"),
    STR("Статус"),
    STR("Перевірка"),
    STR("Вибір пристроїв"),
    STR("Пристрій захоплення звуку"),
    STR("Пристрій відтворення звуку"),
    STR("Пристрій захоплення відео"),
    STR("Інше"),
    STR("Масштаб"),
    STR("Місце збереження"),
    STR("Мова"),
    STR("Мережа"),
    STR("IPv6:"),
    STR("UDP:"),
    STR("Проксі (SOCKS 5)"),
    STR("Зміна налаштувань мережі або проксі-сервера потребує від'єднання від мережі Tox"),

    //41
    STR("Копіювати"),
    STR("Копіювати (без імені)"),
    STR("Вирізати"),
    STR("Вставити"),
    STR("Видалити"),
    STR("Вибрати все"),
    STR("Видалити"),
    STR("Вийти"),
    STR("Прийняти"),
    STR("Ігнорувати"),

    //50
    STR("Натисніть для збереження"),
    STR("Натисніть для відкриття"),
    STR("Скасовано"),
},
};

#undef STR
