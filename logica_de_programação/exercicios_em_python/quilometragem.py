km = float(
    input('Velocidade: km')
)

if km < 80:
    print(
        'Velocidade permitida'
    )
else:
    print(
        'Você ultrapassou a velocidade permitida de 80km. Multado.'
    )