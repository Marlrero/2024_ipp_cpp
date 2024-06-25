# 2024_ipp_cpp
  - 일학습병행(IPP) 학습근로자를 위한 2024 멘토링 프로그램 코드 자료
  - C/C++/Linux

### Environment setting
1. WSL (Windows Subsystem for Linux)
    - Windows 기능 켜기/끄기
        - Linux용 Windows 하위 시스템
        - 가상 머신 플랫폼
    - https://aka.ms/wsl2kernel
        ```
        > wsl -set-default-version 2
        ```
    - Ubuntu 22.04.3 LTS
2. VS Code
    - Extension > WSL
    - Open folder > /home/user
    - New Terminal
3. Ubuntu update
    ```
    $ sudo apt update
    $ sudo apt upgrade
    ```
4. C
    - VS Code > Compiler install
        ```
        $ sudo sh -c 'apt update ; apt install -y build-essential'
        ```
    - first.c
    - compile and build
        ```
        $ gcc first.c
        $ ./a.out
        ```
    - object file name
        ```
        $ gcc -o first first.c
        $ ./first
        ```
5. C++ (installed gcc)
    - gcc
        ```
        $ gcc -o firstcpp first.cpp -lstdc++
        ```
    - g++
        ```
        $ g++ -o firstcpp first.cpp
        ```


### Reference
  - C (Pointer)
    - Kamran Amini, Extream C, Packt, 2019.
    J. Gustedt, Modern C, HAL Open Science, 2021.
    - 윤성우, 난 정말 C Programming을 공부한 적이 없다구요!, 오렌지미디어, 2012.
    - 천인국, 쉽게 풀어쓴 C언어 Express, 생능출판, 2023.
    - 천인국 외, C언어로 쉽게 풀어쓴 자료 구조, 생능출판, 2014.
    - ISO/IEC 9899-202x Programming language – C (N2310), 2018.
  - C++
    - Bjarne stroustrup, The C++ Programming Language, 4rd edition, 2013.
    - 윤성우, 열혈C++프로그래밍, 오렌지미디어, 2011.
    - 황기태, 명품C++ 프로그래밍, 생능출판, 2020.
    - https://isocpp.org/std/the-standard, ISO/IEC 14882.2020(E) Programming Language C++, 2024 Standard C++ Foundation, 2024. 
  - UNIX/OS
    - IEEE Std 1003.1, Single unix specification version 4, 2018 edition, opengroup.org, 2017.
    - W. R. Stevens, et al. Advanced programming in the unix environment, 3rd edition, Pearson, 2013.
    - A. Silberschatz, et al. Operating system concepts, 10th edition, Wiley, 2020.
    - S. J. Matthews, et al. Dive into systems: A gentle introduction to computer system, No Starch Press, 2022.
  