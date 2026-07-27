import os 
folder_name = input("Enter the folder name : ")
file_name = input("Enter the file name : ")

os.system(f"g++ {folder_name}/{file_name}.cpp -o exes/{file_name}")
print("output--->\n")
os.system(f"./exes/{file_name}")

print("\nShellScript ran Sucessfully\n")



