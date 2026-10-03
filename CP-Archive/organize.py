import os
import re
import shutil
from collections import defaultdict

# Setup categories and regex patterns
PLATFORMS = {
    'Codeforces': r'codeforces\.com',
    'LeetCode': r'leetcode\.com',
    'HackerRank': r'hackerrank\.com',
    'AtCoder': r'atcoder\.jp',
    'CSES': r'cses\.fi',
    'CodeChef': r'codechef\.com',
    'SPOJ': r'spoj\.com'
}

TOPICS = {
    'Number_Theory': ['sieve', 'prime', 'gcd', 'lcm', 'modulo', 'modular', 'fermat', 'euler'],
    'Strings': ['string', 'kmp', 'trie', 'suffix', 'z_algorithm', 'hashing'],
    'Data_Structures': ['vector', 'segment tree', 'fenwick', 'dsu', 'disjoint set', 'heap', 'stack', 'queue'],
    'Graph': ['graph', 'dfs', 'bfs', 'dijkstra', 'kruskal', 'prim', 'tree', 'lca'],
    'Dynamic_Programming': ['dp', 'knapsack', 'coin change', 'longest common'],
    'Math_Basics': ['decimal', 'base conversion', 'fibonacci', 'binary', 'bit'],
    'Binary_Search': ['binary search', 'bs_template', 'lower_bound', 'upper_bound']
}

def analyze_file(filepath):
    try:
        with open(filepath, 'r', encoding='utf-8') as f:
            content = f.read()
    except UnicodeDecodeError:
        with open(filepath, 'r', encoding='latin-1') as f:
            content = f.read()
            
    # Extract URL if present
    url_match = re.search(r'https?://[^\s]+', content)
    url = url_match.group(0) if url_match else None
    
    # Determine Platform
    platform = 'Uncategorized_Templates'
    for plat, pattern in PLATFORMS.items():
        if re.search(pattern, content, re.IGNORECASE):
            platform = plat
            break
            
    # Determine Topic if no platform
    topic = 'Miscellaneous'
    if platform == 'Uncategorized_Templates':
        content_lower = content.lower()
        filename_lower = os.path.basename(filepath).lower()
        best_match = None
        
        for top, keywords in TOPICS.items():
            for kw in keywords:
                if kw in filename_lower or kw in content_lower:
                    topic = top
                    break
            if topic != 'Miscellaneous':
                break
                
    return platform, topic, url

def main():
    base_dir = os.getcwd()
    files_to_move = []
    
    # Collect all cpp files
    for f in os.listdir(base_dir):
        if f.endswith('.cpp'):
            files_to_move.append(f)
            
    index_data = defaultdict(list)
    
    # Analyze and move
    for f in files_to_move:
        filepath = os.path.join(base_dir, f)
        platform, topic, url = analyze_file(filepath)
        
        if platform == 'Uncategorized_Templates':
            dest_folder = os.path.join(base_dir, 'Templates_And_Topics', topic)
            rel_folder = f"Templates_And_Topics/{topic}"
        else:
            dest_folder = os.path.join(base_dir, 'Platforms', platform)
            rel_folder = f"Platforms/{platform}"
            
        os.makedirs(dest_folder, exist_ok=True)
        dest_path = os.path.join(dest_folder, f)
        
        shutil.move(filepath, dest_path)
        index_data[rel_folder].append((f, url))
        print(f"Moved {f} -> {rel_folder}")
        
    # Generate README
    readme_path = os.path.join(base_dir, 'README.md')
    with open(readme_path, 'w', encoding='utf-8') as f:
        f.write("# CP Codes Archive 🚀\n\n")
        f.write("A categorized archive of Competitive Programming solutions and templates, automatically managed and organized.\n\n")
        f.write("## 📚 Index\n\n")
        
        for folder in sorted(index_data.keys()):
            f.write(f"### 📁 {folder.replace('_', ' ')}\n")
            f.write("| File | Problem Link |\n")
            f.write("| :--- | :--- |\n")
            for filename, url in sorted(index_data[folder]):
                encoded_filename = filename.replace(' ', '%20')
                link_val = f"[Link]({url})" if url else "N/A"
                f.write(f"| [{filename}]({folder.replace(' ', '%20')}/{encoded_filename}) | {link_val} |\n")
            f.write("\n")
            
        f.write("\n---\nMuhammad Al-Muzahid | © 2026\n")

    print("\n✅ Successfully organized files and updated README.md!")

if __name__ == '__main__':
    main()
