Graphviz Sample
===============

[Graphviz](http://www.graphviz.org/) is open source graph visualization software.
It's to generate PNG file and PDF file from "*.dot" file based plain text.

This repository has Guardfile to generate PNG file when dot file is changed.


## Example

- Source file
```
digraph sample {
  start -> 1 -> 2 -> 3 -> end;
}
```

- Generated file
  - TODO(sample.png)

## Require

- Mac
- X11(XQuartz)
- Graphviz
  - ```brew install graphviz```
- Guard
  - ```gem install guard guard-shell```

## Usage

- Execute ```guard -i``` on terminal.
  - Starting to watch "*.dot" file for compile to PNG file by dot command.
- Start editing dot files!

## Special Thanks
- [関連図を簡単に書けるGraphvizをもう少し遊びやすくしてみた](http://blog.mah-lab.com/2014/01/20/graphviz/)
