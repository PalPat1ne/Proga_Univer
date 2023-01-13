SECTION .data
enter: DB 'input text' ,10 ; ’Hello world!’ 
enterLen: EQU $-enter ; Длина строки ’Hello world!’
;SECTION .bss
buffer: RESB 15

SECTION .text ; Начало секции кода
GLOBAL _start ; Метка _start должна быть глобальной,
; чтобы линкер смог её найти и сделать
; точкой входа в программу.
_start:
mov eax, 4
mov ebx, 1
mov ecx, enter
mov edx, enterLen
int 80h

mov eax, 3 ; Системный вызов для записи (sys_write)
mov ebx, 2 ; Описатель файла 1 - стандартный вывод
mov ecx, buffer ; Адрес строки hello в ecx
mov edx , 15
int 80h ; Вызов ядра

mov eax, 4
mov ebx, 1
int 80h
mov eax, 1
mov ebx, 0
int 80h