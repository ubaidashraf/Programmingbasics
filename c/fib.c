89 f8
85 ff
74 26
83 ff 02
76 1c
89 f9
ba 01 00 00 00
be 01 00 00 00
8d 04 16
83 f9 02
74 0d
89 d6
ff c9
89 c2
eb f0
b8 01 00 00
c3
//nmklwerwerw

fib:
    mov rax, rdi               ; The argument is stored in rdi, put it into rax
    test rdi, rdi              ; Is the argument zero?
    je .return_from_fib        ; Yes - return 0, which is already in rax
    cmp rdi, 2                 ; No - compare the argument to 2
    jbe .return_1_from_fib     ; If it is less than or equal to 2, return 1
    mov rcx, rdi               ; Otherwise, put it in rcx, for use as a counter
    mov rdx, 1                 ; The first previous number starts out as 1, put it in rdx
    mov rsi, 1                 ; The second previous number also starts out as 1, put it in rsi
.fib_loop:
    lea rax, [rsi + rdx]       ; Put the sum of the previous two numbers into rax
    cmp rcx, 2                 ; Is the counter 2?
    je .return_from_fib        ; Yes - rax contains the result
    mov rsi, rdx               ; No - make the first previous number the second previous number
    dec rcx                    ; Decrement the counter
    mov rdx, rax               ; Make the current number the first previous number
    jmp .fib_loop              ; Keep going
.return_1_from_fib:
    mov rax, 1                 ; Set the return value to 1
.return_from_fib:
    ret                        ; Return


unsigned int fib(unsigned int n)
{
    if (!n)
    {
        return 0;
    }
    else if (n <= 2)
    {
        return 1;
    }
    else
    {
        unsigned int f_nminus2, f_nminus1, f_n;       
        for (f_nminus2 = f_nminus1 = 1, f_n = 0; ; --n)
        {
            f_n = f_nminus2 + f_nminus1;
            if (n <= 2)
            {
                return f_n;
            }
            f_nminus2 = f_nminus1;
            f_nminus1 = f_n;
        }
    }
}