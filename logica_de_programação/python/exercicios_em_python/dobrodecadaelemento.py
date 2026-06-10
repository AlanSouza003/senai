valores = []
dobro = 0

for c in range(6):
    num = int(
        input(f'Digite o {c+1}º valor: ')
    )
    valores.append(num)
print('Aqui estão o dobro de cada valor digitado:')
for valores in valores:
    print(f'{valores} = {valores*2}')
