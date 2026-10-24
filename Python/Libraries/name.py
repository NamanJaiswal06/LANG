import sys

# try:
#     print("hello, my name is" , sys.argv[1]) #command line argument

# except IndexError:
#     print("too many arguments")




if len(sys.argv) <2:
    sys.exit("Too few Arguments") #exit here
elif len(sys.argv) >2:
    sys.exit("too many arguments")

print("hello , my name is", sys.argv[1])


#slices -> subset of a ds like list

for arg in sys.argv[1:]:
    print("hello , my name is ", arg)
    





