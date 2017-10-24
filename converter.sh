#実行方法
#sh converter ディレクトリ名

for file in $1/*.txt; do
    fileName=${file##*/}
    iconv -f SJIS -t UTF8 $file > UTF8/${fileName%.*}-u.txt
done

