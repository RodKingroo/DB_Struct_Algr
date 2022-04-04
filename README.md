# Структуры и алгоритмы обработки данных

## Лабараторная работа 1. Лабораторная работа 1 (вводная)
__Задание__

Составить программу на языке C++ и программу на языке Python для решения следующей задачи:

> загрузить из файла данные;\
> выполнить обработку данных: ***Вывести названия городов, в которых численность женского населения выше среднего значения численности женского населения по всем городам***

###### [Решение на С++](https://github.com/RodKingroo/DB_Struct_Algr/tree/main/IntroLab/cppLabDB)
###### [Решение на Python](https://github.com/RodKingroo/DB_Struct_Algr/tree/main/IntroLab/pyLabDB)


---------------------------------------

## Лабораторная работа 2, часть 1 - Классы для работы с табличными данными
Дана база данных «Аудиотека». База данных состоит из четырёх таблиц.  Таблица «Альбомы» содержит записи о записанных альбомах, а также информацию о исполнителях. Таблица «Артисты» содержит записи о названии исполнителей. Таблица «Треки» содержит записи о записанных композициях, а также информацию о альбомах и жанрах. Поле Длительность содержит длительность аудиозаписи в миллисекундах, поле Размер содержит размер аудиозаписи в байтах, а поле Стоимость содержит стоимость аудиозаписи в рублях. Таблица «Жанры» содержит данные о названии жанров.
Разработать систему классов для работы с объектами-записями (строками) таблиц баз данных на ЯП С++.

Каждый класс прописать в отдельном модуле.

Настроить приватный доступ к полям класса, создать геттеры и сеттеры для полей класса.

###### [Готовое задание](https://github.com/RodKingroo/DB_Struct_Algr/tree/main/AudiotecaDataBase/AudiotecaDataBase)


---------------------------------------

## Лабораторная работа 3 - класс list
В исходном файле (см. вложение) содержится последовательность целых чисел.
Элементы последовательности могут принимать целые значения от –10 000 до 10 000 включительно. 

1 - Загрузите все данные из файла в объект класса list.\
2 - Определите и запишите в ответе сначала количество пар элементов последовательности, сумма которых кратна 3 и не кратна 6, а произведение оканчивается на 8. В данной задаче под парой подразумевается два идущих подряд элемента последовательности (например, если в исходном файле содержатся числа 1 7 2 3 7 5 всего пять пар чисел 1 7, 7 2, 2 3, 3 7, 7 5).\
3 - Сравните время работы программы на языках С++ (шаблон класса list) и Python (класс list).
###### [Решение на С++](https://github.com/RodKingroo/DB_Struct_Algr/tree/main/Lab3/listLab)
###### [Решение на Python](https://github.com/RodKingroo/DB_Struct_Algr/blob/main/Lab3/Source.py)

--------------------------------------

## Лабораторная работа 4 - шаблон класса set C++ (п/п 1)
На базе контейнера set библиотеки C++ STL решить следующую задачу.

В текстовом файле записан набор натуральных чисел, не превышающих 109. Гарантируется, что все числа различны. Необходимо определить, сколько в наборе таких пар чётных чисел, что их среднее арифметическое тоже присутствует в файле, и чему равно наибольшее из средних арифметических таких пар.

Первая строка входного файла содержит целое число N — общее количество чисел в наборе. Каждая из следующих N строк содержит одно число.

В результате вывести два целых числа: сначала количество пар, затем наибольшее среднее арифметическое.

```
Пример входного файла:

     6
     3
     8
     14
     11
     2
     17

В данном случае есть две подходящие пары: 8 и 14 (среднее арифметическое 11), 14 и 2 (среднее арифметическое 8). В ответе надо записать числа 2 и 11.
```

###### [Решение на С++](https://github.com/RodKingroo/DB_Struct_Algr/tree/main/ProjectSAOD/ProjectSAOD)

----------------------
## Лабораторная работа 5 - шаблон класса map C++: обработка данных
Вывести имена артистов, у которых хотя бы в одном альбоме есть хотя бы один трек в жанре Metal стоимостью выше 100.

Упорядочить результаты вывода в порядке возрастания суммарной стоимости таких треков этих артистов из всех альбомов.

###### [Решение](https://github.com/RodKingroo/DB_Struct_Algr/tree/main/pr0lertgenre/pr0lertgenre)
