valores = []
soma = 0

for c in range(8):
    n = int(
        input(f'Digite o {c+1}º valor: ')
    )
    valores.append(n)
    soma += n
print(
    f'A soma dos valores digitados é: {soma}'
)