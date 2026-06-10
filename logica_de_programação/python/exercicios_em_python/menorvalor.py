valores = []
menor = c = 0

for c in range(10):
    num = int(
        input(f'Digite {c+1}º valor: ')
    )
    valores.append(num)
    if c == 0:
        menor = num
    else:
        if num < menor:
            menor = num
print(
    f'O menor valor digitado foi o {menor}.'
)