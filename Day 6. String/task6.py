# Enter your code here. Read input from STDIN. Print output to STDOUT

word_count = int(input())

def odd_values_string(text):
    result = ""
    for i in range(len(text)):
        if i % 2 == 0:
            result = result + text[i]
    return result

def even_values_string(text):
    result = ""
    for i in range(len(text)):
        if i % 2 != 0:
            result = result + text[i]
    return result

words = []
for word in range(word_count):
    words.append(str(input()))

for word in words:
    print(odd_values_string(word) + " " + even_values_string(word))