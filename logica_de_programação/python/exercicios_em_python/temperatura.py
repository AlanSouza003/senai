temp = int(
    input('Quantos graus esta fazendo: ')
)

print()

print(
    f'Na sua cidade esta fazendo {temp}º graus\n'
    f'Classificação: ', end=''
)
if temp < 15: 
    print(
        'Frio'
    )
elif 15 <= temp < 30:
    print(
        'Agradável'
    )
else:
    print(
        'Quente'
    )
