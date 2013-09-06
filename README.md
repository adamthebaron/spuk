spuk
====

Still a work in progress. It's core functionality is to download and compile a tarball from any URL onto your system, 
assuming you have the dependencies already installed. More will be added later.

Used with the <a href="http://gryphix.org/">Gryphix</a> operating system. 

<h1>
Usage
</h1>

<p>
<code>
$ spuk --help <br>
</code>
-b OR --build: Download and build, do not install. <br>
-c OR --configure: Download then edit configure script. Does not build or install. <br>
-d OR --download: Just download the tarball, does not build or install. <br>
-e OR --extract: Download and extract the tarball in the location specified by TMP_DIR in /etc/spuk/spuk.conf. <br>
-h OR --help: Display this. <br>
-i OR --install: Download, build, and install the tarball. <br>
-m OR --makefile: Download then edit the makefile. Does not build or install. <br>
-r OR --remove: Remove the package. Do not enter the URL, enter the package name. Grep /etc/spuk/installed.txt to find package. <br>
--skip-md5: Do not check to see if MD5SUMS match. <br>
--skip-sha: Do not check to see if SHA512SUMS match. <br>
</p>
