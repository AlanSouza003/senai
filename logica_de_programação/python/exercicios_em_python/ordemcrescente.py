valores = []

for c in range(8):
    num = int(input('Digite um valor: '))
    valores.append(num)

valores.sort()

for c in valores:
    print(f'{c:02d}')