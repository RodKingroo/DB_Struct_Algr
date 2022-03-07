import csv
import numpy as np



def AveValue():
    sum_i = 0.0
    i=0.0
    a_value = 0.0
    x=0.0
    with open("Table/City.csv",  'r', newline='') as csvfile:
        reader = csv.reader(csvfile, delimiter=';', quotechar='|')
        next(reader, None)  
        
        for row in reader:
            female = row[4].replace(',','.')

            sum_i += float(female)
            i=i+1
            x=float(female)    
        a_value = sum_i/i
        return a_value

def NewTable():
    aveValue = AveValue()
    y=0.0
    with open("Table/City.csv",  'r', newline='') as csvfile:
        reader = csv.reader(csvfile, delimiter=';', quotechar='|')
        next(reader, None)

        for row in reader:

           female = row[4].replace(',','.')
           y=float(female) 
           if y>aveValue: print(row)

NewTable()