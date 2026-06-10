valores = []
print('Digite 5 valores.')
for c in range(5):
    num = int(
        input(f'Digite o {c+1}º valor: ')
    )
    valores.append(num)
num1 = int(
    input('Digite o valor que deseja consultar: ')
)
if num1 == valores[0]:
    print(f'O número {num1} está na lista')
elif num1 == valores[1]:
    print(f'O número {num1} está na lista')
elif num1 == valores[2]:
    print(f'O número {num1} está na lista')
elif num1 == valores[3]:
    print(f'O número {num1} está na lista')
elif num1 == valores[4]:
    print(f'O número {num1} está na lista')
else:
    print(f'O número {num1} não está na lista')