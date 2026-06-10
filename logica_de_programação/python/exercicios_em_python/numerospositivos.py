valores = []

for c in range(8):
    num = int(
        input(f'Digite o {c+1}º valor: ')
    )
    valores.append(num)
print('Esses são o números positivos armazenados na lista:')
for valores in valores:
    if valores > 0:
        print(valores)