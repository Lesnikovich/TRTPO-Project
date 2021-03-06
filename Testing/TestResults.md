# Представление результатов

| ID | Назначение/название | Сценарий | Ожидаемый результат | Фактический результат | Оценка |
|:---:|:---:|:---|:---|:---|:---|
| 1 | Создание нового контакта | 1. Нажмите на кнопку "Добавить контакт" ([см. рисунок 1](#1)), которая расположена на главной форме ([см. рисунок 2](#2)). 2. В появившемся окне "Добавление контакта" ([см. рисунок 3](#3)) введите данные в соответствующие поля по категориям:  Фамилия ("Иванов"); Имя ("Иван"); Отчество ("Иванович"); Мобильный телефон ("80299586834"); Город ("Минск"); Улица ("Васильева") ;Дом ("15"); Корпус ("-"); Квартира ("18"); Домашний телефон ("80172045447"); Организация (ООО "Акцент"); Должность ("Контролёр ОТК"); Рабочий телефон ("8017205f0762"). 3. Подтвердите ввод нажатием на кнопку "Сохранить и закрыть" ([см. рисунок 4](#4)). | Окно "Добавление контакта" скрылось. Введённые данные нового контакта добавлены в базу данных и отображены на панели "Список контактов" в соотвествии с активным режимом сортировки, поиска и фильтрации. | Окно "Добавление контакта" скрылось. Введённые данные нового контакта добавлены в базу данных и отображены на панели "Список контактов" ([см. рисунок 5](#5)) в соотвествии с активным режимом сортировки, поиска и фильтрации. | Успешно |
| 2 | Отмена создания нового контакта | 1. Нажмите на кнопку "Добавить контакт" ([см. рисунок 1](#1)), которая расположена на главной форме ([см. рисунок 2](#2)). 2. В появившемся окне "Добавление контакта" ([см. рисунок 3](#3)) не обязательно вводить какие-либо данные в соответствующие поля по категориям. 3. Отменить создание нового контакта нажатием на кнопку "Отменить и закрыть" ([см. рисунок 6](#6)). | Окно "Добавление контакта" скрылось. Введённые данные нового контакта не были добавлены в базу данных и отображены на панели "Список контактов" в соответствии с активным режимом сортировки, поиска и фильтрации. | Окно "Добавление контакта" скрылось. Введённые данные нового контакта не были добавлены в базу данных и отображены на пенели "Список контактов" ([см. рисунок 5](#5)) в соответствии с активным режимом сортировки, поиска и фильтрации. | Успешно |
| 3 | Динамический контекстные поиск | 1. Активируйте поисковую строку ([см. рисунок 7](#7)), которая находится на панели "Глобальный поиск"(Главная форма) ([см. рисунок 8](#8)). 2. Введите свой запрос ([см. рисунок 9](#9)). | При вводе поискового запроса, на панели "Список контактов" (Главная форма), автоматически появится результат контекстного поиска с учётом критериев поиска. Количество найденных записей (контактов) на панели "Список контактов" (Главная форма) отобразиться в соответствующем элементе. | При вводе поискового запроса, на панели "Список контактов" (Главня форма) ([см. рисунок 5](#5)), автоматически появится результат контекстного поиска с учётом критериев поиска ([см. рисунок 10](#10)). Количество найденных записей (контактов) на панели "Список контактов" (Главная форма) отобразиться в соответствующем элементе ([см. рисунок 11](#11)). | Успешно |
| 4 | Очистка строки поиска | 1. Выполните сценарий 3. 2. Нажмите кнопку очистки поисковой строки ([см. рисунок 12](#12)), которая находится на панели "Глобальный поиск" (Главная форма) ([см. рисунок 8](#8)). | Очистка строки поиска и возвращение всех записей на панель "Список контактов". | Очистка строки поиска ([см. рисунок 7](#7)) и возвращение всех записей на панель "Список контактов" ([см. рисунок 5](#5)). | Успешно |
| 5 | Переключение критерия поиска по полям базы данных | 1. Активируйте переключатель критерия поиска по полям базы данных ([см. рисунок 13](#13)), который находится на панели "Глобальный поиск"(Главня форма) ([см. рисунок 8](#8)). 2. Выберите критерий поиска по полям базы данных ([см. рисунок 14](#14)): Фамилия; Имя; Отчество; Мобильный телефон; Город; Улица; Дом; Корпус; Квартира; Домашний телефон; Организация; Должность; Рабочий телефон. | Отображение результата динамического контекстного поиска в соответствии с новым критерием поиска по полям базы данных. | Отображение результата динамического контекстного поиска на панели "Список контактов" в соответствии с новым критерием поиска по полям базы данных ([см. рисунок 15](#15)). | Успешно |
| 6 | Переключение критерия поиска по совпадению | 1. Активируйте переключатель критерия поиска по совпадению ([см. рисунок 16](#16)), который находится на панели "Глобальный поиск"(Главня форма) ([см. рисунок 8](#8)). 2. Выберите критерий поиска по совпадению ([см. рисунок 17](#17)). Совпадение может быть с: первыми символами совпадения по полям базы данных; любой частью, в данном случае будут выведены записи начинающиеся с вводимого запроса или содержащие его. | Отображение результата динамического контекстного поиска в сооответствии с новым критерием поиска по совпадению. | Отображение результата динамического контекстного поиска в сооответствии с новым критерием поиска по совпадению ([см. рисунок 18](#18)). | Успешно |
| 7 | Переключение критерия сортировки по алфавиту | 1. Найдите переключатель сортировки по алфавиту ([см. рисунок 19](#19)), который расположен на панели "Глобальный поиск"(Главная форма) ([см. рисунок 8](#8)). 2. Выбрать положение переключателя "от Я до А" ([см. рисунок 21](#21)). 3. Выбрать положение переключателя "от А до Я" ([см. рисунок 20](#20)). | Сначала список контактов отсортируется в обратном алфавитном порядке, а затем в алфавитном порядке. | Сначала список контактов отсортируется в обратном алфавитном порядке ([см. рисунок 22](#22)), а затем в алфавитном порядке ([см. рисунок 23](#23)). | Успешно |
| 8 | Осуществление перехода по списку контактов | 1. Найдите блок кнопок перехода по списку контактов ([см. рисунок 24](#24)), который расположен на панели "Глобальный поиск"(Главная форма) ([см. рисунок 8](#8)). 2. Нажмите на кнопку "Вперёд" ([см. рисунок 25](#25)). 3. Нажмите на кнопку "К концу списка" ([см. рисунок 26](#26)). 4. Нажмите на кнопку "Назад" ([см. рисунок 27](#27)). 5. Нажмите на кнопку "К началу списка" ([см. рисунок 28](#28)). | По умолчанию активирована и подробно отображена на панели "Блок данных о контакте", первая запись в списке контактов. При нажатии на кнопку "Вперёд" активируется следующая в списке контактов запись. При нажатии кнопки "К концу списка", активируется последняя в списке контактов запись. При нажатии кнопки "Назад", активируется предыдущая в списке контактов контактов запись. При нажатии на кнопку "К началу списка", активируется первая в списке контактов запись. | По умолчанию активирована и подробно отображена на панели "Блок данных о контакте", первая запись в списке контактов ([см. рисунок 5](#5)). При нажатии на кнопку "Вперёд" ([см. рисунок 25](#25)) активируется следующая в списке контактов запись ([см. рисунок 29](#29)). При нажатии кнопки "К концу списка" ([см. рисунок 26](#26)), активируется последняя в списке контактов запись ([см. рисунок 30](#30)). При нажатии кнопки "Назад" ([см. рисунок 27](#27)), активируется предыдущая в списке контактов контактов запись ([см. рисунок 31](#31)). При нажатии на кнопку "К началу списка" ([см. рисунок 28](#28)), активируется первая в списке контактов запись ([см. рисунок 5](#5)). | Успешно |
| 9 | Вызов руководства пользователя | 1. Нажмите соответствующую кнопку ([см. рисунок 32](#32)). | Отображается руководство пользователя. | Отображается руководство пользователя ([см. рисунок 33](#33)). | Успешно |
| 10 | Активация контакта напрямую через панель "Список контактов" (Главня форма) | 1. Активируйте ячейку любой неактивной записи ([см. рисунок 34](#34)) на панели "Список контактов" (Главня форма) . 2. Активируйте ячейку любой другой неактивной записи ([см. рисунок 35](#35)) на панели "Список контактов" (Главня форма). | Активна ячейка автоматически активирует контакт. | Активная ячейка автоматически активирует контакт. | Успешно |
| 11 | Редактирование данных контактов сразу на панели "Список контактов" (Главная форма)| 1. Активируйте любую ячейку ([см. рисунок 35](#35)) на пенели "Список контактов" (Главная форма). 2. Попытайтесь удалить, изменить или дополнить информацию в этой активной ячейке. | Программа не позволила на прямую удалять, изменять или дополнять информацию в этой активной ячейке. | Программа не позволила на прямую удалять, изменять или дополнять информацию в этой активной ячейке. | Успешно |
| 12 | Редактирование данных активного контакта сразу на панели "Блок данных о контакте" (Главная форма) | 1. Активировать любое поле активного контакта на панели "Блок данных о контакте" (Главня форма) ([см. рисунок 36](#36)), путём установки курсора в оную ([см. рисунок 37](#37)). 2. Попробуйте удалить, изменить или дполнить информацию в этом поле. | Программа не позволяет на прямую удалять, изменять или дополнять информацию в поле на панели "Блок данных о контакте" (Главная форма). | Программа не позволяет на прямую удалять, изменять или дополнять информацию в поле на панели "Блок данных о контакте" (Главная форма). | Успешно |
| 13 | Осуществление тонального набора | 1. Нажать на кнопку с соответствующей иконкой ([см. рисунок 38](#38)) (появится окно с информационным сообщением). 2. Перевести телефон в тональный режим. 3.  Поднести телефон к динамику устройства. 4. Нажать кнопку "ОК" в появившемся информационном сообщении ([см. рисунок 39](#39)). | Окно с информационным сообщением скрылось. Осуществился тональный набор телефонного номера. | Окно с информационным сообщением скрылось. Осуществился тональный набор телефонного номера. В случае неправильного набора телефонного номера появится соответствующее информационное сообщение ([см. рисунок 40](#40)). | Успешно |
| 14 | Редактирование активного контакта | 1. Нажмите на кнопку "Редактировать" ([см. рисунок 41](#41)), которая расположена на главной форме. 2. В появившемся окне "Редактирование контакта" ([см. рисунок 42](#42)) удалите, измените или дополните информацию в соответствующих полях по категориям: Фамилия ("Иванов"->"Петров"); Имя ("Иван"->"Пётр"); Отчество ("Иванович"->"Петрович"); Мобильный телефон ("80299586834"->"80339243569"); Город ("Минск"->"Жодино"); Улица ("Васильева"->"Лермантова"); Дом ("15"->"17"); Корпус ("-"->"а"); Квартира ("18"->"314"); Домашний телефон ("80172045447"->"80176423546"); Организация (ООО "Акцент"->ООО "Ваш дом"); Должность ("Контролёр ОТК"->"Слесарь КИПа"); Рабочий телефон ("8017205f0762"->"80175914294"). 3. Подтвердите редактирование нажмитем на кнопку "Сохранить и закрыть" ([см. рисунок 4](#4)). | Окно "Редактирование контакта" скрылось. Изменённые данные активного контакта по категориям сохранены в соответствующих полях базы данных и отображены на панели "Список контактов" и панели "Блок данных о контакте" в соотвествии с активным режимом сортировки, поиска и фильтрации. | Окно "Редактирование контакта" ([см. рисунок 43](#43)) скрылось. Изменённые данные активного контакта по категориям сохранены в соответствующих полях базы данных и отображены на панели "Список контактов" ([см. рисунок 5](#5)) и панели "Блок данных о контакте" ([см. рисунок 36](#36)) в соотвествии с активным режимом сортировки, поиска и фильтрации. | Успешно |
| 15 | Отмена редактирования активного контакта | 1. Нажмите на кнопку "Редактировать" ([см. рисунок 41](#41)), которая расположена на главной форме. 2. В появившемся окне "Редактирование контакта" ([см. рисунок 42](#42)) не обязательно удалять, изменять или дополнять информацией соответствующие поля по категориям. 3. Отменить редактирование активного контакта нажатием на кнопку "Отменить и закрыть" ([см. рисунок 6](#6)). | Окно "Редактирование контакта" скрылось. Введённые изменения активного контакта не были добавлены в базу данных и отображены на панели "Список контактов" и на панели "Блок данных о контакте" в соответствии с активным режимом сортировки, поиска и фильтрации. | Окно "Редактирование контакта" ([см. рисунок 42](#42)) скрылось. Введённые изменения активного контакта не были добавлены в базу данных и отображены на панели "Список контактов" ([см. рисунок 5](#5)) и на панели "Блок данных о контакте" ([см. рисунок 36](#36)) в соответствии с активным режимом сортировки, поиска и фильтрации. | Успешно |
| 16 | Удаление активного контакта из базы данных | 1. Нажмите на кнопку "Редактировать" ([см. рисунок 41](#41)), которая расположена на главной форме. 2. В появившемся окне "Редактирование контакта" ([см. рисунок 43](#43)) не обязательно удалять, изменять или дополнять информацией соответствующие поля по категориям. 3. Удалить активный контакт из базы данных нажатием на кнопку "Удалить запись и закрыть" ([см. рисунок 44](#44)). | Окно "Редактирование контакта" скрылось. Данные активного контакта были удалены из базы данных, а также из панели "Список контактов" и панели "Блок данных о контакте" в соответствии с активным режимом сортировки, поиска и фильтрации. | Окно "Редактирование контакта" ([см. рисунок 43](#43)) скрылось. Данные активного контакта были удалены из базы данных, а также из панели "Список контактов" ([см. рисунок 45](#45)) и панели "Блок данных о контакте" в соответствии с активным режимом сортировки, поиска и фильтрации. | Успешно |
| 17 | Создание и открытие отчёта | 1. Активируйте контакт, на основе полей которого будет создан отчёт ([см. рисунок 46](#46)). 2. Нажмите кнопку "Открыть отчёт" ([см. рисунок 47](#47)). | В шаблоне программы для работы с электронными таблицами Microsoft Excel, будет создан отчёт, где каждое поле соответствует полю активной записи на основании которой был создан данные отчёт. | В шаблоне программы для работы с электронными таблицами Microsoft Excel создаётся отчёт, где каждое поле соответствует полю активной записи на основании которой был создан данные отчёт ([см. рисунок 48](#48)). | Успешно |
| 18 | Выход из программы "Телефонный справочник" |  1. Нажмите на кнопку "Закрыть программу" ([см. рисунок 49](#49)). | Осуществляется выход из программы "Телефонный справочник" | Осуществляется выход из программы "Телефонный справочник" | Успешно |

# Иллюстрации

<a name="1"/>

Рисунок 1.</br>
![Рисунок 1](../Images/Testing/Add.png)

<a name="2"/>

Рисунок 2.</br>
![Рисунок 2](../Images/Testing/Main-form.PNG)

<a name="3"/>

Рисунок 3.</br>
![Рисунок 3](../Images/Testing/Add-kontakt.PNG)

<a name="4"/>

Рисунок 4.</br>
![Рисунок 4](../Images/Testing/Save-and-close.PNG)

<a name="5"/>

Рисунок 5.</br>
![Рисунок 5](../Images/Testing/list-of-kontakt.PNG)

<a name="6"/>

Рисунок 6.</br>
![Рисунок 6](../Images/Testing/Cancel-and-close.PNG)

<a name="7"/>

Рисунок 7.</br>
![Рисунок 7](../Images/Testing/Search-string.PNG)

<a name="8"/>

Рисунок 8.</br>
![Рисунок 8](../Images/Testing/Global-search.PNG)

<a name="9"/>

Рисунок 9.</br>
![Рисунок 9](../Images/Testing/Input-query.PNG)

<a name="10"/>

Рисунок 10.</br>
![Рисунок 10](../Images/Testing/Search-result.PNG)

<a name="11"/>

Рисунок 11.</br>
![Рисунок 11](../Images/Testing/Found-records.PNG)

<a name="12"/>

Рисунок 12.</br>
![Рисунок 12](../Images/Testing/Retry.PNG)

<a name="13"/>

Рисунок 13.</br>
![Рисунок 13](../Images/Testing/Search-by.PNG)

<a name="14"/>

Рисунок 14.</br>
![Рисунок 14](../Images/Testing/Search-by-field.png)

<a name="15"/>

Рисунок 15.</br>
![Рисунок 15](../Images/Testing/Result-search-by-field.PNG)

<a name="16"/>

Рисунок 16.</br>
![Рисунок 16](../Images/Testing/Math-with.PNG)

<a name="17"/>

Рисунок 17.</br>
![Рисунок 17](../Images/Testing/Math-with-.png)

<a name="18"/>

Рисунок 18.</br>
![Рисунок 18](../Images/Testing/Result-math-with-.PNG)

<a name="19"/>

Рисунок 19.</br>
![Рисунок 19](../Images/Testing/Sort-alphabetically.PNG)

<a name="20"/>

Рисунок 20.</br>
![Рисунок 20](../Images/Testing/Sort-alphabetically-.PNG)

<a name="21"/>

Рисунок 21.</br>
![Рисунок 21](../Images/Testing/In-reverse.PNG)

<a name="22"/>

Рисунок 22.</br>
![Рисунок 22](../Images/Testing/In-reverse-result.PNG)

<a name="23"/>

Рисунок 23.</br>
![Рисунок 23](../Images/Testing/Sort-alphabetically-result.PNG)

<a name="24"/>

Рисунок 24.</br>
![Рисунок 24](../Images/Testing/Block-buttons.PNG)

<a name="25"/>

Рисунок 25.</br>
![Рисунок 25](../Images/Testing/Next.PNG)

<a name="26"/>

Рисунок 26.</br>
![Рисунок 26](../Images/Testing/To-end.PNG)

<a name="27"/>

Рисунок 27.</br>
![Рисунок 27](../Images/Testing/Back.PNG)

<a name="28"/>

Рисунок 28.</br>
![Рисунок 28](../Images/Testing/To-start.PNG)

<a name="29"/>

Рисунок 29.</br>
![Рисунок 29](../Images/Testing/Next-result.PNG)

<a name="30"/>

Рисунок 30.</br>
![Рисунок 30](../Images/Testing/To-end-result.PNG)

<a name="31"/>

Рисунок 31.</br>
![Рисунок 31](../Images/Testing/Back-result.PNG)

<a name="32"/>

Рисунок 32.</br>
![Рисунок 32](../Images/Testing/Help.PNG)

<a name="33"/>

Рисунок 33.</br>
![Рисунок 33](../Images/Testing/Help-result.PNG)

<a name="34"/>

Рисунок 34.</br>
![Рисунок 34](../Images/Testing/Choose-one.PNG)

<a name="35"/>

Рисунок 35.</br>
![Рисунок 35](../Images/Testing/Choose-second.PNG)

<a name="36"/>

Рисунок 36.</br>
![Рисунок 36](../Images/Testing/About.PNG)

<a name="37"/>

Рисунок 37.</br>
![Рисунок 37](../Images/Testing/Edit-about.PNG)

<a name="38"/>

Рисунок 38.</br>
![Рисунок 38](../Images/Testing/Call.PNG)

<a name="39"/>

Рисунок 39.</br>
![Рисунок 39](../Images/Testing/Call-message.PNG)

<a name="40"/>

Рисунок 40.</br>
![Рисунок 40](../Images/Testing/Call-message-error.PNG)

<a name="41"/>

Рисунок 41.</br>
![Рисунок 41](../Images/Testing/Edit.PNG)

<a name="42"/>

Рисунок 42.</br>
![Рисунок 42](../Images/Testing/Edit-window.PNG)

<a name="43"/>

Рисунок 43.</br>
![Рисунок 43](../Images/Testing/Edit-window-result.PNG)

<a name="44"/>

Рисунок 44.</br>
![Рисунок 44](../Images/Testing/Delete-and-close.PNG)

<a name="45"/>

Рисунок 45.</br>
![Рисунок 45](../Images/Testing/Before-delete.PNG)

<a name="46"/>

Рисунок 46.</br>
![Рисунок 46](../Images/Testing/Kononov.PNG)

<a name="47"/>

Рисунок 47.</br>
![Рисунок 47](../Images/Testing/Open-report.PNG)

<a name="48"/>

Рисунок 48.</br>
![Рисунок 48](../Images/Testing/Template.PNG)

<a name="49"/>

Рисунок 49.</br>
![Рисунок 49](../Images/Testing/Exit.PNG)