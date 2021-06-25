use std::io;

fn main() {
  let mut input = String::new();

  io::stdin().read_line(&mut input)
    .expect("Failed to read line");     // 行の読み込みに失敗しました

  println!("Input: {}", input);     // 次のように予想しました: {}
}