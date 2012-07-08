# Converte as senhas para o hash MD5
# APENAS importe-a se seu servidor usa MD5.

UPDATE `login` SET `user_pass`=MD5(`user_pass`);