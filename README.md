# Задание №1 - Битовые операции
## Сборщик проекта
В качестве сборщика проекта используется Makefile. Для компиляции проекта необходимо ввести следующую команду в корне проекта:
``` bash
make
```

Для очистки бинарных файлов можно воспользоваться командой:
``` bash
make clean
```

## Задание
1. Вывести двоичное представление целого положительного числа, используя битовые операции (число вводится с клавиатуры).
2. Вывести двоичное представление целого отрицательного числа, используя битовые операции (число вводится с клавиатуры).
3. Найти количество единиц в двоичном представлении целого положительного числа (число вводится с клавиатуры).
4. Поменять в целом положительном числе (типа int) значение третьего байта на введенное пользователем число (изначальное число также вводится с клавиатуры).

## Результаты тестирования программы
### Задание №1
Пример правильного ввода:
```
Enter positive integer number: 1000
Integer value in binary: 00000000000000000000001111101000
```

Пример неправильного ввода:
```
Enter positive integer number: -1000
Number is not positive
```
### Задание №2
Пример правильного ввода:
```
Enter negative integer number: -60000
Integer value in binary: 11111111111111110001010110100000
```

Пример неправильного ввода:
```
Enter negative integer number: 1000
Number is not negative
```
### Задание №3
Пример правильного ввода:
```
Enter positive integer number: 100000
Integer value in binary: 00000000000000011000011010100000
Number of ones in binary form of number: 6
```

Пример неправильного ввода:
```
Enter positive integer number: -1  
Number is not positive
```
### Задание №4
Пример правильного ввода:
```
Enter positive integer number: 100000
Enter positive number (from 0 to 255): 255
Integer value in binary: 00000000000000011000011010100000
Third byte in binary: 11111111
Value with changed third byte in binary: 00000000111111111000011010100000
```

Пример неправильного ввода:
```
Enter positive integer number: -10
Number is not positive
Enter positive integer number: 10000
Enter positive number (from 0 to 255): 256
Number is wrong
Enter positive number (from 0 to 255): 255
Integer value in binary: 00000000000000000010011100010000
Third byte in binary: 00000000000000000000000011111111
Value with changed third byte in binary: 00000000111111110010011100010000
```
