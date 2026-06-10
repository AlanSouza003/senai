alunos = []
notas = []
aluno_maior_nota = aluno_menor_nota = ''
soma = media = 0
maior_nota = menor_nota = 0

print('—' * 20)
print(f'{'Lista de Alunos':^20}')
print('—' * 20)
for c in range(5):
    nome = str(input(f'{c+1}ª Aluno: '))
    nota = float(input('Nota: '))
    print('—' * 20)
    alunos.append(nome)
    notas.append(nota)
    soma += nota
    if c == 0:
        maior_nota = nota
        menor_nota = nota
        aluno_maior_nota = nome
        aluno_menor_nota = nome
    else:
        if nota > maior_nota:
            maior_nota = nota
            aluno_maior_nota = nome
        if nota < menor_nota:
            menor_nota = nota
            aluno_menor_nota = nome
media = soma / 5

qtd_aprovados = 0
qtd_recuperacao = 0
qtd_reprovados = 0

print('\n' + '=' * 40)
print(f"{'RELATÓRIO FINAL':^40}")
print('=' * 40)

print(f'• Maior nota: {aluno_maior_nota} ({maior_nota})')
print(f'• Menor nota: {aluno_menor_nota} ({menor_nota})')
print(f'• Média Geral da Turma: {media:.2f}')
print('—' * 40)

print("ALUNOS APROVADOS:")
for i in range(len(alunos)):
    if notas[i] >= 7:
        print(f"  - {alunos[i]} (Nota: {notas[i]})")
        qtd_aprovados += 1
if qtd_aprovados == 0:
    print("  - Nenhum aluno aprovado.")

print('—' * 40)

print("ALUNOS EM RECUPERAÇÃO:")
for i in range(len(alunos)):
    if 5 <= notas[i] < 7:
        print(f"  - {alunos[i]} (Nota: {notas[i]})")
        qtd_recuperacao += 1
if qtd_recuperacao == 0:
    print("  - Nenhum aluno em recuperação.")

print('—' * 40)

print("ALUNOS REPROVADOS:")
for i in range(len(alunos)):
    if notas[i] < 5:
        print(f"  - {alunos[i]} (Nota: {notas[i]})")
        qtd_reprovados += 1
if qtd_reprovados == 0:
    print("  - Nenhum aluno reprovado.")

print('=' * 40)

print(f"RESUMO: {qtd_aprovados} Aprovado(s) | {qtd_recuperacao} Em Recuperação"
      f"| {qtd_reprovados} Reprovado(s)")
print('=' * 40)
