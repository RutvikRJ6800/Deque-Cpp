[![c++][c++-shield]][c++-url]
[![License][license-shield]][license-url]
<!-- [![CodeCov][codecov-shield]][codecov-url] -->

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[c++-shield]: https://img.shields.io/badge/C++-Solutions-blue.svg?style=flat&logo=c%2B%2B
[c++-url]: https://img.shields.io/badge/-c++-black?logo=c%2B%2B&style=social
[license-shield]: https://img.shields.io/github/license/RutvikRJ6800/Deque-Cpp
[license-url]: https://github.com/RutvikRJ6800/Deque-Cpp/blob/main/LICENSE

# 💡 What is Deque?

Deque.h contains all fuctions of doubly ended queue datastructure.

# 🤸 Getting Started

## 💾 How to use .?
Include Deque.h Header file into your c++ file using below code:

```cpp
#include "Deque.h"
```

## 💾 Declaration of Deque
Declare variable as like template datatype, and call constructor function deque() or deque(SIZE, INITIAL_VAL):

```cpp
#include "Deque.h"
    Deque<int> dq;
    dq.deque(); // initialize deque with size 5
```
```cpp
#include "Deque.h"
    Deque<int> dq;
    dq.deque(5,0); // initialize deque with size 5 and all initalize with all element as 0. 
```

> **Note** - Deque.h supports C++11, C++14, and C++17.

> **Note** - You can create Deque of string, int, float, double and bool datatype.


## 🏇 Below are the functions on deque.

1. resize() : resize deque with new size and initialize new space with VALUE.
```cpp
    dq.resize(NEW_SIZE, VALUE):
```

2. print() : print deque from front to rear.
```cpp
    dq.print();
```

3. isEmpty() : check if deque is empty?
```cpp
    cout<<dq.isEmpty();
``` 

4. isFull() : check if deque is full?
```cpp
    cout<<dq.isFull();
``` 

5. size() : return current size of deque.
```cpp
    cout<<dq.size();
``` 

6. push_back() : add DATA at end of deque.
```cpp
    dq.push_back(DATA);
``` 

7. push_front() : add DATA at front of deque.
```cpp
    dq.push_front(DATA);
``` 

8. pop_back() : remove element from the end of deque.
```cpp
    dq.pop_back();
``` 

9. pop_front() : remove element from the begining of deque.
```cpp
    dq.pop_front();
``` 

10. front() : return first element of deque.
```cpp
    cout<<dq.front();
``` 

11. back() : return last element of deque.
```cpp
    cout<<dq.back();
``` 

12. [i] :  return ith element of deque.
```cpp
    cout<<dq[i];
``` 
# 📜 License

This is distributed under the terms of the GNU General Public License 3.0. 
A complete version of the license is available in the [LICENSE](LICENSE) file in
this repository. Any contribution made to this project will be licensed under
the GNU General Public License v3.0.