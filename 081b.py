def main():
    n = 0               # 要素数 N
    input_num = []      # 入力数値の配列

    # 入力データ格納
    n = input()
    input_num = list(map(int, input().split()))

    # 要素数チェック
    valid(n, input_num)

    # メイン処理
    


# 要素数チェック
def valid(num, in_list):
    if num != len(in_list):
        exit()

# 2で割る
def div_2():
    # ToDo
    print("作成途中")


if __name__ == "__main__":
    main()