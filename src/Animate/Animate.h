#ifndef ANIMATE_h
#define ANIMATE_h
#include <TJpg_Decoder.h>

extern int DHT_img_flag; // DHT������ʹ�ñ�־λ
// DHT_img_flag

// void imgAnim(TJpg_Decoder *TJpgDec);               //��������
void imgAnim(const uint8_t **Anim_value, uint32_t *Anim_size);
// void refresh_AnimatedImage(TJpg_Decoder *TJpgDec); //���·���

#endif