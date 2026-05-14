# Laboratory work II

Цель данной лабораторной работы заключалась в том, чтобы ознакомиться с базовыми приемами для работы с системой контроля версий Git, изучить основные операции и получить навыки организации С++
В данной работе было выполнено следующее:

## 1. Была произведена подготовка окружения для работы
```bash
vdeo@deo:~$ export GITHUB_USERNAME=EighthBroom3439
vdeo@deo:~$ export GITHUB_EMAIL=<мояпочта>
vdeo@deo:~$ export GITHUB_TOKEN=<мойтокен>
vdeo@deo:~$ alias edit=nano
vdeo@deo:~$ cd ${GITHUB_USERNAME}/workspace/
vdeo@deo:~/EighthBroom3439/workspace$ source scripts/activate 
```

## 2. Была настроена утилита hub

```bash
vdeo@deo:~/EighthBroom3439/workspace$ mkdir ~/.config
vdeo@deo:~/EighthBroom3439/workspace$ cat > ~/.config/hub <<EOF
> github.com:
> - user: ${GITHUB_USERNAME} 
> oauth_token: ${GITHUB_TOKEN}
  protocol: https
EOF
vdeo@deo:~/EighthBroom3439/workspace$ git config --global hub.protocol https
```

## 3. Был создан Git-репозиторий и первый коммит

```bash
vdeo@deo:~/EighthBroom3439/workspace$ mkdir projects/lab02 && cd projects/lab02
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ git init
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint:
hint: 	git config --global init.defaultBranch <name>
hint:
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint:
hint: 	git branch -m <name>
Инициализирован пустой репозиторий Git в /home/vdeo/EighthBroom3439/workspace/projects/lab02/.git/
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ git config --global user.name ${GITHUB_USERNAME}
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ git config --global user.email ${GITHUB_EMAIL}
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ git config -e --global
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ git remote add origin https://github.com/${GITHUB_USERNAME}/lab02.git
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ git pull origin main
remote: Enumerating objects: 35, done.
remote: Counting objects: 100% (35/35), done.
remote: Compressing objects: 100% (20/20), done.
remote: Total 35 (delta 11), reused 35 (delta 11), pack-reused 0 (from 0)
Распаковка объектов: 100% (35/35), 8.12 КиБ | 755.00 КиБ/с, готово.
Из https://github.com/EighthBroom3439/lab02
 * branch            main       -> FETCH_HEAD
 * [новая ветка]     main       -> origin/main
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ touch README.md
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ git status
Текущая ветка: master
Неотслеживаемые файлы:
  (используйте «git add <файл>...», чтобы добавить в то, что будет включено в коммит)
	README.md

индекс пуст, но есть неотслеживаемые файлы
(используйте «git add», чтобы проиндексировать их)
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ git add README.md 
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ git commit -m "added README.md"
[master 7d2cf53] added README.md
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 README.md
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ git push origin master
Username for 'https://github.com': EighthBroom3439
Password for 'https://EighthBroom3439@github.com': 
Перечисление объектов: 4, готово.
Подсчет объектов: 100% (4/4), готово.
При сжатии изменений используется до 2 потоков
Сжатие объектов: 100% (2/2), готово.
Запись объектов: 100% (3/3), 291 байт | 291.00 КиБ/с, готово.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
remote: This repository moved. Please use the new location:
remote:   https://github.com/EighthBroom3439/Lab02.git
remote: 
remote: Create a pull request for 'master' on GitHub by visiting:
remote:      https://github.com/EighthBroom3439/Lab02/pull/new/master
remote: 
To https://github.com/EighthBroom3439/lab02.git
 * [new branch]      master -> master
```

## 4. Был добавлен файл .gitignore со следующим содержимым:
```bash
*build*/
*install*/
*.swp
.idea/
```
Также были проверены коммиты для репозитория
```bash
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ git pull origin master
remote: Enumerating objects: 4, done.
remote: Counting objects: 100% (4/4), done.
remote: Compressing objects: 100% (2/2), done.
remote: Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
Распаковка объектов: 100% (3/3), 954 байта | 954.00 КиБ/с, готово.
Из https://github.com/EighthBroom3439/lab02
 * branch            master     -> FETCH_HEAD
   7d2cf53..d55dd70  master     -> origin/master
Обновление 7d2cf53..d55dd70
Fast-forward
 .gitignore | 4 ++++
 1 file changed, 4 insertions(+)
 create mode 100644 .gitignore
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ git log
commit d55dd7079ea5741f21a057c3c52174c94f18c21d (HEAD -> master, origin/master)
Author: EighthBroom3439 <99072260+EighthBroom3439@users.noreply.github.com>
Date:   Thu May 14 18:58:34 2026 +0300

    Create .gitignore

commit 7d2cf530fd9ff205e59a51a535b29ad64a4e9721
Author: EighthBroom3439 <vladimir.deobald@gmail.com>
Date:   Thu May 14 18:50:03 2026 +0300

    added README.md

commit 37c0531dc83484ee351c9337da3117a4f74e2c19 (origin/main)
Author: internet <internet@internets-MacBook-Pro.local>
Date:   Tue Oct 14 11:19:44 2025 +0300

    Initial commit
```

## 5. Была создана структура C++ проекта
```bash
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ mkdir sources
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ mkdir include
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ mkdir examples
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ cat > sources/print.cpp <<EOF
> #include <print.hpp>
> 
> void print(const std::string& text, std::ostream& out)
> {
>     out << text;
> }
> 
> void print(const std::string& text, std::ofstream& out)
> {
>     out << text;
> }
> EOF
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ echo sources/print.cpp
sources/print.cpp
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ echo $sources/print.cpp
/print.cpp
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ cat sources/print.cpp
#include <print.hpp>

void print(const std::string& text, std::ostream& out)
{
    out << text;
}

void print(const std::string& text, std::ofstream& out)
{
    out << text;
}
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ cat > include/print.hpp <<EOF
> #include <fstream>
> #include <iostream>
> #include <string>
> 
> void print(const std::string& text, std::ofstream& out);
> void print(const std::string& text, std::ofstream& out = std::cout);
> EOF
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ cat > examples/example1.cpp <<EOF
> #include <print.hpp>
> 
> int main(int argc, char** argv)
> {
>     print("hello")
> }
> EOF
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ cat > examples/example2.cpp <<EOF
> #include <print.hpp>
> 
> #include <fstream>
> 
> int main(int argc, char** argv)
> {
>     std::ofstream file("log.txt");
>     print(std::string("hello"), file);
> }
> EOF
```
## 6. Эти файлы были закоммичены в репозиторий
```bash
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ git status
Текущая ветка: master
Изменения, которые не в индексе для коммита:
  (используйте «git add <файл>...», чтобы добавить файл в индекс)
  (используйте «git restore <файл>...», чтобы отменить изменения в рабочем каталоге)
	изменено:      README.md

Неотслеживаемые файлы:
  (используйте «git add <файл>...», чтобы добавить в то, что будет включено в коммит)
	examples/
	include/
	sources/

индекс пуст (используйте «git add» и/или «git commit -a»)
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ git add .
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ git commit -m "added sources"
[master 6b51a60] added sources
 5 files changed, 85 insertions(+)
 create mode 100644 examples/example1.cpp
 create mode 100644 examples/example2.cpp
 create mode 100644 include/print.hpp
 create mode 100644 sources/print.cpp
vdeo@deo:~/EighthBroom3439/workspace/projects/lab02$ git push origin master
Username for 'https://github.com': EighthBroom3439
Password for 'https://EighthBroom3439@github.com': 
Перечисление объектов: 12, готово.
Подсчет объектов: 100% (12/12), готово.
При сжатии изменений используется до 2 потоков
Сжатие объектов: 100% (8/8), готово.
Запись объектов: 100% (10/10), 1.20 КиБ | 1.20 МиБ/с, готово.
Total 10 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
remote: This repository moved. Please use the new location:
remote:   https://github.com/EighthBroom3439/Lab02.git
To https://github.com/EighthBroom3439/lab02.git
   d55dd70..6b51a60  master -> master
```
