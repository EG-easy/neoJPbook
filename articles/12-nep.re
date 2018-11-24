= NEP
#@#担当者:@ 南口 5670文字

//lead{
この章では、前半にNEPの概要やタイプ・その出し方の基本について説明するとともに、後半では実際のNEPの内容を紹介し、NEPへの理解を深められるように解説していきます。
//}

== 概要
NEPとは、NEO Enhancement Proposalの略称であり、
NEOのユーザーとコミュニティに対して、NEOに関する情報を提供したり、NEOの実装環境を改善する新しいアイデアを提案するために、git上にデザインされたドキュメントのことです。
NEPには、NEOに実装されている既存デザインの詳細やそれを改善するためのアイデアがまとめられているので、
ユーザーがNEOの実装環境やその変更内容を確認するのに便利です。
NEPを執筆することは誰でも可能ですが、次のような前提があります。

  * 内容の技術的な部分についてその根拠とともに明記すること
  * NEOのコミュニティに対して合意（コンセンサス）を形成しつつ、その反対意見についてもドキュメント化すること

理想は、NEOの情報をまとめたり、実装環境を改善したユーザーが完了済みのNEPをリスト化し、
NEOを取りまく現状について全てのエンドユーザーが簡単に理解できるようにすることです。


== NEPのタイプ
次はNEPのタイプについて説明していきます。
NEPには次の3つがあります。

=== スタンダードトラック型NEP
スタンダードトラック（Standards Track）型NEPは、NEOの実装環境の大部分または全部に影響を与える何かしらの変更を提案しています。
たとえば、次のような内容です。

  * ネットワークプロトコルに対する変更
  * ブロックやトランザクションの評価ルールにおける変更
  * アプリケーションの標準（standards）/系統（conventions）の提案
  * NEOを用いたアプリケーションの相互運用性に影響を与えるその他の変更内容や追加機能

=== インフォーメーション型NEP
インフォーメーション（Information）型NEPは、
NEOの既存デザインの詳細についてまとめていたり、NEOのユーザーとコミュニティに対して一般的なガイドラインを提供していますが、
NEOを改善する新しいアイデアを提案するわけではありません。
インフォーメーション型NEPには次のような性質があります。

  * 必ずしもNEOのコミュニティに対して合意を形成したり、レコメンデーション（推奨）を提供しなくてもいい
  * ユーザーには基本的にそのアドバイスに従う義務がない

=== メタ型NEP
メタ（Meta）型NEPは、NEOを取り巻くプロセスや環境についてまとめていたり、その変更内容を提案しています。
たとえば、次のような内容です。

  * 手続きやガイドライン
  * 意思決定プロセスに対する変更
  * NEOの開発ツールや開発環境に対する変更

メタ型NEPには、次のような性質があります。

  * スタンダードトラック型NEPと違い、NEOのプロトコル自体を超える領域に対応している
  * インフォーメーション型NEPと違い、変更内容の提案がNEOのコードベースに対してではないので、コミュニティの合意が求められる場合が多い
  * ユーザーには基本的にそのアドバイスに従う義務がある

== NEPの出し方

=== アイデア
NEPを出すプロセスは、NEOを改善する新しいアイデアを思いつくところから始まります。
この際に次のことが意識されなければなりません。

  * NEPにはキーとなる提案や新しいアイデアがひとつ含まれること
  * NEPが必要とされる変更は、単一のクライアントではなく複数のクライアントに影響を及ぼしたり、複数のアプリケーションで利用される標準を定義するものであること

NEPの編集者（エディター）は、焦点が絞りきれていない提案を拒否する権利をもっており、
NEPの提案内容が疑わしい場合は、焦点をさらに絞ったいくつかのNEPに分けることが好ましいです。

=== 執筆者
NEPには執筆者（チャンピョン）が必要です。
執筆者とは、後述するスタイルとフォーマットにそってNEPをデザインし、
公開されている適切な議論を追ってアイデアに関するコミュニティの合意を形成しようとする人のことです。

=== 公開
NEPを執筆する前にアイデアを公開することが好ましいです。
本来、すでに公開された議論を踏まえてアイデアが拒否されないようにするには、
インターネット上での下調べも含めて大量の労力や時間を割く必要があります。
そこで、NEPとして執筆する前にアイデアを公開して、その有用性をNEOのコミュニティに確認することでそれらを節約できます。
NEOのコミュニティ全体にとっても、新しいアイデアの有用性を確かめることは大きなメリットです。

=== プルリクエスト
アイデアの有用性をNEOコミュニティから認められた後には、NEPの執筆者は草稿状態のNEPをプルリクエストとして提出しましょう。
こうすることで、執筆者は草稿状態のNEPを断続的に編集でき、
追加で外部から寄せられるコメントなど、アイデアへのフィードバックを活用できます。

=== 編集者の承認
NEPの執筆に協力する編集者がプルリクエストを承認すれば、
執筆者はそのNEPに番号をつけ、
スタンダードトラック型・インフォーメーション型・メタ型のどれかのタイプにラベリングし、
「Draft（草稿状態）」とステータスを決めた後に、
新しいNEPとしてgitのレポジトリに追加することができます。
NEPの編集者が理由なしにNEPを拒否することはないので、
NEPのステータスが拒否された場合は、次のような理由が当てはまっていないかを検討しましょう。

  * 既存のNEPとアイデアが重複している
  * アイデアの技術的な部分が不明瞭である
  * 適切な動機付け（Motivation）が提供されていない
  * 下位互換性（Backwards Compatibility）への対処がされていない
  * NEOの理念に沿っていない

=== スタンダードトラック型NEPの出し方
スタンダードトラック型NEPは次の3つの部分で構成されます。

  * 設計内容（デザインドキュメント）
  * 実装方法（インプリメンテーション）
  * 最終的な公式版へのアップデート内容

スタンダードトラック型NEPは、アイデアを実装する前に設計内容を承認されなければなりません。
ただし、実装されること自体がそのアイデアの学習と議論を促進する場合は例外となります。
その後、コードやパッチ・URLなどの形式で実装方法が記載された状態で、最終的な公式版へのアップデートが検討されます。
アイデアの実装方法は、堅実なものでありプロトコルを複雑化しすぎないことが重要です。

=== 承認とステータス
NEPは承認の可否やその進捗具合によってステータスが変わります。
想定されるステータスの変化と状態を@<img>{nep_status}でみてみましょう。

//image[nep_status][NEPのステータスの分岐][scale=0.8]{

//}

ここでは次のような主要なステータスを取り上げます。

  * Draft（草稿状態）
  ** 草稿の段階である NEP のステータスです。NEPの執筆者のプルリクエストが承認された後につけられます。

  * Final（最終状態）
  ** 最終的な公式版となったNEPのステータスです。NEPの承認・実装の後、それがNEOのコミュニティに受け入れられるとつけられます。

  * Deferred（繰越状態）
  ** 該当するNEPに一切の進捗が生まれていない場合につけられるステータスです。ただし、一度このステータスがつけられても執筆者と編集者はそれを「Draft」に戻すことができます。

  * Rejected（拒否された状態）
  ** NEPが編集者によって拒否された場合につけられるステータスです。いいアイデアではなかったものの、それ自体の記録が残ることには価値があります。

  * Active（アクティブな状態）
  ** 決して完了することがないNEPに対してつけられるステータスです。インフォーメーション型NEPとメタ型NEPの場合につけられます。

  * Replaced（代替された状態）
  ** 新しいNEPに代替された古いNEPにつくステータスです。NEPは既存のNEPに依拠したりそれを置き換えることができます。

=== NEPを出すフォーマットとテンプレート
NEPを出す際には、守らなければならないフォーマットやテンプレートがあります。
まず前提として次のふたつが重要です。

  * メディアウィキ（mediawiki）またはマークダウン（markdown）のフォーマットを用いること
  * イメージファイルがNEPのサブディレクトリに含まれること

さらに、NEPには次の要素が記載されなければなりません。
ただし、「Motivation（動機付け）」についてはオプション（選択可能）です。

  * Preamble（前文）
  ** NEPに関する基礎的情報をRFC822スタイルのヘッダーで記載します。

  * Abstract（概説）
  ** アイデアにより対処される技術的な課題を200文字以内で記載します。

  * Motivation
  ** NEOのプロトコルの変更を提案するNEPの場合に、新しいNEPが解決できる課題をなぜ既存のプロトコルでは解決できないのかを説明し、適切な動機付けを行います。

  * Specification（仕様）
  ** 構文や意味など、新しい変更や機能の技術仕様を記載します。

  * Rationale（根拠）
  ** アイデアの設計や提案内容の根拠を記載します。NEOのコミュニティの合意形成のためにも重要になるので、議論の過程で生じた反論も考慮しましょう。

  * Backwards Compatibility
  ** 下位互換性の課題と想定される対処法について記載します。課題へ対処するために十分な論文を参照することが重要です。

  * Test Cases（テストケース）
  ** アイデアや提案内容の実装をテストした事例について記載します。合意内容に影響を与える事例については記載することが必要不可欠です。それ以外の場合は記載の有無を選択できます。

  * Implementations（実装方法）
  ** アイデアや提案内容を実装するための方法をコードやパッチ・URLなどの形式で記載します。



==== Preamble（前文）
ここからは、NEPを出すために前文を記載する際に守るべきフォーマットとテンプレートについて補足していきます。

//emlist[ ]{  NEP: 5
  Title: Token Standard
  Author: Tyler Adams <lllwvlvwlll@gmail.com>, luodanwg <luodan.wg@gmail.com>, tanyuan <tanyuan666@gmail.com>, Alan Fong <anfn@umich.edu>
  Type: Standard
  Status: Final
  Created: 2017-08-10
//}
@<br>{}

2018年の時点のNEP5では実際にこのように表示されています。

//emlist[ ]{  NEP: <NEP number>(this is determined by the NEP editor)
  Title: <NEP title>
  Author: <list of authors' real names and optionally, email address>
 *Discussions-To: <email address>
  Status: <Draft | Active | Accepted | Deferred | Rejected | Withdrawn | Final | Superseded>
  Type: <Standard | Informational | Meta>
  Created: <date created on, in ISO 8601 (yyyy-mm-dd) format>
 *Replaces: <NEP numbers>
 *Superseded-By: <NEP number>
 *Resolution: <url>
//}
@<br>{}

これは前文のテンプレートです。
RFC822スタイルのヘッダーで情報を記載する必要があります。
*印のついたヘッダーはオプションですが、その他は記載が必須です。

「NEP」と「Title」にはそれぞれNEPの番号とタイトルを記載します。
そして「Author」には、全ての執筆者と管理者（オーナー）の名前を記載しなければなりません。
オプションでそれぞれのEメールアドレスを記載する場合もあります。
たとえば次のように表示されます。


//emlist[Eメールアドレスを記載する場合]{  Random J. User <address@dom.ain>
//}
@<br>{}

//emlist[Eメールアドレスを記載しない場合]{  Random J. User
//}
@<br>{}

その他のヘッダーは次のようなものです。

  * Resolution
  ** スタンダードトラック型NEPの場合に、NEPに関する宣告が記載されたEメールメッセージのURLやその他のウェブリソースを記載します。

  * Discussions-To
  ** 「Draft」ステータスのNEPなど、非公開で議論されているNEPの場合に、議論が行われているメーリングリストやURLを記載します。ただし、執筆者と私的にNEPの議論が行われている場合は「Discussions-To」のヘッダーは必要とされません。

  * Type
  ** NEPのタイプ（スタンダードトラック型・インフォーメーション型・メタ型）を記載します。

  * Created
  ** NEPに番号がつけられたに日付を記載します。たとえばNEP5では2017-08-10と記載されています。

  * Replaces
  ** 既存のNEPを代替した新しいNEPの場合に、代替した古いNEPの番号を記載します。

  * Superseded-By
  ** 新しいNEPにより古くなったNEPの場合に、NEPを代替する新しいNEPの数を記載します。


== 実際のNEPに関する解説
実際のNEPの中で代表的なものをみてみましょう。

//table[identifier][代表的な実際のNEP]{
番号      タイトル                                 タイプ             ステータス
------------------------------------------------------------------------------------------
1         NEP Purpose and Guidelines             Meta              Active
2         Passphrase-protected private key       Standard          Final
3         NeoContract ABI                        Standard          Final
4         Dynamic Contract Invocation            Standard          Replaced
5         Token Standard                         Standard          Final
6         Wallet Standard                        Standard          Final
7         Triggers for NeoContract               Standard          Final
8         Stack Isolation for NeoVM              Standard          Final
9         URI Scheme                             Standard          Final
10        Composite Smart Contracts              Standard          Final
11        Non-fungible Token Standard            Standard          Accepted
          NeoID                                  Standard          Stub
          NeoFS                                  Standard          Stub
          NeoX                                   Standard          Stub
          NeoQS                                  Standard          Stub
//}
@<br>{}

ここではNEP5とNEP6、そして今後新しく実装される可能性の高いNEOXを取り上げ紹介します。

=== NEP5
==== NEP5の概要
NEP5は、トークン化されたスマートコントラクトが統一的に対応する仕組みを可能にするための、NEOのブロックチェーンのトークン規格について説明しています。

==== NEP5の動機
NEOのブロックチェーンが拡大するにつれて、スマートコントラクトの配備と発動はますます重要になってきます。
しかし、各コントラクトが互いに対応する規格がなければ、互いに類似性を持っているはずのコントラクトのそれぞれに特有なAPIに対してメンテナンスが行われなければなりません。
トークン化されたコントラクトが動作する基本的な仕組みは全て同じなので、それ自体がこのメンテナンスの有効な実例となります。
そこで、トークンに対応する基本的な方法があれば、全体の仕組みの中で、トークンを利用するスマートコントラクト全てに対する基本的動作のメンテナンスを行わずに済みます。

=== NEP6
==== NEP6の概要
NEP6は、NEOが実装された環境間でウォレットファイルをシェア（共有）することを可能にするためのウォレット規格について説明しています。

==== NEP6の動機
現在では異なるクライアントプログラムが異なるウォレットファイルを生成しています。
そのため、これらのファイルの形式と保存方法、暗号化方法は全て異なっており、ユーザーにとっては、異なるクライアントプログラム間を移動することが難しく、プライベートキーを生成することで移動できた場合でも、複数のキーをもつ種々のウォレットは処理し切れません。
そこで、統一的なウォレットの形式が必要とされています。
これがあれば、ユーザーはウォレットのファイルを変えたりプライベートキーを生成する必要もなく、全てのプラットフォームを安全かつ簡単に移動できます。

=== NeoX
NeoXは、クロスチェーン型の相互運用性を実装するプロトコルであり、
「クロスチェーン型資産交換プロトコル（cross-chain assets exchange protocol）」と
「クロスチェーン型分配取引プロトコル（cross-chain distributed transaction protocol）」のふたつに分けられます。

==== クロスチェーン型資産交換プロトコル
NeoXは、二本鎖で不可分な資産を交換する既存のプロトコルにまで拡張されました。
これは、複数のプラットフォーム参加者が異なるチェーン間で資産を交換できるようにするとともに、
トランザアクションの全プロセスの全ステップにおいて、片方のみが成功/失敗をすることなく、両方の資産交換者が結果を共有することを確実にするためです。


==== クロスチェーン型分配取引プロトコル
クロスチェーン型分配取引とは、トランザクションの複数のステップが異なるブロックチェーンを渡って散らばると同時に、
トランザクション全体の一貫性が確保されることを意味しています。
これはクロスチェーン型資産交換を拡張したものであり、資産交換という行いを任意なものへと拡張したといわれます。

== 他の章との関連
  * NEP5 → 9-smartcontracts.re
  * NEP6 → 4-wallet.re
