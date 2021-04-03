def main():
    testcase = int(input())
    while(testcase != 0):
        a , b = list(map(int , input().split()))
        if a == b:
            print(0)
            testcase -= 1
            continue
        elif a > b:
            print(-1)
            testcase -= 1
            continue

        
       
        list_prime = []
        for num in range(a , b+1):
            if num > 1:
                for i in range(2 , int(num ** 0.5) + 1):
                    if num % i == 0:
                        break
                else:
                    list_prime.append(num)
        if a == b:
            print(0)
        elif len(list_prime) == 0:
            print(-1)
        else:
            print(max(list_prime)- min(list_prime))
        testcase -= 1


main()
