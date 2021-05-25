def main():
    n = 0               # 要素数 N
    cnt = 0             # 操作回数
    input_num = []      # 入力数値の配列

    # 入力データ格納
    n = int(input())
    input_num = list(map(int, input().split()))

    # 要素数チェックして，問題なければdevide関数実施
    valid(n, input_num)
    devide(cnt, input_num)
        


# 要素数チェック
def valid(num, in_list):
    if num != len(in_list):
        exit()

# 2で割った商のリスト
def quote_list(in_list):
    quo_list = list(map(quote2, in_list))
    return quo_list

def quote2(m):
    return m // 2

# 2で全部割れる限り割る
def devide(count, k):
    if (all(tmp % 2 == 0 for tmp in k)):
        count += 1
        devide(count, quote_list(k))
    else:
        print(count)


if __name__ == "__main__":
    main()