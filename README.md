# abc

AtCoder Beginner Contest を中心に、競技プログラミングの解法実装と復習を蓄積するリポジトリです。

- GitHub: https://github.com/Mr-Sakasu/abc
- 種別: アルゴリズム学習、実装練習、コンテスト復習
- 主な言語: C++、Python

## 作成物の説明

ABC の各回・各問題に対して、制約確認、計算量設計、実装、デバッグまでを短時間で回すための学習ログです。典型問題の解法パターンを手元で再利用できるように、問題番号ごとのディレクトリにソースコードを整理しています。

## 担当した役割

- 解法方針の検討、実装、ローカル検証を担当
- C++ による高速な実装、Python による確認用スクリプトを作成
- WA/TLE の原因調査、境界条件の洗い出し、計算量の見直しを実施

## 直面した課題と解決方法

- 短い制限時間でバグを見つける必要があったため、入力例・手作りケース・境界値を小さく分けて確認しました。
- 全探索から動的計画法、貪欲法、グラフ探索へ切り替える判断が必要な問題では、制約から先に許容計算量を見積もる手順を徹底しました。
- 実行ファイルやローカル入出力が混ざりやすいため、`.gitignore` で生成物を除外しています。

## 技術情報

- C++17/C++20
- Python 3
- AtCoder Library を使う問題では DSU、Fenwick Tree、Segment Tree などを利用
- 実装方針: 制約から計算量を逆算し、必要に応じて二分探索、累積和、DP、BFS/DFS、Union-Find を選択

## 関連リポジトリ

- Portfolio: https://github.com/Mr-Sakasu/portfolio
- THU Auto Login: https://github.com/Mr-Sakasu/THU-auto-login
- GNN_CL: https://github.com/Mr-Sakasu/gnn-cl
