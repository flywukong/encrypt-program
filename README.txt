//利用libcrypt加密库实现了AES对称加密算法的加解密接口
//make后会编译生成crypt,decrypt可执行程序　分别用来加密和解密

使用方法说明：

1.在可执行程序给用户之前，用crypt进行加密　./crypt file
2.提交给用户的文件包括password.txt密钥文件，decrypt可执行程序，以及run.sh
3.用户执行./run.sh file 就可以直接执行加密后的程序
4.对run.sh使用shc进行加密　
