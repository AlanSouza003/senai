valores = []
maiorque50 = 0
for c in range(10):
    num = int(
        input('Digite um valor: ')
    )
    valores.append(num)
    if num > 50:
        maiorque50 += 1
print(f'Dos valores digitados {maiorque50} são maiores que 50.')
