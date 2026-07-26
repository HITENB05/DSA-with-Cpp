import os 

file_name = input("Enter the file name : ")

os.system(f"g++ src/{file_name}.cpp -o exes/{file_name}")
os.system(f"./exes/{file_name}")

print("ShellScript ran Sucessfully")