def main():
    flag = False;
    virus = input()
    temp_virus = virus
    num = int(input())
    for i in range(num):
        blood = input()
        virus = temp_virus
        count = 0
        index = 0
        for j in range(len(blood)):
            if blood[j] in virus:
                index = virus.index(blood[j])
                virus = virus[index:]
                count += 1
        
        if count == len(blood):
            print("POSITIVE")
        else:
            print("NEGATIVE")

 # Write code here 

main()
