from sys import argv, exit
import csv


def main():
    if len(argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")
        exit(1)

    STRs = []
    profiles = []

    with open(argv[1], mode="r") as database:
        reader = csv.DictReader(database)
        STRs = reader.fieldnames[1:]
        for row in reader:
            profiles.append(row)
    seq_str_count = dict.fromkeys(STRs, 0)

    with open(argv[2], mode="r") as sequence_file:
        sequence = sequence_file.readline()

        for STR in STRs:
            seq_str_count[STR] = find_repeats(sequence, STR)

    for profile in profiles:
        match_count = 0

        for STR in STRs:
            if int(profile[STR]) != seq_str_count[STR]:
                continue
            match_count += 1

        if match_count == len(STRs):
            print(profile["name"])
            exit(0)

    print("No match")
    exit(1)


def find_repeats(sequence, STR):
    L = len(STR)

    max_repeats = 0
    for i in range(len(sequence)):
        repeats = 0

        if sequence[i : i + L] == STR:
            repeats += 1
            while sequence[i : i + L] == sequence[i + L : i + (2 * L)]:
                repeats += 1
                i += L

        if repeats > max_repeats:
            max_repeats = repeats

    return max_repeats


if __name__ == "__main__":
    main()
