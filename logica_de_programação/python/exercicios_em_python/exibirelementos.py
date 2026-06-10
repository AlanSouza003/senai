valores = []

for c in range(5):
    n = int(
        input(f'Digite o {c+1}º valor: ')
    )
    valores.append(n)
print('Os números digitados foram:')
for valores in valores:
    print(valores)
    