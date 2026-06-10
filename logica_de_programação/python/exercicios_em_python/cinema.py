age = int(
    input('Digite sua idade: ')
)

if age < 12 or age > 60:
    print(
        'Menores de 12 anos e maiores de 60 anos pagam meia'
    )
else: 
    print(
        'Somente menores de 12 anos e maiores de 60 anos pagam meia.\n'
        'Os demais pagam inteira.'
    )