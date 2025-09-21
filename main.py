while True:
    skaitli = []

    while True:
        x = input('Ievadi skaitli vai simbolu "q", lai izietu no cikla: ')
        if x.lower() == "q":
            break
        elif x.isnumeric():
            print("\033c", end='')
            skaitli.append(int(x))
        else:
            print("\033c", end='')
            print("Ievads nebija skaitlis")

    sum = 0
    sk = 0

    for i in skaitli:
        if i % 2 != 0:
            sum += i
            sk += 1

    print(f"Nepāra skaitļa summa ir {sum/sk}")
    if input("Atkartot programmu? [y/n] : ").lower() == "n":
        break