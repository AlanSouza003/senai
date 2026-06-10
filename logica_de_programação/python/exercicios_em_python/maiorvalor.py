valores = []
maior = c = 0

for c in range(10):
    num = int(
        input(f'Digite {c+1}º valor: ')
    )
    valores.append(num)
    if c == 0:
        maior = num
    else:
        if num > maior: 
            maior = num
print(
    f'O maior valor digitado foi o {maior}.'
)