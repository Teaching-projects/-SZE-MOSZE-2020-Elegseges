import subprocess
import os
import sys

exe = './' + sys.argv[1]
output = sys.argv[2]

unitPairs = [['unit_1.json', 'unit_2.json'],
             ['unit_2.json', 'unit_1.json'],
             ['unit_1.json', 'unit_3.json'],
             ['unit_3.json', 'unit_1.json'],
             ['unit_2.json', 'unit_3.json'],
             ['unit_3.json', 'unit_2.json']]


with open(output, 'w') as output_f:
    for pair in unitPairs:
        args = [exe, pair[0], pair[1]]
        subprocess.call(args,
                        stdout=output_f, stderr=output_f)