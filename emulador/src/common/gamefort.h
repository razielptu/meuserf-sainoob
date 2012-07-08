// This file has been edited or created to install the:
// GAMEFORT - Hacking Prevention System
//=============================================================
//    ____     _     __  __  _____  _____   ___   ____   _____
//   / ___|   / \   |  \/  || ____|| ____| / _ \ |  _ \ |_   _|
//  | |  _   / _ \  | |\/| ||  _|  |  _|  | | | || |_) |  | |
//  | |_| | / ___ \ | |  | || |___ | |    | |_| ||  _ <   | |
//   \____|/_/   \_\|_|  |_||_____||_|     \___/ |_| \_\  |_|
//
//=============================================================
// Version: 7390
// Instalation Date: 24/8/2011 17:09:03
// More Informations: http://gamefort.com.br/
//
// Don't change any information in this header, it will help
// the installer for future updates
//=============================================================

// GameFort

#ifndef uint8_t
#define uint8_t  unsigned char
#endif

#ifdef __cplusplus
extern "C" { 
#endif

    typedef struct {
        uint8_t key[32]; 
        uint8_t enckey[32]; 
        uint8_t deckey[32];
    } gf_context; 


    void gf_init(gf_context *, uint8_t * /* key */);
    void gf_done(gf_context *);
    void gf_encrypt_ecb(gf_context *, uint8_t * /* plaintext */);
    void gf_decrypt_ecb(gf_context *, uint8_t * /* cipertext */);

#ifdef __cplusplus
}
#endif
