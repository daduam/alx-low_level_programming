section .data
  msg: db "Hello, Holberton", 0xa, 0x0

section .text
  extern printf
  global main

main:
  push rbp
  mov rbp, rsp
  mov edi, msg
  mov eax, 0x0
  call printf
  mov eax, 0x0
  pop rbp
  ret
