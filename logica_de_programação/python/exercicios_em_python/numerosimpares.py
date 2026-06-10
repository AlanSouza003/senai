valores = []
impar = 0

for c in range(10):
    num = int(
        input('Digite um número: ')
    )
    valores.append(num)
    if num % 2 == 1:
        impar += 1
print(f'O total de números pares: {impar}')