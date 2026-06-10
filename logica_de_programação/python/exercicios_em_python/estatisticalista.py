valores = []
maior = menor = 0
soma = media = pares = 0

for c in range(10): 
    num = int(
        input(f'Digite o {c+1:>2}º valor: ')
    )
    valores.append(num)
    soma += num
    if c == 0:
        maior = num
        menor = num
    else:
        if num > maior:
            maior = num
        if num < menor:
            menor = num
    if num % 2 == 0:
        pares += 1
media = soma / 10
print(
    f'A soma de todos os elementos foi: {soma}\n'
    f'A média foi: {media}\n'
    f'O maior valor foi: {maior}\n'
    f'O menor valor foi: {menor}\n'
    f'A quantidade de números pares foi: {pares}'
)