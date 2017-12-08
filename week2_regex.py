import re
testfile= open("regex_sum_9804.txt")
all_list = []
for line in testfile:
    line = line.rstrip()
    num = re.findall('[0-9]+', line)
    new_list = []
    for item in num:
        new_item = int(item)
        new_list.append(new_item)
    all_list.extend(new_list)
print(sum(all_list))
