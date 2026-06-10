valores = []
soma = media = 0

for c in range(4):
    nota = float(
        input(f'Digite a {c+1}º aluno: ')
    )
    valores.append(nota)
    soma += nota
media = soma / 4

print(
    f'A média foi: {media:.2f}'
)