valores = []

for c in range(10):
    n = int(input(f'Digite o {c+1}º valor: '))
    valores.append(n)

pares = []
impares = []

for valor in valores:
    if valor % 2 == 0:
        pares.append(valor)
    else:
        impares.append(valor)
print('-'*10)
print('PARES   | ÍMPARES')

maior = max(len(pares), len(impares))

for i in range(maior):
    p = f'{pares[i]:02d}' if i < len(pares) else '  '
    imp = f'{impares[i]:02d}' if i < len(impares) else '  '
    print(f'{p:^7} | {imp:^7}')