#pragma once

/*

1. Syntax Explanation - Обяснение на синтаксиса

Describe what the following line of C++ code does : 
int* ptr = &var;.

Опиши какво прави следния ред от C++ код :int* ptr = &var;

int* ptr - pointer to an integer - Пойнтър който сочи към цяло число(int)
&var - address of the variable var - Адреса на променливата var,
тоест "&" извлича адреса на променливата var.

So when we combine them we get a pointer to an integer which 
points to the address of the variable var.

Тоест когато ги комбинираме се получава указател, който "сочи" 
към адреса на променливата var.







2. Concept Clarification - Уточнение на концепция(за цикли)

Explain the difference between a while loop and a do-while loop in C++.
Обясни разликата между while цикъл и do-while цикйъл в C++.
While loop checks the condition before executing the code in the body of the loop.
Do-while loop checks the condition after executing the code in the body of the loop.
While цикъл  проверява условието преди да изпълни кода в тялото на цикъла.
Do-while цикъл  проверява условието след като изпълни кода в тялото на цикъла.

3. Code Analysis - Анализ на код

Given a snippet of C++ code containing a for loop, explain what the loop does,
including how many times it iterates and why.
Даден е откъс от C++ код съдържащ for цикъл, обясни какво прави цикъла,
включително колко пъти се повтаря и защо.

for (int i = 0; i < 10; i++) {
	std::cout << i << std::endl;
}

In this example i is initialized to 0, then the condition is checked, and if "i"
is less than 10, the code in the body of the loop is executed, then i is incremented.
This process repeats until i is no longer less than 10.

В този пример i присвоява стойността 0, след това се проверява условието, и ако "i"
е по-малко от 10, кода в тялото на цикъла се изпълнява, след това i се увеличава.
Този процес се повтаря докато i не е по-голямо от 10.


4.Function Usage - Използване на функции
Write about how functions prevent useless code duplication.
Напиши как функциите предотвратяват повтаряне на ненужен код.

Functions allow us to write code once and then reuse it multiple times.
Функциите ни позволяват да пишем код веднъж и след това да го преизползваме многократно.

5.Memory Management - Управление на паметта
Discuss the importance of memory management in C++ and explain the difference between
stack and heap memory allocation.
Обсъди важността на управлението на паметта в C++ и обясни разликата между stack и heap
разпределяне на памет.

In a stack, the allocation and de-allocation are automatically done by the compiler 
whereas, in heap, it needs to be done by the programmer manually. 
Handling the Heap frame is costlier than handling the stack frame.

В стека, разпределянето и освобождаването се извършва автоматично от компилатора,
докато в хийпа това трябва да се извърши ръчно от програмиста.
Обработката на хийпа е "по-скъпоструваша" от обработката на стека.


Линк към източника на информацията: https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/


6. Object Oriented Programming - Обектно-ориентирано програмиране
Explain the concept of encapsulation in C++ and how it is acheived 
using classes.
Обясни концепцията на капсулацията в C++ и как се постига тя чрез класове.

Simply said , encapsulation is used to hide the data from the outside world.The way
to achieve this is by access modifiers, which are public, private and protected.

С по-прости думи, капсулацията се използва за скриване на данните от външния свят.
Начинът за постигане на това е чрез модификатори за достъп, които са public, private и protected.

7. Error Handling - Обработка на грешки
Describe how exceptions are used in C++ for error handling, with
an example of a try-catch block.
Обясни как се използват изключенията в C++ за обработка на грешки, с пример на try-catch блок.

When executing C++ code, different errors can occur: coding errors made by the programmer, 
errors due to wrong input, or other unforeseeable things.
When an error occurs, C++ will normally stop and generate an error message. 
The technical term for this is: C++ will throw an exception (throw an error).

https://www.w3schools.com/cpp/cpp_exceptions.asp


8. STL Containers - STL контейнери
Write about the purpose and use of the std::vector container in C++.
Напиши за "идеята" и използването на std::vector контейнера в C++.

Vectors are containers which can change in size. They are pretty
much like arrays, but they can change their size automatically when new 
elements are added or removed.

Векторите са контейнери, които могат да променят капацитета си. Те са подобни на масивите,
със разликата, че могат да променят своя размер автоматично, когато се прибавят или 
премахнат елементи.

9. Pointers and References - Указатели и референции

Explain the difference between a pointer and a reference in C++ and provide 
scenarios where one might be preferred over the other.
Обясни разликата между указател и референция в C++ и предостави сценарии,
в които едното може да бъде предпoчетено пред другото.

The difference between a pointer and a reference is that a pointer is a variable
that holds a memory address. A reference has the same memory address as the item
it references.

Разликата между указател и референция е, че указател е променлива, която съдържа адрес в паметта.
Референцията има същия адрес в паметта като елемента, към който се отнася.


10. Advanced features -  Напреднали функционалности

Explain the concept of templates in C++ and how they support generic programming. Include
example of a template function. 

 Обяснете концепцията за шаблоните в С++ и как те "съпортват" общото програмиране. Дайте 
 пример за шаблонна функция.



 C ++ използва шаблони за да се разреши използването на шаблонни техники на програмиране. Стандартната библиотека в C++ включва 
 Стандартна шаблонна библиотека (Standard Template Library или STL), тя предоставя рамка от шаблони за общи структури от данни и алгоритми. 
 Шаблоните в C ++ могат да се използват за шаблонно метапрограмиране (template metaprogramming), което е начин за предварително оценяване на част от кода 
 по време на компилация, а не по време на изпълнение.













*/