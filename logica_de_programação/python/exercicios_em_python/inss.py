name = str(
    input('Digite seu nome completo: ')
).upper()
age = int(
    input('Digite sua idade: ')
)
wage = float(
    input('Digite seu salário: ')
)

print(
    '-' * 20
)

print(
    f'Olá, {name}'
)
if age > 65: 
    print(
        'Você já atingiu a idade necessaria para se aposentar.'
    )
else:
    lack = 65 - age
    print(
        f'Falta {lack} anos para você se aposentar.'
    )
