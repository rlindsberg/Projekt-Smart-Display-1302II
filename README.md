# Projekt-Smart-Display-II1302
A smart home solution that enables users to send messages to a door display via internet.

## Website
### At Mac/PC:
Make a working directory, pull the repo from Github and happy coding!
```sh
$ mkdir ~/Documents/Github && cd ~/Documents/Github
$ git clone https://github.com/rlindsberg/Projekt-Smart-Display-1302II.git
$ cd Projekt-Smart-Display-1302II
```
Then use your favourite text editor to code..
Lastly, commit and push your commits to GitHub.
```sh
$ git push master origin
```

### At Raspberry Pi:
#### For the first time, clone the repo from Github
```sh
# Go to the root directory of the website
$ cd /var/www/html
$ git clone https://github.com/rlindsberg/Projekt-Smart-Display-1302II.git
# Set a new remote
$ git remote add origin https://github.com/rlindsberg/Projekt-Smart-Display-1302II.git
# Verify new remote
$ git remote -v
```

#### For later development, just pull changes from GitHub
```sh
# Pull the repo from Github
$ git pull origin master
```

#### How to move website files to the root directory of Apache?
```sh
$ mv -v html5up-read-only/* ../
# Then remove the empty folder
$ rm -rf html5up-read-only
```
