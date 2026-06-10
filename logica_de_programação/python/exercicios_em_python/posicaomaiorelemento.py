valores = []
p = 0
maior = 0

for c in range(8):
    num = int(
        input('Digite um número: ')
    )
    valores.append(num)
    if c == 0:
        maior = num
        p = c
    else:
        if num > maior:
            maior = num
            p = c
print(f'Lista do valores digitado: {valores}')
print(f'O maior valor digitado foi: {maior}')
print(f'E a posição dele é: {p}')

