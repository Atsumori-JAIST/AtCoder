def main():
    n = int(input())
    nums = list(map(int, input().split()))
    count = 0

    proc(nums, count)


def proc(num_list, cnt):
    if all(tmp % 2 == 0 for tmp in num_list):
        cnt += 1
        proc(list(map(lambda x: x // 2, num_list)), cnt)
    else:
        print(cnt)


if __name__ == "__main__":
    main()