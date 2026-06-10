valores = []

for c in range(10):
    num = int(
        input('Digite um valor: ')
    )
    valores.append(num)
for c in valores[::-1]:
    print(f'{c:02d}')