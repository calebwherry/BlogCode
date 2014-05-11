grep -o '([0-9]\{3\})\s*[0-9]\{3\}\s*-\s*[0-9]\{4\}' grep-test-data.txt | sed 's/ \+//g' | awk '!x[$0]++'
