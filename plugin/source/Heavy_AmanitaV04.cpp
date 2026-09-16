/** SporePrintDSP */

#include "Heavy_AmanitaV04.hpp"

#include <new>

#define Context(_c) static_cast<Heavy_AmanitaV04 *>(_c)


/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_AmanitaV04_new(double sampleRate) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_AmanitaV04));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_AmanitaV04(sampleRate);
    return Context(ptr);
  }

  HV_EXPORT HeavyContextInterface *hv_AmanitaV04_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_AmanitaV04));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_AmanitaV04(sampleRate, poolKb, inQueueKb, outQueueKb);
    return Context(ptr);
  }

  HV_EXPORT void hv_AmanitaV04_free(HeavyContextInterface *instance) {
    // call destructor
    Context(instance)->~Heavy_AmanitaV04();
    // free memory
    hv_free(instance);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_AmanitaV04::Heavy_AmanitaV04(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sDel1_init(&sDel1_wocHPnaG);
  numBytes += sSamphold_init(&sSamphold_yzMRp8so);
  numBytes += sLine_init(&sLine_x0fCsQUp);
  numBytes += sLine_init(&sLine_atojWmEO);
  numBytes += sLine_init(&sLine_Ilj4kQh6);
  numBytes += sLine_init(&sLine_fVnSiKLX);
  numBytes += sLine_init(&sLine_cWqwgQjz);
  numBytes += sBiquad_init(&sBiquad_s_pZw5JQDS);
  numBytes += sLine_init(&sLine_hpn0gkGI);
  numBytes += sLine_init(&sLine_XxWIh19O);
  numBytes += sLine_init(&sLine_ktLdH00s);
  numBytes += sLine_init(&sLine_eizTBENW);
  numBytes += sLine_init(&sLine_0WlYyFat);
  numBytes += sBiquad_init(&sBiquad_s_UFJJ9VwH);
  numBytes += sLine_init(&sLine_YuwTobX4);
  numBytes += sLine_init(&sLine_iSaedkRY);
  numBytes += sLine_init(&sLine_o1Tg2NUq);
  numBytes += sLine_init(&sLine_YIECTLaV);
  numBytes += sLine_init(&sLine_wejbbLv2);
  numBytes += sBiquad_init(&sBiquad_s_YVg7m7wW);
  numBytes += sLine_init(&sLine_nEvZ96O4);
  numBytes += sLine_init(&sLine_2uXzu9ni);
  numBytes += sLine_init(&sLine_Dra6gunK);
  numBytes += sLine_init(&sLine_q9UI8WNn);
  numBytes += sLine_init(&sLine_tawZETvk);
  numBytes += sBiquad_init(&sBiquad_s_Uuz8ctfb);
  numBytes += sLine_init(&sLine_h0ZC3RrL);
  numBytes += sLine_init(&sLine_UYLJECgu);
  numBytes += sLine_init(&sLine_qM7OkhPz);
  numBytes += sLine_init(&sLine_dYMIG95W);
  numBytes += sLine_init(&sLine_MVSHHN5F);
  numBytes += sBiquad_init(&sBiquad_s_om0ETsIq);
  numBytes += sLine_init(&sLine_46dCWaFd);
  numBytes += sLine_init(&sLine_bPlvZ9dZ);
  numBytes += sLine_init(&sLine_7d43dq8t);
  numBytes += sLine_init(&sLine_1zr9HiDQ);
  numBytes += sLine_init(&sLine_NWMZwyWt);
  numBytes += sBiquad_init(&sBiquad_s_xF8He5kO);
  numBytes += sTabwrite_init(&sTabwrite_Czd0K66U, &hTable_VnIanjrn);
  numBytes += sDel1_init(&sDel1_gPjrd0pY);
  numBytes += sSamphold_init(&sSamphold_JY0EQW55);
  numBytes += sLine_init(&sLine_tIRhsB7g);
  numBytes += sLine_init(&sLine_res0tOOd);
  numBytes += sLine_init(&sLine_I3FNyOlU);
  numBytes += sLine_init(&sLine_fkUC3JDx);
  numBytes += sLine_init(&sLine_zMgtDtoQ);
  numBytes += sBiquad_init(&sBiquad_s_C2x4ae5Z);
  numBytes += sLine_init(&sLine_JTCWjQpu);
  numBytes += sLine_init(&sLine_8VgwPw5L);
  numBytes += sLine_init(&sLine_se2nl7RS);
  numBytes += sLine_init(&sLine_4RkCnlBA);
  numBytes += sLine_init(&sLine_Zurr6Tlx);
  numBytes += sBiquad_init(&sBiquad_s_wyWoUDHy);
  numBytes += sLine_init(&sLine_j66S4DIF);
  numBytes += sLine_init(&sLine_jz5I4u27);
  numBytes += sLine_init(&sLine_3cDRsj7r);
  numBytes += sLine_init(&sLine_InVH5702);
  numBytes += sLine_init(&sLine_nAUCvobe);
  numBytes += sBiquad_init(&sBiquad_s_84aWd8v7);
  numBytes += sLine_init(&sLine_NqE7ZDTP);
  numBytes += sLine_init(&sLine_r4SxPXCz);
  numBytes += sLine_init(&sLine_xcknOm8v);
  numBytes += sLine_init(&sLine_5IC87hpp);
  numBytes += sLine_init(&sLine_JGpKqxxm);
  numBytes += sBiquad_init(&sBiquad_s_8iRBIzv2);
  numBytes += sLine_init(&sLine_KNTgTv69);
  numBytes += sLine_init(&sLine_3HSGtFMu);
  numBytes += sLine_init(&sLine_EsuFj9dL);
  numBytes += sLine_init(&sLine_lU4SHAKq);
  numBytes += sLine_init(&sLine_fOcjv85L);
  numBytes += sBiquad_init(&sBiquad_s_Mee24zVM);
  numBytes += sLine_init(&sLine_2ytgXHah);
  numBytes += sLine_init(&sLine_MdHocvBn);
  numBytes += sLine_init(&sLine_Fz1lvyl5);
  numBytes += sLine_init(&sLine_uZ6EjM7R);
  numBytes += sLine_init(&sLine_Q6HkJ08S);
  numBytes += sBiquad_init(&sBiquad_s_5A7qPvOd);
  numBytes += sTabwrite_init(&sTabwrite_aHKdomwd, &hTable_TRDDscAd);
  numBytes += sLine_init(&sLine_Xa6SpYWp);
  numBytes += sPhasor_k_init(&sPhasor_fk2ybKK0, 0.1f, sampleRate);
  numBytes += sSample_init(&sSample_C5C5GMyE);
  numBytes += sLine_init(&sLine_e7Ujc4Wm);
  numBytes += sTabhead_init(&sTabhead_3bXgIFW3, &hTable_TRDDscAd);
  numBytes += sTabread_init(&sTabread_2LPO3GE3, &hTable_TRDDscAd, false);
  numBytes += sTabread_init(&sTabread_igqTS9WR, &hTable_TRDDscAd, false);
  numBytes += sPhasor_k_init(&sPhasor_qfWlr240, 0.1f, sampleRate);
  numBytes += sSample_init(&sSample_pJjCzAVx);
  numBytes += sLine_init(&sLine_x1PSSFYg);
  numBytes += sLine_init(&sLine_UIVXe1oU);
  numBytes += sTabhead_init(&sTabhead_SpTSDUJR, &hTable_VnIanjrn);
  numBytes += sTabread_init(&sTabread_t6gU4Bj0, &hTable_VnIanjrn, false);
  numBytes += sTabread_init(&sTabread_l6CKdsGO, &hTable_VnIanjrn, false);
  numBytes += sEnv_init(&sEnv_2WpaXiVp, 1024, 512);
  numBytes += sLine_init(&sLine_29qiZpXI);
  numBytes += sPhasor_init(&sPhasor_yP6CC4U3, sampleRate);
  numBytes += sPhasor_init(&sPhasor_rPWSw8Wd, sampleRate);
  numBytes += sRPole_init(&sRPole_aSVpdioe);
  numBytes += sRPole_init(&sRPole_bgU0aRG7);
  numBytes += sDel1_init(&sDel1_8XRQ8W91);
  numBytes += sLine_init(&sLine_cdGIm0CJ);
  numBytes += sLine_init(&sLine_wwckSs2Q);
  numBytes += sVarf_init(&sVarf_BzCifJdr, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_TE8EUdTu, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_Xy74PKsS, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_VyFzbdgY, 0.0f);
  numBytes += cVar_init_f(&cVar_ntdqWZ7M, 0.0f);
  numBytes += cVar_init_f(&cVar_kB2EVgxV, 0.0f);
  numBytes += cBinop_init(&cBinop_e6QWvULO, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_O9SkYsjB, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_eYMOwo0Z, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_qUlTQYzJ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_OAO5ahCV, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Ih5NgBsO, 0.0f); // __mul
  numBytes += cIf_init(&cIf_jpkd3xjI, false);
  numBytes += cBinop_init(&cBinop_eXGyn2iO, 0.0f); // __pow
  numBytes += cBinop_init(&cBinop_Qzp3haUK, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_AUfVVm0M, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_8tjfDVAA, 0.0f);
  numBytes += cVar_init_f(&cVar_fpCvlBFa, 0.0f);
  numBytes += cVar_init_f(&cVar_YhyK7fuL, 0.0f);
  numBytes += cBinop_init(&cBinop_DsWcsaAq, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_FGFWgMJa, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_jFNyxw5S, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_aNCk4clJ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_jjupp3Lp, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_oHEIZxK0, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_mu7P3lMg, 2500.0f);
  numBytes += cBinop_init(&cBinop_QDaJ3w9k, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_HPeIbm8g, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_BxwREdfz, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_uTOPoicY, 0.0f);
  numBytes += sVarf_init(&sVarf_nlmkClI6, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_BeNyFAmt, 0.0f);
  numBytes += sVarf_init(&sVarf_UkcYMfwf, 0.0f, 0.0f, false);
  numBytes += cRandom_init(&cRandom_R71pBKiu, -874288476);
  numBytes += cSlice_init(&cSlice_mcHTNgcf, 1, 1);
  numBytes += sVari_init(&sVari_aLj7r7A9, 0, 0, false);
  numBytes += sVarf_init(&sVarf_DuG3puRh, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_umbYGmaJ, 200.0f);
  numBytes += cBinop_init(&cBinop_McP1ZH1S, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_9tQCKPbZ, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ga85wPJT, 0.0f);
  numBytes += cIf_init(&cIf_HUsqbyiO, false);
  numBytes += cVar_init_f(&cVar_K4LmWkmk, 0.0f);
  numBytes += cIf_init(&cIf_3qpZqJ74, false);
  numBytes += cIf_init(&cIf_U9mUn0Iw, false);
  numBytes += cVar_init_f(&cVar_pBRo4hpy, 0.0f);
  numBytes += cIf_init(&cIf_bpxmtfli, false);
  numBytes += cVar_init_f(&cVar_v3GAUCGw, 0.0f);
  numBytes += cIf_init(&cIf_iUu4VdzX, false);
  numBytes += cIf_init(&cIf_yFJVoOS3, false);
  numBytes += cTabread_init(&cTabread_WhB7jzIk, &hTable_n0vcvDE1); // dottedr
  numBytes += cSlice_init(&cSlice_gBZXfEzP, 1, -1);
  numBytes += cVar_init_s(&cVar_CcSVT8Mu, "dottedr");
  numBytes += cBinop_init(&cBinop_k29YhLiB, 0.0f); // __min
  numBytes += cTabread_init(&cTabread_uJamsRnf, &hTable_owdqjely); // straightr
  numBytes += cSlice_init(&cSlice_Yo3BMU0a, 1, -1);
  numBytes += cVar_init_s(&cVar_VWtd0Erp, "straightr");
  numBytes += cBinop_init(&cBinop_m2zzw666, 0.0f); // __min
  numBytes += cTabread_init(&cTabread_pZHsUbNw, &hTable_OwxwRUw5); // straightl
  numBytes += cSlice_init(&cSlice_gm1a2HxB, 1, -1);
  numBytes += cVar_init_s(&cVar_Z2M5zPPi, "straightl");
  numBytes += cBinop_init(&cBinop_rIvxmxgn, 0.0f); // __min
  numBytes += cTabread_init(&cTabread_q8nN7iOM, &hTable_9xfY4Fou); // dottedl
  numBytes += cSlice_init(&cSlice_bc9a9r7k, 1, -1);
  numBytes += cVar_init_s(&cVar_cCtTaSgi, "dottedl");
  numBytes += cBinop_init(&cBinop_Ltfi6jmo, 0.0f); // __min
  numBytes += sVarf_init(&sVarf_73fUxEa9, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_yXfTZSTS, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_sujd5J8R, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_qB5feYvx, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_jskFVrfA, 0.0f);
  numBytes += cDelay_init(this, &cDelay_DOjcDRe4, 0.0f);
  numBytes += hTable_init(&hTable_VnIanjrn, 256);
  numBytes += cDelay_init(this, &cDelay_sewWkUfW, 0.0f);
  numBytes += cDelay_init(this, &cDelay_I8lHtL1g, 0.0f);
  numBytes += hTable_init(&hTable_TRDDscAd, 256);
  numBytes += cTabwrite_init(&cTabwrite_5cB29lcr, &hTable_OwxwRUw5); // straightl
  numBytes += cSlice_init(&cSlice_VOim3x50, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_gDT26Eua, &hTable_9xfY4Fou); // dottedl
  numBytes += cSlice_init(&cSlice_KfDOVMqB, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_scx9aD9y, &hTable_n0vcvDE1); // dottedr
  numBytes += cSlice_init(&cSlice_7WfglvSY, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_M1qbIxWG, &hTable_owdqjely); // straightr
  numBytes += cSlice_init(&cSlice_y4r82lbZ, 1, -1);
  numBytes += cIf_init(&cIf_I05TBQfM, false);
  numBytes += cIf_init(&cIf_0bSrha6L, false);
  numBytes += cBinop_init(&cBinop_YYJXqnNS, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_xYgf7G54, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_zu4BoTwU, 0.0f);
  numBytes += cVar_init_f(&cVar_8FLcOwHc, 0.0f);
  numBytes += cVar_init_f(&cVar_1m0cA6OO, 0.0f);
  numBytes += cBinop_init(&cBinop_EUqMx08q, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_lJonMfpY, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_x9Jgxl6u, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Dr7rvUEP, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_FXJzQREP, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Q0Ca4IjC, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_epNsBwxB, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_HkIocZpb, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_EUv5yGaY, 0.0f);
  numBytes += cVar_init_f(&cVar_znTg6Enw, 0.0f);
  numBytes += cVar_init_f(&cVar_6eAsOgKl, 0.0f);
  numBytes += cBinop_init(&cBinop_RBA9Q73Z, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_uz7Pl02F, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_qVEcSrMb, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Gw33zJfA, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_RJPMLBA1, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Fae4cvb3, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_UHT958g2, 1, -1);
  numBytes += cSlice_init(&cSlice_cyAbv3Lo, 1, -1);
  numBytes += cVar_init_f(&cVar_frE8JqhT, 0.0f);
  numBytes += cIf_init(&cIf_8V0X1qHw, false);
  numBytes += cBinop_init(&cBinop_oAYfyniT, 0.0f); // __neq
  numBytes += cVar_init_f(&cVar_G25VLtUu, 0.0f);
  numBytes += cIf_init(&cIf_lbNz2ME0, false);
  numBytes += cIf_init(&cIf_O8Dzt5nd, false);
  numBytes += cIf_init(&cIf_qNw2WoiH, false);
  numBytes += cSlice_init(&cSlice_IoMpTFAo, 1, -1);
  numBytes += cSlice_init(&cSlice_0yLO7Oez, 1, -1);
  numBytes += cVar_init_f(&cVar_RH3KtVc1, 0.0f);
  numBytes += cIf_init(&cIf_8Et72aRv, false);
  numBytes += cBinop_init(&cBinop_CCcV7gxD, 0.0f); // __neq
  numBytes += cVar_init_f(&cVar_fxTtGChg, 0.0f);
  numBytes += cVar_init_f(&cVar_SlQCg45E, 0.0f);
  numBytes += cVar_init_f(&cVar_Qs3LJDyT, 0.0f);
  numBytes += cVar_init_f(&cVar_CwYzrGbm, 0.0f);
  numBytes += cVar_init_s(&cVar_wYOKmnVy, "del-recbuffl");
  numBytes += sVarf_init(&sVarf_2v1zuXlZ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_OnqtGO50, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_YRrphA6i, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_MOPAtY5Y, "del-recbuffr");
  numBytes += sVarf_init(&sVarf_PZtrrbNA, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Tmv896k0, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_UBpYi6Xt, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_hVGY7xbv, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_9tcdiXWk, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_ajhiOgom, false);
  numBytes += cIf_init(&cIf_EW5CBHNs, false);
  numBytes += cIf_init(&cIf_XDDwdEjq, false);
  numBytes += cIf_init(&cIf_lzCHOocS, false);
  numBytes += cVar_init_f(&cVar_sZdEr1MD, 0.0f);
  numBytes += cVar_init_f(&cVar_9TBjr5pj, 0.0f);
  numBytes += cVar_init_f(&cVar_I4fFIIPZ, 0.0f);
  numBytes += cVar_init_f(&cVar_JPJ80njZ, 0.0f);
  numBytes += cVar_init_f(&cVar_ECwvug8i, 0.0f);
  numBytes += sVarf_init(&sVarf_fKrjH0uD, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_t8ZV1vb4, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_uQ4mYBtg, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_HiArJ0I2, 0.0f);
  numBytes += cVar_init_f(&cVar_4O4cjttC, 0.0f);
  numBytes += cVar_init_f(&cVar_YKdmSUyo, 0.0f);
  numBytes += cBinop_init(&cBinop_JgHQjmoq, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_DsMxSwg5, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_EyZf7Iiz, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Xd1LEZY9, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_FT7qRXia, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_FMCgzgQh, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_P8Er9aKc, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_QQkzhHbC, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_Rx46FT27, 0.0f);
  numBytes += cVar_init_f(&cVar_islKyctZ, 0.0f);
  numBytes += cVar_init_f(&cVar_V4PEX98x, 0.0f);
  numBytes += cBinop_init(&cBinop_PhFsYOUv, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_wvTFIvcu, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_8NmYuZWq, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_BaE3mves, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_4I0x8hza, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_U3iCpv1g, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_LK9st2Cc, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_IweZNENC, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_vqTNwnzs, 0.0f);
  numBytes += cVar_init_f(&cVar_CsqxiRF0, 0.0f);
  numBytes += cVar_init_f(&cVar_9GPeSLyn, 0.0f);
  numBytes += cBinop_init(&cBinop_GhuCZTQ2, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_nV8r7AaW, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_4SNY81iA, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_jWWcy728, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_i0RJnBfo, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_a61Y0kfG, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_DQJM7MvI, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_orYEkG0K, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_1XIbPWsE, 0.0f);
  numBytes += cVar_init_f(&cVar_NBE7vOUw, 0.0f);
  numBytes += cVar_init_f(&cVar_MdbGabuI, 0.0f);
  numBytes += cBinop_init(&cBinop_NYDu84fV, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_IAxzOS6C, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_RSbSUWpI, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_RLwV55f5, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_1Qs0Tykr, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_HHETrWRB, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_zm64YL1A, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_LixHeZJJ, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_mPvVHEPy, 0.0f);
  numBytes += cVar_init_f(&cVar_R0jrJkwU, 0.0f);
  numBytes += cVar_init_f(&cVar_O1F7asEt, 0.0f);
  numBytes += cBinop_init(&cBinop_PINRUXRI, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_k78JLXBu, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_bwLElLCl, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_l1TMRdtZ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_YVRcaS4w, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_T02hGe5x, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_XQ1mHMsv, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_yGp1Qy25, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_OQOvtKxN, 0.0f);
  numBytes += cVar_init_f(&cVar_I0THcoC6, 0.0f);
  numBytes += cVar_init_f(&cVar_zmBSUTPc, 0.0f);
  numBytes += cBinop_init(&cBinop_E2FnTN70, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_gIVbebzR, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_0zY4B5Iu, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_lg4scmau, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_jesC15nw, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_z5kCP9jZ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ruKJeOpD, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_yU59TrWF, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_g9O2mXcB, 0.0f);
  numBytes += cVar_init_f(&cVar_9miUQ1kA, 0.0f);
  numBytes += cVar_init_f(&cVar_r06Dl8vA, 0.0f);
  numBytes += cBinop_init(&cBinop_PgzwpbDw, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_E9OBNYlP, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_GL6356BP, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_zWoSq8nO, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Ki0sVcwX, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_3i2fGaJq, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_qeTXZSZv, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_N8fD3HoE, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_uMVfuk4q, 0.0f);
  numBytes += cVar_init_f(&cVar_jys2IdjN, 0.0f);
  numBytes += cVar_init_f(&cVar_UlReeqkI, 0.0f);
  numBytes += cBinop_init(&cBinop_H4mhJ3AF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_mZyRvmIi, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_PwytTeXv, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_FVpNG9gW, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_bMoVi3TL, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Zejl7Cq4, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_OCX5mggz, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_9d0eVPMw, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2L3vyvfk, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_6fho1ydH, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_RNfjZS9V, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_AkVyXzdY, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_aLWyQyfV, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QSzOMnb0, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_7hXfEjh0, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_F6O4L72L, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_OXyolQkb, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_uMrg2Is4, 1.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_M00cYHNZ, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_CLpRsAaL, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_syouMPmx, 1.0f, 0.0f, false);
  numBytes += hTable_init(&hTable_OwxwRUw5, 9);
  numBytes += hTable_init(&hTable_owdqjely, 9);
  numBytes += hTable_init(&hTable_9xfY4Fou, 9);
  numBytes += hTable_init(&hTable_n0vcvDE1, 9);
  numBytes += sVarf_init(&sVarf_iuXikdsW, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_FS3OckOJ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_trlisMSF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ZRBzrnyB, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_lZHTWdOr, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_sZrPfcc1, 0.0f);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_AmanitaV04::~Heavy_AmanitaV04() {
  sEnv_free(&sEnv_2WpaXiVp);
  hTable_free(&hTable_VnIanjrn);
  hTable_free(&hTable_TRDDscAd);
  hTable_free(&hTable_OwxwRUw5);
  hTable_free(&hTable_owdqjely);
  hTable_free(&hTable_9xfY4Fou);
  hTable_free(&hTable_n0vcvDE1);
}

HvTable *Heavy_AmanitaV04::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0x2B426EB5: return &hTable_OwxwRUw5; // straightl
    case 0x6CBF759D: return &hTable_owdqjely; // straightr
    case 0xB594268B: return &hTable_9xfY4Fou; // dottedl
    case 0x9D290E61: return &hTable_n0vcvDE1; // dottedr
    case 0x4281DDEE: return &hTable_VnIanjrn; // del-recbuffr
    case 0xAE35621F: return &hTable_TRDDscAd; // del-recbuffl
    default: return nullptr;
  }
}

void Heavy_AmanitaV04::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x6CA32231: { // Bitrate
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_bL2182oy_sendMessage);
      break;
    }
    case 0x50848907: { // Del_Left
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_MWOGtVUH_sendMessage);
      break;
    }
    case 0x6EB8DB6: { // Del_Right
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_RqNSdtNh_sendMessage);
      break;
    }
    case 0x57157946: { // Feedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_z3V0zzGs_sendMessage);
      break;
    }
    case 0xBCF6D724: { // Feel_Left
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7oUXdOtT_sendMessage);
      break;
    }
    case 0xB9290266: { // Feel_Right
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_lWbUSQ9N_sendMessage);
      break;
    }
    case 0x31E34622: { // Hipass_Freq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_pQe4QGx4_sendMessage);
      break;
    }
    case 0x415BC573: { // Hipass_Res
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_uoRTAa4Z_sendMessage);
      break;
    }
    case 0xD5F085A8: { // Lfo_Amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_AlmJlQyT_sendMessage);
      break;
    }
    case 0x268762D2: { // Lfo_Phaze
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_tDr6Q9gj_sendMessage);
      break;
    }
    case 0xCE9CDD82: { // Lfo_Rate
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_e9OaTdGs_sendMessage);
      break;
    }
    case 0x4123BB7: { // Lowpass_Freq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_XrY5Ahgr_sendMessage);
      break;
    }
    case 0x6A5226EA: { // Lowpass_Res
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4ONZ7LVN_sendMessage);
      break;
    }
    case 0x4519E135: { // Mono_Stero_In
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_lMpqT4zZ_sendMessage);
      break;
    }
    case 0x7B3C1830: { // Noise_Aggro
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5MW0BWWN_sendMessage);
      break;
    }
    case 0x80BB8803: { // Noise_Lvl
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_I1iTiBjT_sendMessage);
      break;
    }
    case 0x3779CB25: { // Pan
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_UVkULApi_sendMessage);
      break;
    }
    case 0xCA91F83B: { // Sidechain
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_u1tQNHMZ_sendMessage);
      break;
    }
    case 0x821BE185: { // Stereo_PingPong
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_W8oiaj7a_sendMessage);
      break;
    }
    case 0xB8FDF5C9: { // Sync_Delays
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_yEOEzjUR_sendMessage);
      break;
    }
    case 0xAD9B5744: { // Tempo_Sync
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_bgWqSFqp_sendMessage);
      break;
    }
    case 0xF245D837: { // Wet_Mix
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_FnuRjS1E_sendMessage);
      break;
    }
    case 0xBBB046A0: { // 1034-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_l3gGuxJi_sendMessage);
      break;
    }
    case 0xDAF079E2: { // 1034-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_qWirHvPV_sendMessage);
      break;
    }
    case 0x47E361A9: { // 1034-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_CqVfbADW_sendMessage);
      break;
    }
    case 0x9DD277E3: { // 1077-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4m07vR4n_sendMessage);
      break;
    }
    case 0x93009500: { // 1077-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_mwn4v2MU_sendMessage);
      break;
    }
    case 0x39491575: { // 1077-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4KdaUxTv_sendMessage);
      break;
    }
    case 0x39BDAB5E: { // 1185-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_uCCPc9Z4_sendMessage);
      break;
    }
    case 0xA3297E3B: { // 1185-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8MyG36WH_sendMessage);
      break;
    }
    case 0x87532731: { // 1185-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_uByuc3p8_sendMessage);
      break;
    }
    case 0x6EBC57AB: { // 1226-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_CFJ4wfDE_sendMessage);
      break;
    }
    case 0xBB3635D3: { // 1226-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_aXyDQBSd_sendMessage);
      break;
    }
    case 0xD44C9AE1: { // 1226-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2ByaMnjL_sendMessage);
      break;
    }
    case 0x359D2AB1: { // 1341-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_KwdXNIiN_sendMessage);
      break;
    }
    case 0x18103C81: { // 1341-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_hgfti8zT_sendMessage);
      break;
    }
    case 0xAC7511F3: { // 1341-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Vni57wCE_sendMessage);
      break;
    }
    case 0x3167CB60: { // 1382-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Mp5S9jEz_sendMessage);
      break;
    }
    case 0xC75272E6: { // 1382-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_a81uPReF_sendMessage);
      break;
    }
    case 0x5DDFC72C: { // 1382-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_wmvruDgz_sendMessage);
      break;
    }
    case 0xD4D1FAF2: { // 1423-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1JyV5QcG_sendMessage);
      break;
    }
    case 0x7C2710FB: { // 1423-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OnzssKff_sendMessage);
      break;
    }
    case 0x3DC9B4DC: { // 1423-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_b7NGKn4R_sendMessage);
      break;
    }
    case 0xA9018005: { // 1464-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jYdpaSvj_sendMessage);
      break;
    }
    case 0xD3047FE4: { // 1464-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Mc326zJg_sendMessage);
      break;
    }
    case 0x25AD775A: { // 1464-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_LHaDwDID_sendMessage);
      break;
    }
    case 0x349CB385: { // 1505-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_nEiajomn_sendMessage);
      break;
    }
    case 0x351D6FF3: { // 1505-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_cbclIxNP_sendMessage);
      break;
    }
    case 0x196A8B30: { // 1505-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kWTQF9lT_sendMessage);
      break;
    }
    case 0xE0FCB9EF: { // 1546-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_sLHc7Xsv_sendMessage);
      break;
    }
    case 0x35F76E1B: { // 1546-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_m5wLM0bt_sendMessage);
      break;
    }
    case 0xDF1DE15C: { // 1546-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_NBIqFN0o_sendMessage);
      break;
    }
    case 0x98694C20: { // 1587-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_rlKTUYTA_sendMessage);
      break;
    }
    case 0xA0AB3811: { // 1587-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_t3ePwvDU_sendMessage);
      break;
    }
    case 0x93C3C97B: { // 1587-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_yESzyihM_sendMessage);
      break;
    }
    case 0x773CA2D0: { // 1628-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_QD1xEw5h_sendMessage);
      break;
    }
    case 0x6CAE9485: { // 1628-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_IWkMNJrU_sendMessage);
      break;
    }
    case 0x733C9AE6: { // 1628-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2CH3D7HH_sendMessage);
      break;
    }
    case 0xDD21C0EB: { // __hv_bang~
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_YlVrzrF4_sendMessage);
      break;
    }
    case 0xDF8C2721: { // __hv_dpf_bpm
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_55hWXm0r_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dlQ12Wyb_sendMessage);
      break;
    }
    case 0x7BB9803A: { // bpm
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_PkDJoeR0_sendMessage);
      break;
    }
    case 0x57C59425: { // delPowLeft
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dlYbwmHX_sendMessage);
      break;
    }
    case 0xFAF4A60E: { // delPowRight
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Gi4p8lUL_sendMessage);
      break;
    }
    case 0xCF6FF373: { // lMs
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_zixyazZc_sendMessage);
      break;
    }
    case 0x4532D6F1: { // lSyncFront
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Y173Lwk2_sendMessage);
      break;
    }
    case 0xF124DC0D: { // lock
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZcSCataI_sendMessage);
      break;
    }
    case 0xD1BEA754: { // rMs
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_t42l9gHI_sendMessage);
      break;
    }
    case 0xCA5149D9: { // rSyncFront
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_uWvJy9IM_sendMessage);
      break;
    }
    case 0x40A88D1A: { // straightDottedLeft
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fU3KLh7q_sendMessage);
      break;
    }
    case 0xF9F7FF: { // straightDottedRight
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vcF2LA2U_sendMessage);
      break;
    }
    case 0x5B8211BA: { // syncL
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_wzvytjOF_sendMessage);
      break;
    }
    case 0x620C929B: { // syncR
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kVEpgK87_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_AmanitaV04::getParameterInfo(int index, HvParameterInfo *info) {
  if (info != nullptr) {
    switch (index) {
      case 0: {
        info->name = "Bitrate";
        info->hash = 0x6CA32231;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 2.0f;
        info->defaultVal = 2.0f;
        break;
      }
      case 1: {
        info->name = "Del_Left";
        info->hash = 0x50848907;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 2: {
        info->name = "Del_Right";
        info->hash = 0x6EB8DB6;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 3: {
        info->name = "Feedback";
        info->hash = 0x57157946;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.3f;
        break;
      }
      case 4: {
        info->name = "Feel_Left";
        info->hash = 0xBCF6D724;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 5: {
        info->name = "Feel_Right";
        info->hash = 0xB9290266;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 6: {
        info->name = "Hipass_Freq";
        info->hash = 0x31E34622;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 41.0f;
        info->maxVal = 1200.0f;
        info->defaultVal = 60.0f;
        break;
      }
      case 7: {
        info->name = "Hipass_Res";
        info->hash = 0x415BC573;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.3f;
        break;
      }
      case 8: {
        info->name = "Lfo_Amount";
        info->hash = 0xD5F085A8;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 20.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 9: {
        info->name = "Lfo_Phaze";
        info->hash = 0x268762D2;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = -1.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 10: {
        info->name = "Lfo_Rate";
        info->hash = 0xCE9CDD82;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.001f;
        info->maxVal = 25.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 11: {
        info->name = "Lowpass_Freq";
        info->hash = 0x4123BB7;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 50.0f;
        info->maxVal = 20000.0f;
        info->defaultVal = 5000.0f;
        break;
      }
      case 12: {
        info->name = "Lowpass_Res";
        info->hash = 0x6A5226EA;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.4f;
        break;
      }
      case 13: {
        info->name = "Mono_Stero_In";
        info->hash = 0x4519E135;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 14: {
        info->name = "Noise_Aggro";
        info->hash = 0x7B3C1830;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.3f;
        info->defaultVal = 0.2f;
        break;
      }
      case 15: {
        info->name = "Noise_Lvl";
        info->hash = 0x80BB8803;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.3f;
        break;
      }
      case 16: {
        info->name = "Pan";
        info->hash = 0x3779CB25;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 2.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 17: {
        info->name = "Sidechain";
        info->hash = 0xCA91F83B;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 18: {
        info->name = "Stereo_PingPong";
        info->hash = 0x821BE185;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 19: {
        info->name = "Sync_Delays";
        info->hash = 0xB8FDF5C9;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 20: {
        info->name = "Tempo_Sync";
        info->hash = 0xAD9B5744;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 21: {
        info->name = "Wet_Mix";
        info->hash = 0xF245D837;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.3f;
        break;
      }
      default: {
        info->name = "invalid parameter index";
        info->hash = 0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 0.0f;
        info->defaultVal = 0.0f;
        break;
      }
    }
  }
  return 22;
}



/*
 * Send Function Implementations
 */


void Heavy_AmanitaV04::cMsg_Sz9nRJXD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_NqE7ZDTP, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_J3113u6I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_r4SxPXCz, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_Y6Zsvgax_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_xcknOm8v, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_92wiwiBD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_5IC87hpp, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_lqNpAdJS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_JGpKqxxm, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_7IiaupB3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_eSO3ktBM_sendMessage);
}

void Heavy_AmanitaV04::cSystem_eSO3ktBM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TE8EUdTu, HV_BINOP_DIVIDE, 1, m, &cBinop_TE8EUdTu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sfeO4XrM_sendMessage);
}

void Heavy_AmanitaV04::cUnop_ypTPGoQZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_WxjFKLOG_sendMessage);
}

void Heavy_AmanitaV04::cMsg_MjAWr4vp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_ypTPGoQZ_sendMessage);
}

void Heavy_AmanitaV04::cBinop_WxjFKLOG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TE8EUdTu, HV_BINOP_DIVIDE, 0, m, &cBinop_TE8EUdTu_sendMessage);
}

void Heavy_AmanitaV04::cCast_sfeO4XrM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MjAWr4vp_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_TE8EUdTu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xy74PKsS, HV_BINOP_MULTIPLY, 1, m, &cBinop_Xy74PKsS_sendMessage);
}

void Heavy_AmanitaV04::cBinop_Xy74PKsS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TmMuVF10_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_l0TyXdj9_sendMessage);
}

void Heavy_AmanitaV04::cUnop_HIVecpj6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_38JAnZ37_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cUnop_cJF7yMmA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_0hMMQYs8_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_TTvaoS3n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_LCsyQqk0_sendMessage);
}

void Heavy_AmanitaV04::cBinop_LCsyQqk0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xy74PKsS, HV_BINOP_MULTIPLY, 0, m, &cBinop_Xy74PKsS_sendMessage);
}

void Heavy_AmanitaV04::cBinop_mQI9cHHQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_C9sTOjhv_sendMessage);
}

void Heavy_AmanitaV04::cBinop_C9sTOjhv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_I82frVLg_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_zoigHEus_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VyFzbdgY, 1, m, &cVar_VyFzbdgY_sendMessage);
}

void Heavy_AmanitaV04::cVar_VyFzbdgY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0cBNsFLG_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_hBDvY4Vj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_O9SkYsjB, HV_BINOP_MULTIPLY, 1, m, &cBinop_O9SkYsjB_sendMessage);
}

void Heavy_AmanitaV04::cBinop_4kuIwSvl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_hBDvY4Vj_sendMessage);
}

void Heavy_AmanitaV04::cBinop_P2uBKb8b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_S2xTIUF9_sendMessage);
}

void Heavy_AmanitaV04::cBinop_S2xTIUF9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eYMOwo0Z, HV_BINOP_MULTIPLY, 1, m, &cBinop_eYMOwo0Z_sendMessage);
}

void Heavy_AmanitaV04::cBinop_8Uqo0kKC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qUlTQYzJ, HV_BINOP_MULTIPLY, 1, m, &cBinop_qUlTQYzJ_sendMessage);
}

void Heavy_AmanitaV04::cBinop_yZAutpu7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_8Uqo0kKC_sendMessage);
}

void Heavy_AmanitaV04::cBinop_JGwVnMVV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OAO5ahCV, HV_BINOP_MULTIPLY, 1, m, &cBinop_OAO5ahCV_sendMessage);
}

void Heavy_AmanitaV04::cMsg_jIHwtOyD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_zNZvG1Ir_sendMessage);
}

void Heavy_AmanitaV04::cBinop_zNZvG1Ir_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ih5NgBsO, HV_BINOP_MULTIPLY, 1, m, &cBinop_Ih5NgBsO_sendMessage);
}

void Heavy_AmanitaV04::cVar_ntdqWZ7M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xC1CPzUL_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_TTvaoS3n_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HrwXsM8y_sendMessage);
}

void Heavy_AmanitaV04::cVar_kB2EVgxV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_mQI9cHHQ_sendMessage);
}

void Heavy_AmanitaV04::cCast_TmMuVF10_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_HIVecpj6_sendMessage);
}

void Heavy_AmanitaV04::cCast_l0TyXdj9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_cJF7yMmA_sendMessage);
}

void Heavy_AmanitaV04::cSend_38JAnZ37_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_CqVfbADW_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_0hMMQYs8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_qWirHvPV_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_zgIrtWah_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_l3gGuxJi_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_I82frVLg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_lvaP9HoJ_sendMessage);
}

void Heavy_AmanitaV04::cBinop_lvaP9HoJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e6QWvULO, HV_BINOP_MULTIPLY, 1, m, &cBinop_e6QWvULO_sendMessage);
}

void Heavy_AmanitaV04::cBinop_e6QWvULO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_8MLc0g73_sendMessage);
}

void Heavy_AmanitaV04::cBinop_8MLc0g73_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_zgIrtWah_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_0cBNsFLG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_O1H3kN8N_sendMessage);
}

void Heavy_AmanitaV04::cBinop_O1H3kN8N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MhiYyDfA_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ISbCxvT7_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7sKZVThc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JHfbRtxR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VcJagPpn_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YpWJcDck_sendMessage);
}

void Heavy_AmanitaV04::cBinop_O9SkYsjB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Sz9nRJXD_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_eYMOwo0Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_J3113u6I_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_qUlTQYzJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Y6Zsvgax_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_OAO5ahCV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_92wiwiBD_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_Ih5NgBsO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lqNpAdJS_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_YxXuomE8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kB2EVgxV, 1, m, &cVar_kB2EVgxV_sendMessage);
}

void Heavy_AmanitaV04::cCast_LqWlCnSf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ntdqWZ7M, 0, m, &cVar_ntdqWZ7M_sendMessage);
}

void Heavy_AmanitaV04::cCast_MhiYyDfA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cCast_7sKZVThc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OAO5ahCV, HV_BINOP_MULTIPLY, 0, m, &cBinop_OAO5ahCV_sendMessage);
}

void Heavy_AmanitaV04::cCast_YpWJcDck_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_O9SkYsjB, HV_BINOP_MULTIPLY, 0, m, &cBinop_O9SkYsjB_sendMessage);
}

void Heavy_AmanitaV04::cCast_VcJagPpn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eYMOwo0Z, HV_BINOP_MULTIPLY, 0, m, &cBinop_eYMOwo0Z_sendMessage);
}

void Heavy_AmanitaV04::cCast_ISbCxvT7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ih5NgBsO, HV_BINOP_MULTIPLY, 0, m, &cBinop_Ih5NgBsO_sendMessage);
}

void Heavy_AmanitaV04::cCast_JHfbRtxR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qUlTQYzJ, HV_BINOP_MULTIPLY, 0, m, &cBinop_qUlTQYzJ_sendMessage);
}

void Heavy_AmanitaV04::cCast_xC1CPzUL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kB2EVgxV, 0, m, &cVar_kB2EVgxV_sendMessage);
}

void Heavy_AmanitaV04::cCast_HrwXsM8y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VyFzbdgY, 0, m, &cVar_VyFzbdgY_sendMessage);
}

void Heavy_AmanitaV04::cIf_jpkd3xjI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_Ye0sHDiJ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 485.0f, 0, m, &cBinop_f0UNSgpq_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cMsg_Xjkme0gf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_eXGyn2iO, HV_BINOP_POW, 0, m, &cBinop_eXGyn2iO_sendMessage);
}

void Heavy_AmanitaV04::cBinop_eXGyn2iO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lZHTWdOr, m);
}

void Heavy_AmanitaV04::cBinop_fpldzQWk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_tVANcVu1_sendMessage);
}

void Heavy_AmanitaV04::cCast_dVWDBq5q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_jpkd3xjI, 0, m, &cIf_jpkd3xjI_sendMessage);
}

void Heavy_AmanitaV04::cCast_qDL7LuMk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_KoC7Q2QR_sendMessage);
}

void Heavy_AmanitaV04::cBinop_KoC7Q2QR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_jpkd3xjI, 1, m, &cIf_jpkd3xjI_sendMessage);
}

void Heavy_AmanitaV04::cBinop_f0UNSgpq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 100.0f, 0, m, &cBinop_fpldzQWk_sendMessage);
}

void Heavy_AmanitaV04::cMsg_Ye0sHDiJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_lZHTWdOr, m);
}

void Heavy_AmanitaV04::cBinop_tVANcVu1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eXGyn2iO, HV_BINOP_POW, 1, m, &cBinop_eXGyn2iO_sendMessage);
  cMsg_Xjkme0gf_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_NGXy4X72_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_h0ZC3RrL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_UQXYKDLJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_UYLJECgu, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_ntfWol1N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_qM7OkhPz, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_NIjOkZzW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_dYMIG95W, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_3Bgz1EfP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_MVSHHN5F, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_pDTn2dCY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ostjVcoZ_sendMessage);
}

void Heavy_AmanitaV04::cSystem_ostjVcoZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Qzp3haUK, HV_BINOP_DIVIDE, 1, m, &cBinop_Qzp3haUK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ak24RiMU_sendMessage);
}

void Heavy_AmanitaV04::cUnop_yVhbckUt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_8oZJTwDx_sendMessage);
}

void Heavy_AmanitaV04::cMsg_dos3jHSj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_yVhbckUt_sendMessage);
}

void Heavy_AmanitaV04::cBinop_8oZJTwDx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Qzp3haUK, HV_BINOP_DIVIDE, 0, m, &cBinop_Qzp3haUK_sendMessage);
}

void Heavy_AmanitaV04::cCast_ak24RiMU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dos3jHSj_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_Qzp3haUK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AUfVVm0M, HV_BINOP_MULTIPLY, 1, m, &cBinop_AUfVVm0M_sendMessage);
}

void Heavy_AmanitaV04::cBinop_AUfVVm0M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1J0qOtyd_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OGLjLkX5_sendMessage);
}

void Heavy_AmanitaV04::cUnop_T6aYHd4k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_JGm6YIfO_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cUnop_qxgvYkXD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_MJNjYI1T_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_Yj7SzRJq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_1TJTYOiL_sendMessage);
}

void Heavy_AmanitaV04::cBinop_1TJTYOiL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AUfVVm0M, HV_BINOP_MULTIPLY, 0, m, &cBinop_AUfVVm0M_sendMessage);
}

void Heavy_AmanitaV04::cBinop_1busX1Cc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_EXDEX3xN_sendMessage);
}

void Heavy_AmanitaV04::cBinop_EXDEX3xN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dAEYFCHH_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_QLUsueWl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8tjfDVAA, 1, m, &cVar_8tjfDVAA_sendMessage);
}

void Heavy_AmanitaV04::cVar_8tjfDVAA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_99hXXERe_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_bENTsA1T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FGFWgMJa, HV_BINOP_MULTIPLY, 1, m, &cBinop_FGFWgMJa_sendMessage);
}

void Heavy_AmanitaV04::cBinop_lnJwm7jy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_bENTsA1T_sendMessage);
}

void Heavy_AmanitaV04::cBinop_Tvma84KW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_VOgzts8z_sendMessage);
}

void Heavy_AmanitaV04::cBinop_VOgzts8z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jFNyxw5S, HV_BINOP_MULTIPLY, 1, m, &cBinop_jFNyxw5S_sendMessage);
}

void Heavy_AmanitaV04::cBinop_aa4cN5qg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aNCk4clJ, HV_BINOP_MULTIPLY, 1, m, &cBinop_aNCk4clJ_sendMessage);
}

void Heavy_AmanitaV04::cBinop_JeXemNg1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_aa4cN5qg_sendMessage);
}

void Heavy_AmanitaV04::cBinop_dMaEzKbf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jjupp3Lp, HV_BINOP_MULTIPLY, 1, m, &cBinop_jjupp3Lp_sendMessage);
}

void Heavy_AmanitaV04::cMsg_IWUIsdFI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_GhnFtO8p_sendMessage);
}

void Heavy_AmanitaV04::cBinop_GhnFtO8p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oHEIZxK0, HV_BINOP_MULTIPLY, 1, m, &cBinop_oHEIZxK0_sendMessage);
}

void Heavy_AmanitaV04::cVar_fpCvlBFa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_b1sYOdH0_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_Yj7SzRJq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uc3BFd1v_sendMessage);
}

void Heavy_AmanitaV04::cVar_YhyK7fuL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_1busX1Cc_sendMessage);
}

void Heavy_AmanitaV04::cCast_1J0qOtyd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_T6aYHd4k_sendMessage);
}

void Heavy_AmanitaV04::cCast_OGLjLkX5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_qxgvYkXD_sendMessage);
}

void Heavy_AmanitaV04::cSend_JGm6YIfO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4KdaUxTv_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_MJNjYI1T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_mwn4v2MU_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_TW3M3lTv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4m07vR4n_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_dAEYFCHH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Ppd1gduw_sendMessage);
}

void Heavy_AmanitaV04::cBinop_Ppd1gduw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DsWcsaAq, HV_BINOP_MULTIPLY, 1, m, &cBinop_DsWcsaAq_sendMessage);
}

void Heavy_AmanitaV04::cBinop_DsWcsaAq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_186VBbgY_sendMessage);
}

void Heavy_AmanitaV04::cBinop_186VBbgY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_TW3M3lTv_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_99hXXERe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_nvwko0Mn_sendMessage);
}

void Heavy_AmanitaV04::cBinop_nvwko0Mn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WmqWiXqx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2jMu6MlD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xGe2XZOw_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AHLHhgnd_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tUN48OPf_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FvIqnvda_sendMessage);
}

void Heavy_AmanitaV04::cBinop_FGFWgMJa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NGXy4X72_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_jFNyxw5S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UQXYKDLJ_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_aNCk4clJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ntfWol1N_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_jjupp3Lp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NIjOkZzW_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_oHEIZxK0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3Bgz1EfP_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_oWPg6nDk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YhyK7fuL, 1, m, &cVar_YhyK7fuL_sendMessage);
}

void Heavy_AmanitaV04::cCast_W7KvEoH9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fpCvlBFa, 0, m, &cVar_fpCvlBFa_sendMessage);
}

void Heavy_AmanitaV04::cCast_2jMu6MlD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oHEIZxK0, HV_BINOP_MULTIPLY, 0, m, &cBinop_oHEIZxK0_sendMessage);
}

void Heavy_AmanitaV04::cCast_xGe2XZOw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jjupp3Lp, HV_BINOP_MULTIPLY, 0, m, &cBinop_jjupp3Lp_sendMessage);
}

void Heavy_AmanitaV04::cCast_AHLHhgnd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aNCk4clJ, HV_BINOP_MULTIPLY, 0, m, &cBinop_aNCk4clJ_sendMessage);
}

void Heavy_AmanitaV04::cCast_WmqWiXqx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cCast_tUN48OPf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jFNyxw5S, HV_BINOP_MULTIPLY, 0, m, &cBinop_jFNyxw5S_sendMessage);
}

void Heavy_AmanitaV04::cCast_FvIqnvda_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FGFWgMJa, HV_BINOP_MULTIPLY, 0, m, &cBinop_FGFWgMJa_sendMessage);
}

void Heavy_AmanitaV04::cCast_b1sYOdH0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YhyK7fuL, 0, m, &cVar_YhyK7fuL_sendMessage);
}

void Heavy_AmanitaV04::cCast_uc3BFd1v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8tjfDVAA, 0, m, &cVar_8tjfDVAA_sendMessage);
}

void Heavy_AmanitaV04::cVar_mu7P3lMg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QDaJ3w9k, HV_BINOP_MULTIPLY, 0, m, &cBinop_QDaJ3w9k_sendMessage);
}

void Heavy_AmanitaV04::cMsg_1WpAceds_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_zHcziGLp_sendMessage);
}

void Heavy_AmanitaV04::cSystem_zHcziGLp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jZdtoSGo_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_QDaJ3w9k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_o1fDebP6_sendMessage);
}

void Heavy_AmanitaV04::cBinop_a3Bed1C8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QDaJ3w9k, HV_BINOP_MULTIPLY, 1, m, &cBinop_QDaJ3w9k_sendMessage);
}

void Heavy_AmanitaV04::cMsg_jZdtoSGo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_a3Bed1C8_sendMessage);
}

void Heavy_AmanitaV04::cBinop_o1fDebP6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_CbtYnizt_sendMessage);
}

void Heavy_AmanitaV04::cBinop_CbtYnizt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_toO6GFsF_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_BxwREdfz, m);
}

void Heavy_AmanitaV04::cBinop_toO6GFsF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_HPeIbm8g, m);
}

void Heavy_AmanitaV04::cVar_uTOPoicY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_nlmkClI6, m);
}

void Heavy_AmanitaV04::cVar_BeNyFAmt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_UkcYMfwf, m);
}

void Heavy_AmanitaV04::cSwitchcase_PkNUR8tv_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_mcHTNgcf, 0, m, &cSlice_mcHTNgcf_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_R71pBKiu, 0, m, &cRandom_R71pBKiu_sendMessage);
      break;
    }
  }
}

void Heavy_AmanitaV04::cBinop_5k5K7QWl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_uCaNnAWA_sendMessage);
}

void Heavy_AmanitaV04::cUnop_uCaNnAWA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qrZYFaeA_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cRandom_R71pBKiu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8388610.0f, 0, m, &cBinop_5k5K7QWl_sendMessage);
}

void Heavy_AmanitaV04::cSlice_mcHTNgcf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_R71pBKiu, 1, m, &cRandom_R71pBKiu_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cMsg_qrZYFaeA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 1.0f);
  sVari_onMessage(_c, &Context(_c)->sVari_aLj7r7A9, m);
}

void Heavy_AmanitaV04::cBinop_h9xzJyD1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_cV1FweC7_sendMessage);
}

void Heavy_AmanitaV04::cBinop_cV1FweC7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_EPWkzK3w_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_PHPUlnyr_sendMessage);
}

void Heavy_AmanitaV04::cVar_umbYGmaJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_K6oSa66n_sendMessage);
}

void Heavy_AmanitaV04::cMsg_qaRur3zB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_jHlBuLLL_sendMessage);
}

void Heavy_AmanitaV04::cSystem_jHlBuLLL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_McP1ZH1S, HV_BINOP_DIVIDE, 1, m, &cBinop_McP1ZH1S_sendMessage);
}

void Heavy_AmanitaV04::cBinop_EPWkzK3w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_65CyxYa1_sendMessage);
}

void Heavy_AmanitaV04::cBinop_65CyxYa1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_9tQCKPbZ, m);
}

void Heavy_AmanitaV04::cMsg_qV5rvbuv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_CVDjSQb4_sendMessage);
}

void Heavy_AmanitaV04::cBinop_CVDjSQb4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_h9xzJyD1_sendMessage);
}

void Heavy_AmanitaV04::cBinop_PHPUlnyr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_DuG3puRh, m);
}

void Heavy_AmanitaV04::cBinop_K6oSa66n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_wrTksdwD_sendMessage);
}

void Heavy_AmanitaV04::cBinop_wrTksdwD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_McP1ZH1S, HV_BINOP_DIVIDE, 0, m, &cBinop_McP1ZH1S_sendMessage);
}

void Heavy_AmanitaV04::cBinop_McP1ZH1S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qV5rvbuv_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cVar_ga85wPJT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_BT6G2ZRF_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_HUsqbyiO, 0, m, &cIf_HUsqbyiO_sendMessage);
}

void Heavy_AmanitaV04::cUnop_svmVo2yU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_b3ZT3eWy_onMessage(_c, NULL, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_JPJ80njZ, 0, m, &cVar_JPJ80njZ_sendMessage);
  cSwitchcase_T4CkwVCV_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cUnop_qXUntUf8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_b3ZT3eWy_onMessage(_c, NULL, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_JPJ80njZ, 0, m, &cVar_JPJ80njZ_sendMessage);
  cSwitchcase_T4CkwVCV_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cIf_HUsqbyiO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_qXUntUf8_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_svmVo2yU_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cBinop_BT6G2ZRF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_HUsqbyiO, 1, m, &cIf_HUsqbyiO_sendMessage);
}

void Heavy_AmanitaV04::cVar_K4LmWkmk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_U2PxPcjC_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cIf_3qpZqJ74_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bOQAmhJg_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KgUgVLz2_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cSwitchcase_bmffGrCI_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3y3SQFJp_sendMessage);
      break;
    }
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EeortlvI_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_AmanitaV04::cCast_3y3SQFJp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_k70i9duA_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_EeortlvI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HPW0qI1v_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cIf_U9mUn0Iw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bOQAmhJg_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KgUgVLz2_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cVar_pBRo4hpy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_nu6l7oNj_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_bpxmtfli, 0, m, &cIf_bpxmtfli_sendMessage);
}

void Heavy_AmanitaV04::cUnop_DYYfXDie_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ECwvug8i, 0, m, &cVar_ECwvug8i_sendMessage);
}

void Heavy_AmanitaV04::cUnop_O1mhUY2Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ECwvug8i, 0, m, &cVar_ECwvug8i_sendMessage);
}

void Heavy_AmanitaV04::cIf_bpxmtfli_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_O1mhUY2Q_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_DYYfXDie_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cBinop_nu6l7oNj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_bpxmtfli, 1, m, &cIf_bpxmtfli_sendMessage);
}

void Heavy_AmanitaV04::cVar_v3GAUCGw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sZdEr1MD, 1, m, &cVar_sZdEr1MD_sendMessage);
  cSend_TfgULpEc_sendMessage(_c, 0, m);
  cIf_onMessage(_c, &Context(_c)->cIf_XDDwdEjq, 0, m, &cIf_XDDwdEjq_sendMessage);
}

void Heavy_AmanitaV04::cIf_iUu4VdzX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bV067MiG_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2vDs3hyD_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cSwitchcase_qODZNkt9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_i5ebWsmu_sendMessage);
      break;
    }
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2g3df6lo_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_AmanitaV04::cCast_i5ebWsmu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8XlT5c1y_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_2g3df6lo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yx3L9KxB_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cIf_yFJVoOS3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bV067MiG_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2vDs3hyD_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cTabread_WhB7jzIk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_3qpZqJ74, 0, m, &cIf_3qpZqJ74_sendMessage);
}

void Heavy_AmanitaV04::cSwitchcase_T4CkwVCV_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_gBZXfEzP, 0, m, &cSlice_gBZXfEzP_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HX2nryK7_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_upAgI32o_sendMessage);
      break;
    }
  }
}

void Heavy_AmanitaV04::cSlice_gBZXfEzP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_WhB7jzIk, 1, m, &cTabread_WhB7jzIk_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_WhB7jzIk, 1, m, &cTabread_WhB7jzIk_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cVar_CcSVT8Mu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Tz5HQ96S_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSystem_FilH9gXQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_CtJuEAc7_sendMessage);
}

void Heavy_AmanitaV04::cBinop_T177JIDK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k29YhLiB, HV_BINOP_MIN, 0, m, &cBinop_k29YhLiB_sendMessage);
}

void Heavy_AmanitaV04::cCast_upAgI32o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_T177JIDK_sendMessage);
}

void Heavy_AmanitaV04::cCast_HX2nryK7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CcSVT8Mu, 0, m, &cVar_CcSVT8Mu_sendMessage);
}

void Heavy_AmanitaV04::cBinop_k29YhLiB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_WhB7jzIk, 0, m, &cTabread_WhB7jzIk_sendMessage);
}

void Heavy_AmanitaV04::cMsg_Tz5HQ96S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_FilH9gXQ_sendMessage);
}

void Heavy_AmanitaV04::cBinop_CtJuEAc7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k29YhLiB, HV_BINOP_MIN, 1, m, &cBinop_k29YhLiB_sendMessage);
}

void Heavy_AmanitaV04::cTabread_uJamsRnf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_U9mUn0Iw, 0, m, &cIf_U9mUn0Iw_sendMessage);
}

void Heavy_AmanitaV04::cSwitchcase_b3ZT3eWy_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Yo3BMU0a, 0, m, &cSlice_Yo3BMU0a_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gMKNnf81_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HSB1c4Jd_sendMessage);
      break;
    }
  }
}

void Heavy_AmanitaV04::cSlice_Yo3BMU0a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_uJamsRnf, 1, m, &cTabread_uJamsRnf_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_uJamsRnf, 1, m, &cTabread_uJamsRnf_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cVar_VWtd0Erp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EyomEfjS_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSystem_2SBh03Cu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_tZ8dLP2i_sendMessage);
}

void Heavy_AmanitaV04::cBinop_TSSYqrT0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_m2zzw666, HV_BINOP_MIN, 0, m, &cBinop_m2zzw666_sendMessage);
}

void Heavy_AmanitaV04::cCast_HSB1c4Jd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_TSSYqrT0_sendMessage);
}

void Heavy_AmanitaV04::cCast_gMKNnf81_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VWtd0Erp, 0, m, &cVar_VWtd0Erp_sendMessage);
}

void Heavy_AmanitaV04::cBinop_m2zzw666_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_uJamsRnf, 0, m, &cTabread_uJamsRnf_sendMessage);
}

void Heavy_AmanitaV04::cMsg_EyomEfjS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2SBh03Cu_sendMessage);
}

void Heavy_AmanitaV04::cBinop_tZ8dLP2i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_m2zzw666, HV_BINOP_MIN, 1, m, &cBinop_m2zzw666_sendMessage);
}

void Heavy_AmanitaV04::cTabread_pZHsUbNw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_yFJVoOS3, 0, m, &cIf_yFJVoOS3_sendMessage);
}

void Heavy_AmanitaV04::cSwitchcase_4OkfwLBD_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_gm1a2HxB, 0, m, &cSlice_gm1a2HxB_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ThgnUJqz_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7PNszUi5_sendMessage);
      break;
    }
  }
}

void Heavy_AmanitaV04::cSlice_gm1a2HxB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_pZHsUbNw, 1, m, &cTabread_pZHsUbNw_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_pZHsUbNw, 1, m, &cTabread_pZHsUbNw_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cVar_Z2M5zPPi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GE3fZ7M8_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSystem_dDkOiEJi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_hTHLo4mD_sendMessage);
}

void Heavy_AmanitaV04::cBinop_l3lqRHmQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rIvxmxgn, HV_BINOP_MIN, 0, m, &cBinop_rIvxmxgn_sendMessage);
}

void Heavy_AmanitaV04::cCast_ThgnUJqz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Z2M5zPPi, 0, m, &cVar_Z2M5zPPi_sendMessage);
}

void Heavy_AmanitaV04::cCast_7PNszUi5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_l3lqRHmQ_sendMessage);
}

void Heavy_AmanitaV04::cBinop_rIvxmxgn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_pZHsUbNw, 0, m, &cTabread_pZHsUbNw_sendMessage);
}

void Heavy_AmanitaV04::cMsg_GE3fZ7M8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_dDkOiEJi_sendMessage);
}

void Heavy_AmanitaV04::cBinop_hTHLo4mD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rIvxmxgn, HV_BINOP_MIN, 1, m, &cBinop_rIvxmxgn_sendMessage);
}

void Heavy_AmanitaV04::cTabread_q8nN7iOM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_iUu4VdzX, 0, m, &cIf_iUu4VdzX_sendMessage);
}

void Heavy_AmanitaV04::cSwitchcase_pUVZbfXI_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_bc9a9r7k, 0, m, &cSlice_bc9a9r7k_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YdA5Lv9V_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lRV64PX1_sendMessage);
      break;
    }
  }
}

void Heavy_AmanitaV04::cSlice_bc9a9r7k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_q8nN7iOM, 1, m, &cTabread_q8nN7iOM_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_q8nN7iOM, 1, m, &cTabread_q8nN7iOM_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cVar_cCtTaSgi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gIwgOW5d_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSystem_w2QKratT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_BRbyA78i_sendMessage);
}

void Heavy_AmanitaV04::cBinop_p8desQO7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ltfi6jmo, HV_BINOP_MIN, 0, m, &cBinop_Ltfi6jmo_sendMessage);
}

void Heavy_AmanitaV04::cCast_lRV64PX1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_p8desQO7_sendMessage);
}

void Heavy_AmanitaV04::cCast_YdA5Lv9V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cCtTaSgi, 0, m, &cVar_cCtTaSgi_sendMessage);
}

void Heavy_AmanitaV04::cBinop_Ltfi6jmo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_q8nN7iOM, 0, m, &cTabread_q8nN7iOM_sendMessage);
}

void Heavy_AmanitaV04::cMsg_gIwgOW5d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_w2QKratT_sendMessage);
}

void Heavy_AmanitaV04::cBinop_BRbyA78i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ltfi6jmo, HV_BINOP_MIN, 1, m, &cBinop_Ltfi6jmo_sendMessage);
}

void Heavy_AmanitaV04::cBinop_DctdEqOs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 12.0f, 0, m, &cBinop_Ko0hVUFK_sendMessage);
}

void Heavy_AmanitaV04::cBinop_Ko0hVUFK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_zJEAGQU3_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_YqOrHSra_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 12.0f, 0, m, &cBinop_Igwt6TJP_sendMessage);
}

void Heavy_AmanitaV04::cBinop_Igwt6TJP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_kpaaT47b_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_IMLhlqRc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_WPBoW71d_sendMessage);
}

void Heavy_AmanitaV04::cSystem_WPBoW71d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_DcEUJF80_sendMessage);
}

void Heavy_AmanitaV04::cDelay_jskFVrfA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_jskFVrfA, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_DOjcDRe4, 0, m, &cDelay_DOjcDRe4_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_jskFVrfA, 0, m, &cDelay_jskFVrfA_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_Czd0K66U, 1, m, NULL);
}

void Heavy_AmanitaV04::cDelay_DOjcDRe4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_DOjcDRe4, m);
  cMsg_Yc3I2WDy_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSwitchcase_uJjacHsS_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_iWFgex7S_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_AmanitaV04::cBinop_fRrqIAJR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bHThdzJ9_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::hTable_VnIanjrn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6Z9yfRJR_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_jskFVrfA, 2, m, &cDelay_jskFVrfA_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_khUeuy9T_sendMessage);
}

void Heavy_AmanitaV04::cMsg_bHThdzJ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_VnIanjrn, 0, m, &hTable_VnIanjrn_sendMessage);
}

void Heavy_AmanitaV04::cBinop_DcEUJF80_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 10000.0f, 0, m, &cBinop_fRrqIAJR_sendMessage);
}

void Heavy_AmanitaV04::cMsg_Yc3I2WDy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_VnIanjrn, 0, m, &hTable_VnIanjrn_sendMessage);
}

void Heavy_AmanitaV04::cCast_khUeuy9T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_jskFVrfA, 0, m, &cDelay_jskFVrfA_sendMessage);
}

void Heavy_AmanitaV04::cMsg_6Z9yfRJR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_DOjcDRe4, 2, m, &cDelay_DOjcDRe4_sendMessage);
}

void Heavy_AmanitaV04::cMsg_iWFgex7S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_Czd0K66U, 1, m, NULL);
}

void Heavy_AmanitaV04::cMsg_w5zCUufb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_PLgAL11K_sendMessage);
}

void Heavy_AmanitaV04::cSystem_PLgAL11K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_1E4pqLhu_sendMessage);
}

void Heavy_AmanitaV04::cDelay_sewWkUfW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_sewWkUfW, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_I8lHtL1g, 0, m, &cDelay_I8lHtL1g_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_sewWkUfW, 0, m, &cDelay_sewWkUfW_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_aHKdomwd, 1, m, NULL);
}

void Heavy_AmanitaV04::cDelay_I8lHtL1g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_I8lHtL1g, m);
  cMsg_SYb3Lsl2_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSwitchcase_MPSR3BWw_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_rTRJHzG0_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_AmanitaV04::cBinop_7jx79W3u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ozu4M17R_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::hTable_TRDDscAd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bYRBOwFE_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_sewWkUfW, 2, m, &cDelay_sewWkUfW_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7lPhlHkk_sendMessage);
}

void Heavy_AmanitaV04::cMsg_ozu4M17R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_TRDDscAd, 0, m, &hTable_TRDDscAd_sendMessage);
}

void Heavy_AmanitaV04::cBinop_1E4pqLhu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 10000.0f, 0, m, &cBinop_7jx79W3u_sendMessage);
}

void Heavy_AmanitaV04::cMsg_SYb3Lsl2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_TRDDscAd, 0, m, &hTable_TRDDscAd_sendMessage);
}

void Heavy_AmanitaV04::cCast_7lPhlHkk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_sewWkUfW, 0, m, &cDelay_sewWkUfW_sendMessage);
}

void Heavy_AmanitaV04::cMsg_bYRBOwFE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_I8lHtL1g, 2, m, &cDelay_I8lHtL1g_sendMessage);
}

void Heavy_AmanitaV04::cMsg_rTRJHzG0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_aHKdomwd, 1, m, NULL);
}

void Heavy_AmanitaV04::cCast_1PUEN4iw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7B9Qqz4b_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eSDwDHOd_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9eG0fD18_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_C5EnhOFK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CTlbFrdu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VcOHSzbn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FIdDtDNz_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fdchS6r0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_u0cT0n0d_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Qr4BOYzZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5fF118GE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Ex2yPQFY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wPXfRw2G_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_h2VOYkdK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lhdA8EXx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ezsdSKZT_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Dw89VSIq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3LDHuaMJ_sendMessage);
}

void Heavy_AmanitaV04::cTabwrite_5cB29lcr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cSwitchcase_JsNlYAc4_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_VOim3x50, 0, m, &cSlice_VOim3x50_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_5cB29lcr, 0, m, &cTabwrite_5cB29lcr_sendMessage);
      break;
    }
  }
}

void Heavy_AmanitaV04::cSlice_VOim3x50_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_5cB29lcr, 2, m, &cTabwrite_5cB29lcr_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_5cB29lcr, 2, m, &cTabwrite_5cB29lcr_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cTabwrite_gDT26Eua_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cSwitchcase_yFXooX3A_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_KfDOVMqB, 0, m, &cSlice_KfDOVMqB_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_gDT26Eua, 0, m, &cTabwrite_gDT26Eua_sendMessage);
      break;
    }
  }
}

void Heavy_AmanitaV04::cSlice_KfDOVMqB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_gDT26Eua, 2, m, &cTabwrite_gDT26Eua_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_gDT26Eua, 2, m, &cTabwrite_gDT26Eua_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cTabwrite_scx9aD9y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cSwitchcase_OgsNsPzs_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_7WfglvSY, 0, m, &cSlice_7WfglvSY_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_scx9aD9y, 0, m, &cTabwrite_scx9aD9y_sendMessage);
      break;
    }
  }
}

void Heavy_AmanitaV04::cSlice_7WfglvSY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_scx9aD9y, 2, m, &cTabwrite_scx9aD9y_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_scx9aD9y, 2, m, &cTabwrite_scx9aD9y_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cTabwrite_M1qbIxWG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cSwitchcase_Ew9wqVXZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_y4r82lbZ, 0, m, &cSlice_y4r82lbZ_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_M1qbIxWG, 0, m, &cTabwrite_M1qbIxWG_sendMessage);
      break;
    }
  }
}

void Heavy_AmanitaV04::cSlice_y4r82lbZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_M1qbIxWG, 2, m, &cTabwrite_M1qbIxWG_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_M1qbIxWG, 2, m, &cTabwrite_M1qbIxWG_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cSwitchcase_sSl7Uvsi_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GRuMZ9ql_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ydrr1zmk_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BkMookDx_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_AmanitaV04::cCast_GRuMZ9ql_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vlCVD7Sx_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_ydrr1zmk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GNAiHCtr_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_BkMookDx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BuQh94Yi_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cIf_I05TBQfM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      sLine_onMessage(_c, &Context(_c)->sLine_UIVXe1oU, 0, m, NULL);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cIf_0bSrha6L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      sLine_onMessage(_c, &Context(_c)->sLine_UIVXe1oU, 0, m, NULL);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cMsg_GgecfQUV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_KNTgTv69, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_ohuuLven_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_3HSGtFMu, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_cIz1D69o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_EsuFj9dL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_LSxFaXUy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_lU4SHAKq, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_C64IiJLZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_fOcjv85L, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_VXV6bU8t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Rtcsa9Q9_sendMessage);
}

void Heavy_AmanitaV04::cSystem_Rtcsa9Q9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YYJXqnNS, HV_BINOP_DIVIDE, 1, m, &cBinop_YYJXqnNS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bC69YT6y_sendMessage);
}

void Heavy_AmanitaV04::cUnop_wNihQOpF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_fuISjYMd_sendMessage);
}

void Heavy_AmanitaV04::cMsg_04RG0GoB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_wNihQOpF_sendMessage);
}

void Heavy_AmanitaV04::cBinop_fuISjYMd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YYJXqnNS, HV_BINOP_DIVIDE, 0, m, &cBinop_YYJXqnNS_sendMessage);
}

void Heavy_AmanitaV04::cCast_bC69YT6y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_04RG0GoB_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_YYJXqnNS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xYgf7G54, HV_BINOP_MULTIPLY, 1, m, &cBinop_xYgf7G54_sendMessage);
}

void Heavy_AmanitaV04::cBinop_xYgf7G54_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6yRip7bm_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4wodJVWY_sendMessage);
}

void Heavy_AmanitaV04::cUnop_whqLMr0Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_BwDdI43X_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cUnop_d1g5S6Jy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_kSdWY0Um_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_1BVlO8YO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_IaiLJzpB_sendMessage);
}

void Heavy_AmanitaV04::cBinop_IaiLJzpB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xYgf7G54, HV_BINOP_MULTIPLY, 0, m, &cBinop_xYgf7G54_sendMessage);
}

void Heavy_AmanitaV04::cBinop_Vo4Qi0gO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_xI2fmj20_sendMessage);
}

void Heavy_AmanitaV04::cBinop_xI2fmj20_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ztBSUxmg_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_wSQ4Z49C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zu4BoTwU, 1, m, &cVar_zu4BoTwU_sendMessage);
}

void Heavy_AmanitaV04::cVar_zu4BoTwU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CluMsFl4_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_kCAOFdnr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lJonMfpY, HV_BINOP_MULTIPLY, 1, m, &cBinop_lJonMfpY_sendMessage);
}

void Heavy_AmanitaV04::cBinop_an32oiyS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_kCAOFdnr_sendMessage);
}

void Heavy_AmanitaV04::cBinop_k6yfvC2X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_1AF0Qnnv_sendMessage);
}

void Heavy_AmanitaV04::cBinop_1AF0Qnnv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_x9Jgxl6u, HV_BINOP_MULTIPLY, 1, m, &cBinop_x9Jgxl6u_sendMessage);
}

void Heavy_AmanitaV04::cBinop_qSUFqVaw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Dr7rvUEP, HV_BINOP_MULTIPLY, 1, m, &cBinop_Dr7rvUEP_sendMessage);
}

void Heavy_AmanitaV04::cBinop_i6WNPa79_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_qSUFqVaw_sendMessage);
}

void Heavy_AmanitaV04::cBinop_ATja3rQT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FXJzQREP, HV_BINOP_MULTIPLY, 1, m, &cBinop_FXJzQREP_sendMessage);
}

void Heavy_AmanitaV04::cMsg_hoY4COZ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_uCBj0eyc_sendMessage);
}

void Heavy_AmanitaV04::cBinop_uCBj0eyc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Q0Ca4IjC, HV_BINOP_MULTIPLY, 1, m, &cBinop_Q0Ca4IjC_sendMessage);
}

void Heavy_AmanitaV04::cVar_8FLcOwHc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lSpquxso_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_1BVlO8YO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4nx4wXes_sendMessage);
}

void Heavy_AmanitaV04::cVar_1m0cA6OO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_Vo4Qi0gO_sendMessage);
}

void Heavy_AmanitaV04::cCast_4wodJVWY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_d1g5S6Jy_sendMessage);
}

void Heavy_AmanitaV04::cCast_6yRip7bm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_whqLMr0Z_sendMessage);
}

void Heavy_AmanitaV04::cSend_BwDdI43X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_uByuc3p8_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_kSdWY0Um_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_8MyG36WH_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_SfVI2LM2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_uCCPc9Z4_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_ztBSUxmg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_SWFT14I9_sendMessage);
}

void Heavy_AmanitaV04::cBinop_SWFT14I9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EUqMx08q, HV_BINOP_MULTIPLY, 1, m, &cBinop_EUqMx08q_sendMessage);
}

void Heavy_AmanitaV04::cBinop_EUqMx08q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_vsHOqTZT_sendMessage);
}

void Heavy_AmanitaV04::cBinop_vsHOqTZT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_SfVI2LM2_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_CluMsFl4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_yTVVuWf0_sendMessage);
}

void Heavy_AmanitaV04::cBinop_yTVVuWf0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7BJQuE2f_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MZAsPgoV_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oNwmiQyC_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KrUNPI6B_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_b2j4bQGt_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_V49MFd3f_sendMessage);
}

void Heavy_AmanitaV04::cBinop_lJonMfpY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GgecfQUV_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_x9Jgxl6u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ohuuLven_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_Dr7rvUEP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cIz1D69o_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_FXJzQREP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LSxFaXUy_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_Q0Ca4IjC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_C64IiJLZ_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_AjZenjTi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8FLcOwHc, 0, m, &cVar_8FLcOwHc_sendMessage);
}

void Heavy_AmanitaV04::cCast_hWJiaJ5U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1m0cA6OO, 1, m, &cVar_1m0cA6OO_sendMessage);
}

void Heavy_AmanitaV04::cCast_b2j4bQGt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_x9Jgxl6u, HV_BINOP_MULTIPLY, 0, m, &cBinop_x9Jgxl6u_sendMessage);
}

void Heavy_AmanitaV04::cCast_oNwmiQyC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FXJzQREP, HV_BINOP_MULTIPLY, 0, m, &cBinop_FXJzQREP_sendMessage);
}

void Heavy_AmanitaV04::cCast_7BJQuE2f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cCast_MZAsPgoV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Q0Ca4IjC, HV_BINOP_MULTIPLY, 0, m, &cBinop_Q0Ca4IjC_sendMessage);
}

void Heavy_AmanitaV04::cCast_V49MFd3f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lJonMfpY, HV_BINOP_MULTIPLY, 0, m, &cBinop_lJonMfpY_sendMessage);
}

void Heavy_AmanitaV04::cCast_KrUNPI6B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Dr7rvUEP, HV_BINOP_MULTIPLY, 0, m, &cBinop_Dr7rvUEP_sendMessage);
}

void Heavy_AmanitaV04::cCast_4nx4wXes_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zu4BoTwU, 0, m, &cVar_zu4BoTwU_sendMessage);
}

void Heavy_AmanitaV04::cCast_lSpquxso_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1m0cA6OO, 0, m, &cVar_1m0cA6OO_sendMessage);
}

void Heavy_AmanitaV04::cMsg_LlcBpjJ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_nEvZ96O4, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_fECmtpmc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_2uXzu9ni, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_9pkiL17b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Dra6gunK, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_tAU1lrqv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_q9UI8WNn, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_Zt8hGFDO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_tawZETvk, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_BCf8vk0G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_zZg90rJI_sendMessage);
}

void Heavy_AmanitaV04::cSystem_zZg90rJI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_epNsBwxB, HV_BINOP_DIVIDE, 1, m, &cBinop_epNsBwxB_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_66Z5N2Tg_sendMessage);
}

void Heavy_AmanitaV04::cUnop_CF8mDiIs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_Mr6c22fY_sendMessage);
}

void Heavy_AmanitaV04::cMsg_B5Fk21BB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_CF8mDiIs_sendMessage);
}

void Heavy_AmanitaV04::cBinop_Mr6c22fY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_epNsBwxB, HV_BINOP_DIVIDE, 0, m, &cBinop_epNsBwxB_sendMessage);
}

void Heavy_AmanitaV04::cCast_66Z5N2Tg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_B5Fk21BB_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_epNsBwxB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HkIocZpb, HV_BINOP_MULTIPLY, 1, m, &cBinop_HkIocZpb_sendMessage);
}

void Heavy_AmanitaV04::cBinop_HkIocZpb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MmqAbyHb_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aPkOEzEm_sendMessage);
}

void Heavy_AmanitaV04::cUnop_B29AGMvA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_8fF3jx2n_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cUnop_HUaAzSwd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_eWmezflN_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_on9hZPpw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_uY8y6X90_sendMessage);
}

void Heavy_AmanitaV04::cBinop_uY8y6X90_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HkIocZpb, HV_BINOP_MULTIPLY, 0, m, &cBinop_HkIocZpb_sendMessage);
}

void Heavy_AmanitaV04::cBinop_StG6jBqB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_EOQox1uK_sendMessage);
}

void Heavy_AmanitaV04::cBinop_EOQox1uK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yO4woTfe_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_BxkbD1R8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EUv5yGaY, 1, m, &cVar_EUv5yGaY_sendMessage);
}

void Heavy_AmanitaV04::cVar_EUv5yGaY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fQFh26yy_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_Ck59vujH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uz7Pl02F, HV_BINOP_MULTIPLY, 1, m, &cBinop_uz7Pl02F_sendMessage);
}

void Heavy_AmanitaV04::cBinop_LhV8WU2X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Ck59vujH_sendMessage);
}

void Heavy_AmanitaV04::cBinop_5eZadB1v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_bTCF7Lvx_sendMessage);
}

void Heavy_AmanitaV04::cBinop_bTCF7Lvx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qVEcSrMb, HV_BINOP_MULTIPLY, 1, m, &cBinop_qVEcSrMb_sendMessage);
}

void Heavy_AmanitaV04::cBinop_wm0OYF2I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Gw33zJfA, HV_BINOP_MULTIPLY, 1, m, &cBinop_Gw33zJfA_sendMessage);
}

void Heavy_AmanitaV04::cBinop_ieTGYjcQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_wm0OYF2I_sendMessage);
}

void Heavy_AmanitaV04::cBinop_cUX36Osa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RJPMLBA1, HV_BINOP_MULTIPLY, 1, m, &cBinop_RJPMLBA1_sendMessage);
}

void Heavy_AmanitaV04::cMsg_p2amB3d6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_44yh8o1R_sendMessage);
}

void Heavy_AmanitaV04::cBinop_44yh8o1R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Fae4cvb3, HV_BINOP_MULTIPLY, 1, m, &cBinop_Fae4cvb3_sendMessage);
}

void Heavy_AmanitaV04::cVar_znTg6Enw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Wl1QwLpi_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_on9hZPpw_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jF23Z4R3_sendMessage);
}

void Heavy_AmanitaV04::cVar_6eAsOgKl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_StG6jBqB_sendMessage);
}

void Heavy_AmanitaV04::cCast_aPkOEzEm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_HUaAzSwd_sendMessage);
}

void Heavy_AmanitaV04::cCast_MmqAbyHb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_B29AGMvA_sendMessage);
}

void Heavy_AmanitaV04::cSend_8fF3jx2n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_2ByaMnjL_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_eWmezflN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_aXyDQBSd_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_PRa9Kx2G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_CFJ4wfDE_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_yO4woTfe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_ADVv0vKX_sendMessage);
}

void Heavy_AmanitaV04::cBinop_ADVv0vKX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RBA9Q73Z, HV_BINOP_MULTIPLY, 1, m, &cBinop_RBA9Q73Z_sendMessage);
}

void Heavy_AmanitaV04::cBinop_RBA9Q73Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ZBhEmQea_sendMessage);
}

void Heavy_AmanitaV04::cBinop_ZBhEmQea_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_PRa9Kx2G_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_fQFh26yy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_hchCw9hT_sendMessage);
}

void Heavy_AmanitaV04::cBinop_hchCw9hT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7eEeqEGT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rTtwX4cn_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_s4KxDR3V_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tLcrOync_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_obWjW1Sh_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ub08Bg3O_sendMessage);
}

void Heavy_AmanitaV04::cBinop_uz7Pl02F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LlcBpjJ3_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_qVEcSrMb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fECmtpmc_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_Gw33zJfA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9pkiL17b_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_RJPMLBA1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tAU1lrqv_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_Fae4cvb3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Zt8hGFDO_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_hsuxwbcJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6eAsOgKl, 1, m, &cVar_6eAsOgKl_sendMessage);
}

void Heavy_AmanitaV04::cCast_veZgtIra_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_znTg6Enw, 0, m, &cVar_znTg6Enw_sendMessage);
}

void Heavy_AmanitaV04::cCast_rTtwX4cn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Fae4cvb3, HV_BINOP_MULTIPLY, 0, m, &cBinop_Fae4cvb3_sendMessage);
}

void Heavy_AmanitaV04::cCast_s4KxDR3V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RJPMLBA1, HV_BINOP_MULTIPLY, 0, m, &cBinop_RJPMLBA1_sendMessage);
}

void Heavy_AmanitaV04::cCast_7eEeqEGT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cCast_tLcrOync_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Gw33zJfA, HV_BINOP_MULTIPLY, 0, m, &cBinop_Gw33zJfA_sendMessage);
}

void Heavy_AmanitaV04::cCast_ub08Bg3O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uz7Pl02F, HV_BINOP_MULTIPLY, 0, m, &cBinop_uz7Pl02F_sendMessage);
}

void Heavy_AmanitaV04::cCast_obWjW1Sh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qVEcSrMb, HV_BINOP_MULTIPLY, 0, m, &cBinop_qVEcSrMb_sendMessage);
}

void Heavy_AmanitaV04::cCast_Wl1QwLpi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6eAsOgKl, 0, m, &cVar_6eAsOgKl_sendMessage);
}

void Heavy_AmanitaV04::cCast_jF23Z4R3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EUv5yGaY, 0, m, &cVar_EUv5yGaY_sendMessage);
}

void Heavy_AmanitaV04::cSwitchcase_qTY6vJJK_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xFFFFFFFF: { // "bang"
      cSlice_onMessage(_c, &Context(_c)->cSlice_UHT958g2, 0, m, &cSlice_UHT958g2_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_cyAbv3Lo, 0, m, &cSlice_cyAbv3Lo_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YoKZ3lxx_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vydNbD1Y_sendMessage);
      break;
    }
  }
}

void Heavy_AmanitaV04::cSlice_UHT958g2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cVar_onMessage(_c, &Context(_c)->cVar_frE8JqhT, 0, m, &cVar_frE8JqhT_sendMessage);
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_frE8JqhT, 0, m, &cVar_frE8JqhT_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cSlice_cyAbv3Lo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_oAYfyniT, HV_BINOP_NEQ, 1, m, &cBinop_oAYfyniT_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_frE8JqhT, 1, m, &cVar_frE8JqhT_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_oAYfyniT, HV_BINOP_NEQ, 1, m, &cBinop_oAYfyniT_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_frE8JqhT, 1, m, &cVar_frE8JqhT_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cVar_frE8JqhT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CwYzrGbm, 0, m, &cVar_CwYzrGbm_sendMessage);
}

void Heavy_AmanitaV04::cIf_8V0X1qHw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7PUrP7PN_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TNZLMqHQ_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cCast_TNZLMqHQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_frE8JqhT, 0, m, &cVar_frE8JqhT_sendMessage);
}

void Heavy_AmanitaV04::cCast_7PUrP7PN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oAYfyniT, HV_BINOP_NEQ, 1, m, &cBinop_oAYfyniT_sendMessage);
}

void Heavy_AmanitaV04::cBinop_oAYfyniT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_8V0X1qHw, 1, m, &cIf_8V0X1qHw_sendMessage);
}

void Heavy_AmanitaV04::cCast_YoKZ3lxx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oAYfyniT, HV_BINOP_NEQ, 0, m, &cBinop_oAYfyniT_sendMessage);
}

void Heavy_AmanitaV04::cCast_vydNbD1Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_8V0X1qHw, 0, m, &cIf_8V0X1qHw_sendMessage);
}

void Heavy_AmanitaV04::cVar_G25VLtUu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_nskaR7zB_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_lbNz2ME0, 0, m, &cIf_lbNz2ME0_sendMessage);
}

void Heavy_AmanitaV04::cUnop_ZjzRmtZT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qDL7LuMk_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dVWDBq5q_sendMessage);
}

void Heavy_AmanitaV04::cUnop_bt43KOBM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qDL7LuMk_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dVWDBq5q_sendMessage);
}

void Heavy_AmanitaV04::cIf_lbNz2ME0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_bt43KOBM_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_ZjzRmtZT_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cBinop_nskaR7zB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_lbNz2ME0, 1, m, &cIf_lbNz2ME0_sendMessage);
}

void Heavy_AmanitaV04::cIf_O8Dzt5nd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      sLine_onMessage(_c, &Context(_c)->sLine_Xa6SpYWp, 0, m, NULL);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cIf_qNw2WoiH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      sLine_onMessage(_c, &Context(_c)->sLine_Xa6SpYWp, 0, m, NULL);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cSwitchcase_QK7nc9zE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xFFFFFFFF: { // "bang"
      cSlice_onMessage(_c, &Context(_c)->cSlice_IoMpTFAo, 0, m, &cSlice_IoMpTFAo_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_0yLO7Oez, 0, m, &cSlice_0yLO7Oez_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_BTytFCqE_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Y1mtiosL_sendMessage);
      break;
    }
  }
}

void Heavy_AmanitaV04::cSlice_IoMpTFAo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cVar_onMessage(_c, &Context(_c)->cVar_RH3KtVc1, 0, m, &cVar_RH3KtVc1_sendMessage);
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_RH3KtVc1, 0, m, &cVar_RH3KtVc1_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cSlice_0yLO7Oez_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_CCcV7gxD, HV_BINOP_NEQ, 1, m, &cBinop_CCcV7gxD_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_RH3KtVc1, 1, m, &cVar_RH3KtVc1_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_CCcV7gxD, HV_BINOP_NEQ, 1, m, &cBinop_CCcV7gxD_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_RH3KtVc1, 1, m, &cVar_RH3KtVc1_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cVar_RH3KtVc1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Qs3LJDyT, 0, m, &cVar_Qs3LJDyT_sendMessage);
}

void Heavy_AmanitaV04::cIf_8Et72aRv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kQoNToAC_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6BpiplKc_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cCast_kQoNToAC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CCcV7gxD, HV_BINOP_NEQ, 1, m, &cBinop_CCcV7gxD_sendMessage);
}

void Heavy_AmanitaV04::cCast_6BpiplKc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RH3KtVc1, 0, m, &cVar_RH3KtVc1_sendMessage);
}

void Heavy_AmanitaV04::cBinop_CCcV7gxD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_8Et72aRv, 1, m, &cIf_8Et72aRv_sendMessage);
}

void Heavy_AmanitaV04::cCast_BTytFCqE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CCcV7gxD, HV_BINOP_NEQ, 0, m, &cBinop_CCcV7gxD_sendMessage);
}

void Heavy_AmanitaV04::cCast_Y1mtiosL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_8Et72aRv, 0, m, &cIf_8Et72aRv_sendMessage);
}

void Heavy_AmanitaV04::cVar_fxTtGChg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_roSpjVlE_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cVar_SlQCg45E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1YtriCyk_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cVar_Qs3LJDyT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SOXmQMcm_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSwitchcase_qGoiAmJT_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WxSzOgA1_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fu4RcAWf_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_AmanitaV04::cCast_WxSzOgA1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SlQCg45E, 0, m, &cVar_SlQCg45E_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Qs3LJDyT, 0, m, &cVar_Qs3LJDyT_sendMessage);
}

void Heavy_AmanitaV04::cCast_fu4RcAWf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fxTtGChg, 0, m, &cVar_fxTtGChg_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_CwYzrGbm, 0, m, &cVar_CwYzrGbm_sendMessage);
}

void Heavy_AmanitaV04::cVar_CwYzrGbm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oo1g548l_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_7Cl242UO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_WdnigiBB_sendMessage);
}

void Heavy_AmanitaV04::cSystem_WdnigiBB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_p2oPsfO4_sendMessage);
}

void Heavy_AmanitaV04::cVar_wYOKmnVy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qmCsSbtV_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSystem_svYHPrnT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Q5MRuIiV_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_2v1zuXlZ, m);
}

void Heavy_AmanitaV04::cBinop_p2oPsfO4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_OnqtGO50, m);
}

void Heavy_AmanitaV04::cMsg_qmCsSbtV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_svYHPrnT_sendMessage);
}

void Heavy_AmanitaV04::cBinop_Q5MRuIiV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_YRrphA6i, m);
}

void Heavy_AmanitaV04::cMsg_H6xhR2yZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_1EKJlOh7_sendMessage);
}

void Heavy_AmanitaV04::cSystem_1EKJlOh7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_uWuzAvZj_sendMessage);
}

void Heavy_AmanitaV04::cVar_MOPAtY5Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JVA3STGv_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSystem_O58fSDiD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_p0N6mf4P_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_PZtrrbNA, m);
}

void Heavy_AmanitaV04::cBinop_uWuzAvZj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Tmv896k0, m);
}

void Heavy_AmanitaV04::cMsg_JVA3STGv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_O58fSDiD_sendMessage);
}

void Heavy_AmanitaV04::cBinop_p0N6mf4P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_UBpYi6Xt, m);
}

void Heavy_AmanitaV04::cIf_ajhiOgom_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_r3x4UfRC_sendMessage);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 0.75f, 0, m, &cBinop_87YWMyHX_sendMessage);
      cSend_jKrVgBs9_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::sEnv_2WpaXiVp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WxFbEtwG_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cIf_EW5CBHNs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_r3x4UfRC_sendMessage);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 0.75f, 0, m, &cBinop_87YWMyHX_sendMessage);
      cSend_jKrVgBs9_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cIf_XDDwdEjq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_K4LmWkmk, 0, m, &cVar_K4LmWkmk_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cIf_lzCHOocS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_K4LmWkmk, 0, m, &cVar_K4LmWkmk_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_AmanitaV04::cVar_sZdEr1MD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_K4LmWkmk, 0, m, &cVar_K4LmWkmk_sendMessage);
  cSend_U2PxPcjC_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSwitchcase_gVcwoHbO_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XZlYdTwG_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1tXw9TGj_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_AmanitaV04::cCast_XZlYdTwG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_geiY9OiX_sendMessage(_c, 0, m);
  cMsg_BCvG6GBi_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_1tXw9TGj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fr9TntNi_sendMessage(_c, 0, m);
  cMsg_ZPhjgsrQ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_sZdEr1MD, 0, m, &cVar_sZdEr1MD_sendMessage);
}

void Heavy_AmanitaV04::cBinop_RxAegQuq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_A4xOqeyP_sendMessage);
}

void Heavy_AmanitaV04::cBinop_A4xOqeyP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 4.0f, 0, m, &cBinop_reJsIyYR_sendMessage);
}

void Heavy_AmanitaV04::cBinop_tH3cNl7E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_bxSzoNxJ_sendMessage);
}

void Heavy_AmanitaV04::cBinop_bxSzoNxJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_JFJC2gNF_sendMessage);
}

void Heavy_AmanitaV04::cVar_9TBjr5pj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_ajhiOgom, 0, m, &cIf_ajhiOgom_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_i6d124JX_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 0.75f, 0, m, &cBinop_NDvumbGq_sendMessage);
  cSend_EDRMdkbe_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cVar_I4fFIIPZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_EW5CBHNs, 0, m, &cIf_EW5CBHNs_sendMessage);
}

void Heavy_AmanitaV04::cVar_JPJ80njZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_b3ZT3eWy_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_T4CkwVCV_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cVar_ECwvug8i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_pUVZbfXI_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_4OkfwLBD_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::sSample_C5C5GMyE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_BmiuVDAS_sendMessage);
}

void Heavy_AmanitaV04::cBinop_BmiuVDAS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 2.0f, 0, m, &cBinop_dnGFebIN_sendMessage);
}

void Heavy_AmanitaV04::cBinop_dnGFebIN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_Ad1RPCfG_sendMessage);
}

void Heavy_AmanitaV04::sSample_pJjCzAVx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_uGAfzFcj_sendMessage);
}

void Heavy_AmanitaV04::cBinop_uGAfzFcj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 2.0f, 0, m, &cBinop_6qgBzG0G_sendMessage);
}

void Heavy_AmanitaV04::cBinop_6qgBzG0G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_pIpHpG6O_sendMessage);
}

void Heavy_AmanitaV04::cMsg_ow1BFxJo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_x0fCsQUp, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_Y33olXRh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_atojWmEO, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_CxKmDAq6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Ilj4kQh6, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_ObA9XHLe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_fVnSiKLX, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_XtNQh0nC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_cWqwgQjz, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_X53ZzgLO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_AtwWzUfK_sendMessage);
}

void Heavy_AmanitaV04::cSystem_AtwWzUfK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_t8ZV1vb4, HV_BINOP_DIVIDE, 1, m, &cBinop_t8ZV1vb4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Tm5pvclY_sendMessage);
}

void Heavy_AmanitaV04::cUnop_VDLfr5wB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_bmpacW30_sendMessage);
}

void Heavy_AmanitaV04::cMsg_qh31Gc7c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_VDLfr5wB_sendMessage);
}

void Heavy_AmanitaV04::cBinop_bmpacW30_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_t8ZV1vb4, HV_BINOP_DIVIDE, 0, m, &cBinop_t8ZV1vb4_sendMessage);
}

void Heavy_AmanitaV04::cCast_Tm5pvclY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qh31Gc7c_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_t8ZV1vb4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uQ4mYBtg, HV_BINOP_MULTIPLY, 1, m, &cBinop_uQ4mYBtg_sendMessage);
}

void Heavy_AmanitaV04::cBinop_uQ4mYBtg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2sKJGu4U_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EfKBcQ4S_sendMessage);
}

void Heavy_AmanitaV04::cUnop_9Zsh7a2F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_GkxUeDYl_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cUnop_05yO2Zgy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Z6EE1pf3_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_xZElYxdn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_uiXlt2FO_sendMessage);
}

void Heavy_AmanitaV04::cBinop_uiXlt2FO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uQ4mYBtg, HV_BINOP_MULTIPLY, 0, m, &cBinop_uQ4mYBtg_sendMessage);
}

void Heavy_AmanitaV04::cBinop_uyOgcMik_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_ZFUt1qzK_sendMessage);
}

void Heavy_AmanitaV04::cBinop_ZFUt1qzK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wK3PxYE0_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_qw2CmH9v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DsMxSwg5, HV_BINOP_MULTIPLY, 1, m, &cBinop_DsMxSwg5_sendMessage);
}

void Heavy_AmanitaV04::cMsg_J2h7SqZp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_KA68Ytge_sendMessage);
}

void Heavy_AmanitaV04::cBinop_KA68Ytge_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_qw2CmH9v_sendMessage);
}

void Heavy_AmanitaV04::cMsg_PyutpwFt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_5eABfygR_sendMessage);
}

void Heavy_AmanitaV04::cBinop_5eABfygR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EyZf7Iiz, HV_BINOP_MULTIPLY, 1, m, &cBinop_EyZf7Iiz_sendMessage);
}

void Heavy_AmanitaV04::cBinop_ci33EqXt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xd1LEZY9, HV_BINOP_MULTIPLY, 1, m, &cBinop_Xd1LEZY9_sendMessage);
}

void Heavy_AmanitaV04::cMsg_EQF3flMe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Y8UfErPi_sendMessage);
}

void Heavy_AmanitaV04::cBinop_Y8UfErPi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ci33EqXt_sendMessage);
}

void Heavy_AmanitaV04::cBinop_u86eUTtx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HiArJ0I2, 1, m, &cVar_HiArJ0I2_sendMessage);
}

void Heavy_AmanitaV04::cBinop_EyBtekzN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FT7qRXia, HV_BINOP_MULTIPLY, 1, m, &cBinop_FT7qRXia_sendMessage);
}

void Heavy_AmanitaV04::cMsg_mob5u3Av_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_M0tdEfNl_sendMessage);
}

void Heavy_AmanitaV04::cBinop_M0tdEfNl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FMCgzgQh, HV_BINOP_MULTIPLY, 1, m, &cBinop_FMCgzgQh_sendMessage);
}

void Heavy_AmanitaV04::cVar_HiArJ0I2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9L0a7YuQ_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cVar_4O4cjttC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zcWULuDO_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_xZElYxdn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FgGREn2t_sendMessage);
}

void Heavy_AmanitaV04::cVar_YKdmSUyo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_uyOgcMik_sendMessage);
}

void Heavy_AmanitaV04::cCast_EfKBcQ4S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_05yO2Zgy_sendMessage);
}

void Heavy_AmanitaV04::cCast_2sKJGu4U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_9Zsh7a2F_sendMessage);
}

void Heavy_AmanitaV04::cSend_GkxUeDYl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Vni57wCE_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_Z6EE1pf3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_hgfti8zT_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_C29WZhZc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_KwdXNIiN_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_wK3PxYE0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_gHrcOdkI_sendMessage);
}

void Heavy_AmanitaV04::cBinop_gHrcOdkI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JgHQjmoq, HV_BINOP_MULTIPLY, 1, m, &cBinop_JgHQjmoq_sendMessage);
}

void Heavy_AmanitaV04::cBinop_JgHQjmoq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_lcaTSVWp_sendMessage);
}

void Heavy_AmanitaV04::cBinop_lcaTSVWp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_C29WZhZc_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_9L0a7YuQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_K26z6HdV_sendMessage);
}

void Heavy_AmanitaV04::cBinop_K26z6HdV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_i0YmrXQh_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XmuX9og1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bbnWrO7z_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_osXY4W8O_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5lfMpeDk_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_baJP8e35_sendMessage);
}

void Heavy_AmanitaV04::cBinop_DsMxSwg5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ow1BFxJo_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_EyZf7Iiz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Y33olXRh_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_Xd1LEZY9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CxKmDAq6_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_FT7qRXia_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ObA9XHLe_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_FMCgzgQh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XtNQh0nC_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_qb6gEP2g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YKdmSUyo, 1, m, &cVar_YKdmSUyo_sendMessage);
}

void Heavy_AmanitaV04::cCast_K7BI458q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4O4cjttC, 0, m, &cVar_4O4cjttC_sendMessage);
}

void Heavy_AmanitaV04::cCast_5lfMpeDk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EyZf7Iiz, HV_BINOP_MULTIPLY, 0, m, &cBinop_EyZf7Iiz_sendMessage);
}

void Heavy_AmanitaV04::cCast_i0YmrXQh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cCast_osXY4W8O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xd1LEZY9, HV_BINOP_MULTIPLY, 0, m, &cBinop_Xd1LEZY9_sendMessage);
}

void Heavy_AmanitaV04::cCast_bbnWrO7z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FT7qRXia, HV_BINOP_MULTIPLY, 0, m, &cBinop_FT7qRXia_sendMessage);
}

void Heavy_AmanitaV04::cCast_XmuX9og1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FMCgzgQh, HV_BINOP_MULTIPLY, 0, m, &cBinop_FMCgzgQh_sendMessage);
}

void Heavy_AmanitaV04::cCast_baJP8e35_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DsMxSwg5, HV_BINOP_MULTIPLY, 0, m, &cBinop_DsMxSwg5_sendMessage);
}

void Heavy_AmanitaV04::cCast_FgGREn2t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HiArJ0I2, 0, m, &cVar_HiArJ0I2_sendMessage);
}

void Heavy_AmanitaV04::cCast_zcWULuDO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YKdmSUyo, 0, m, &cVar_YKdmSUyo_sendMessage);
}

void Heavy_AmanitaV04::cMsg_kXXm2bZ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_hpn0gkGI, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_lllKuf7r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_XxWIh19O, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_38LxEm7R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ktLdH00s, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_I9gQt8ZL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_eizTBENW, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_xn35ptFh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_0WlYyFat, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_STJFVjSO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_SDp5iZfX_sendMessage);
}

void Heavy_AmanitaV04::cSystem_SDp5iZfX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_P8Er9aKc, HV_BINOP_DIVIDE, 1, m, &cBinop_P8Er9aKc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GIxm4wJC_sendMessage);
}

void Heavy_AmanitaV04::cUnop_nilNTPKO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_DUOuE2JK_sendMessage);
}

void Heavy_AmanitaV04::cMsg_g7jhrB04_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_nilNTPKO_sendMessage);
}

void Heavy_AmanitaV04::cBinop_DUOuE2JK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_P8Er9aKc, HV_BINOP_DIVIDE, 0, m, &cBinop_P8Er9aKc_sendMessage);
}

void Heavy_AmanitaV04::cCast_GIxm4wJC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_g7jhrB04_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_P8Er9aKc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QQkzhHbC, HV_BINOP_MULTIPLY, 1, m, &cBinop_QQkzhHbC_sendMessage);
}

void Heavy_AmanitaV04::cBinop_QQkzhHbC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_C0pYAaAs_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OKO1lWY0_sendMessage);
}

void Heavy_AmanitaV04::cUnop_tRdwxjeA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_xUF722fW_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cUnop_epY003oF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_t56z7drN_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_JkccRczR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_2yxHztov_sendMessage);
}

void Heavy_AmanitaV04::cBinop_2yxHztov_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QQkzhHbC, HV_BINOP_MULTIPLY, 0, m, &cBinop_QQkzhHbC_sendMessage);
}

void Heavy_AmanitaV04::cBinop_mrEDVT03_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_aGixdreS_sendMessage);
}

void Heavy_AmanitaV04::cBinop_aGixdreS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Ly7uKfnh_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_Vwej3tD9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wvTFIvcu, HV_BINOP_MULTIPLY, 1, m, &cBinop_wvTFIvcu_sendMessage);
}

void Heavy_AmanitaV04::cMsg_BSXE8r2X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ItOBcgvq_sendMessage);
}

void Heavy_AmanitaV04::cBinop_ItOBcgvq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Vwej3tD9_sendMessage);
}

void Heavy_AmanitaV04::cMsg_ijFlZU9N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_77JFlTKl_sendMessage);
}

void Heavy_AmanitaV04::cBinop_77JFlTKl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8NmYuZWq, HV_BINOP_MULTIPLY, 1, m, &cBinop_8NmYuZWq_sendMessage);
}

void Heavy_AmanitaV04::cBinop_LIRDBOr8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BaE3mves, HV_BINOP_MULTIPLY, 1, m, &cBinop_BaE3mves_sendMessage);
}

void Heavy_AmanitaV04::cMsg_MJN0lC7M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_hDZ0NSco_sendMessage);
}

void Heavy_AmanitaV04::cBinop_hDZ0NSco_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_LIRDBOr8_sendMessage);
}

void Heavy_AmanitaV04::cBinop_q8nh0GzY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Rx46FT27, 1, m, &cVar_Rx46FT27_sendMessage);
}

void Heavy_AmanitaV04::cBinop_gN15r3jr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4I0x8hza, HV_BINOP_MULTIPLY, 1, m, &cBinop_4I0x8hza_sendMessage);
}

void Heavy_AmanitaV04::cMsg_7o1TfFZx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_TeuoPtWa_sendMessage);
}

void Heavy_AmanitaV04::cBinop_TeuoPtWa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_U3iCpv1g, HV_BINOP_MULTIPLY, 1, m, &cBinop_U3iCpv1g_sendMessage);
}

void Heavy_AmanitaV04::cVar_Rx46FT27_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fxufDEpz_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cVar_islKyctZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9vRIYSVZ_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_JkccRczR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8xNxuQCy_sendMessage);
}

void Heavy_AmanitaV04::cVar_V4PEX98x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_mrEDVT03_sendMessage);
}

void Heavy_AmanitaV04::cCast_OKO1lWY0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_epY003oF_sendMessage);
}

void Heavy_AmanitaV04::cCast_C0pYAaAs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_tRdwxjeA_sendMessage);
}

void Heavy_AmanitaV04::cSend_xUF722fW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_wmvruDgz_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_t56z7drN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_a81uPReF_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_fDo9Oci8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Mp5S9jEz_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_Ly7uKfnh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_DeGqrUYZ_sendMessage);
}

void Heavy_AmanitaV04::cBinop_DeGqrUYZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PhFsYOUv, HV_BINOP_MULTIPLY, 1, m, &cBinop_PhFsYOUv_sendMessage);
}

void Heavy_AmanitaV04::cBinop_PhFsYOUv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_uLGCZMTE_sendMessage);
}

void Heavy_AmanitaV04::cBinop_uLGCZMTE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_fDo9Oci8_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_fxufDEpz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_sdTRzmEr_sendMessage);
}

void Heavy_AmanitaV04::cBinop_sdTRzmEr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_R82K2ry5_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_pHGmCWnD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kNXUNnoY_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EpjgtjNf_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6tktCIis_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xNgoKKti_sendMessage);
}

void Heavy_AmanitaV04::cBinop_wvTFIvcu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kXXm2bZ9_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_8NmYuZWq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lllKuf7r_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_BaE3mves_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_38LxEm7R_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_4I0x8hza_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_I9gQt8ZL_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_U3iCpv1g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xn35ptFh_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_UNocm8So_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_islKyctZ, 0, m, &cVar_islKyctZ_sendMessage);
}

void Heavy_AmanitaV04::cCast_mxris0gp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_V4PEX98x, 1, m, &cVar_V4PEX98x_sendMessage);
}

void Heavy_AmanitaV04::cCast_pHGmCWnD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_U3iCpv1g, HV_BINOP_MULTIPLY, 0, m, &cBinop_U3iCpv1g_sendMessage);
}

void Heavy_AmanitaV04::cCast_kNXUNnoY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4I0x8hza, HV_BINOP_MULTIPLY, 0, m, &cBinop_4I0x8hza_sendMessage);
}

void Heavy_AmanitaV04::cCast_EpjgtjNf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BaE3mves, HV_BINOP_MULTIPLY, 0, m, &cBinop_BaE3mves_sendMessage);
}

void Heavy_AmanitaV04::cCast_6tktCIis_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8NmYuZWq, HV_BINOP_MULTIPLY, 0, m, &cBinop_8NmYuZWq_sendMessage);
}

void Heavy_AmanitaV04::cCast_R82K2ry5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cCast_xNgoKKti_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wvTFIvcu, HV_BINOP_MULTIPLY, 0, m, &cBinop_wvTFIvcu_sendMessage);
}

void Heavy_AmanitaV04::cCast_9vRIYSVZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_V4PEX98x, 0, m, &cVar_V4PEX98x_sendMessage);
}

void Heavy_AmanitaV04::cCast_8xNxuQCy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Rx46FT27, 0, m, &cVar_Rx46FT27_sendMessage);
}

void Heavy_AmanitaV04::cMsg_3s5eZwyN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_tIRhsB7g, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_GXEflkNh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_res0tOOd, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_KPRVRpKI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_I3FNyOlU, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_DRP8GPdH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_fkUC3JDx, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_4urV25gG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_zMgtDtoQ, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_t5UbgSDz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_nIPIjOYp_sendMessage);
}

void Heavy_AmanitaV04::cSystem_nIPIjOYp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LK9st2Cc, HV_BINOP_DIVIDE, 1, m, &cBinop_LK9st2Cc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oPgAPcoV_sendMessage);
}

void Heavy_AmanitaV04::cUnop_9KgQfPz3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_FutYq35p_sendMessage);
}

void Heavy_AmanitaV04::cMsg_1rpy89Er_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_9KgQfPz3_sendMessage);
}

void Heavy_AmanitaV04::cBinop_FutYq35p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LK9st2Cc, HV_BINOP_DIVIDE, 0, m, &cBinop_LK9st2Cc_sendMessage);
}

void Heavy_AmanitaV04::cCast_oPgAPcoV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1rpy89Er_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_LK9st2Cc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IweZNENC, HV_BINOP_MULTIPLY, 1, m, &cBinop_IweZNENC_sendMessage);
}

void Heavy_AmanitaV04::cBinop_IweZNENC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JyvbLThx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mHpqj29j_sendMessage);
}

void Heavy_AmanitaV04::cUnop_piGTy6XP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_ULEj4Qfa_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cUnop_6MJg3t5x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_SO0QtOPM_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_yH6XORaF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_6WYQ6lsi_sendMessage);
}

void Heavy_AmanitaV04::cBinop_6WYQ6lsi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IweZNENC, HV_BINOP_MULTIPLY, 0, m, &cBinop_IweZNENC_sendMessage);
}

void Heavy_AmanitaV04::cBinop_VIm6kZvM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_UlM9yqlF_sendMessage);
}

void Heavy_AmanitaV04::cBinop_UlM9yqlF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RCXiFNZ4_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_ev2sA3gc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nV8r7AaW, HV_BINOP_MULTIPLY, 1, m, &cBinop_nV8r7AaW_sendMessage);
}

void Heavy_AmanitaV04::cMsg_HkC4IPlf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_UMvNNnZT_sendMessage);
}

void Heavy_AmanitaV04::cBinop_UMvNNnZT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ev2sA3gc_sendMessage);
}

void Heavy_AmanitaV04::cMsg_LsrtJiqH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_fsrOJRRY_sendMessage);
}

void Heavy_AmanitaV04::cBinop_fsrOJRRY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4SNY81iA, HV_BINOP_MULTIPLY, 1, m, &cBinop_4SNY81iA_sendMessage);
}

void Heavy_AmanitaV04::cBinop_f6Xob7ZI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jWWcy728, HV_BINOP_MULTIPLY, 1, m, &cBinop_jWWcy728_sendMessage);
}

void Heavy_AmanitaV04::cMsg_e1UB1GtM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_C3qVBemQ_sendMessage);
}

void Heavy_AmanitaV04::cBinop_C3qVBemQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_f6Xob7ZI_sendMessage);
}

void Heavy_AmanitaV04::cBinop_LR4eeZNE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vqTNwnzs, 1, m, &cVar_vqTNwnzs_sendMessage);
}

void Heavy_AmanitaV04::cBinop_ENUBvMEB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_i0RJnBfo, HV_BINOP_MULTIPLY, 1, m, &cBinop_i0RJnBfo_sendMessage);
}

void Heavy_AmanitaV04::cMsg_WrkrwpoS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_KxGB43YR_sendMessage);
}

void Heavy_AmanitaV04::cBinop_KxGB43YR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_a61Y0kfG, HV_BINOP_MULTIPLY, 1, m, &cBinop_a61Y0kfG_sendMessage);
}

void Heavy_AmanitaV04::cVar_vqTNwnzs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RDcJoBPz_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cVar_CsqxiRF0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hQrcV8t9_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_yH6XORaF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KRTUyxsP_sendMessage);
}

void Heavy_AmanitaV04::cVar_9GPeSLyn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_VIm6kZvM_sendMessage);
}

void Heavy_AmanitaV04::cCast_JyvbLThx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_piGTy6XP_sendMessage);
}

void Heavy_AmanitaV04::cCast_mHpqj29j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_6MJg3t5x_sendMessage);
}

void Heavy_AmanitaV04::cSend_ULEj4Qfa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_b7NGKn4R_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_SO0QtOPM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_OnzssKff_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_ngauwG63_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1JyV5QcG_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_RCXiFNZ4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_YuUFCdzR_sendMessage);
}

void Heavy_AmanitaV04::cBinop_YuUFCdzR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GhuCZTQ2, HV_BINOP_MULTIPLY, 1, m, &cBinop_GhuCZTQ2_sendMessage);
}

void Heavy_AmanitaV04::cBinop_GhuCZTQ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_PhLpfdvz_sendMessage);
}

void Heavy_AmanitaV04::cBinop_PhLpfdvz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_ngauwG63_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_RDcJoBPz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Hr38D1Sv_sendMessage);
}

void Heavy_AmanitaV04::cBinop_Hr38D1Sv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rq6x1tnR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Fsu7nu0Q_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_eaLMng38_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MZOKh6YO_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zPizJnqF_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lGFwgWN5_sendMessage);
}

void Heavy_AmanitaV04::cBinop_nV8r7AaW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3s5eZwyN_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_4SNY81iA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GXEflkNh_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_jWWcy728_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KPRVRpKI_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_i0RJnBfo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DRP8GPdH_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_a61Y0kfG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4urV25gG_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_phTDrx1i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9GPeSLyn, 1, m, &cVar_9GPeSLyn_sendMessage);
}

void Heavy_AmanitaV04::cCast_eVG5jxP6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CsqxiRF0, 0, m, &cVar_CsqxiRF0_sendMessage);
}

void Heavy_AmanitaV04::cCast_zPizJnqF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4SNY81iA, HV_BINOP_MULTIPLY, 0, m, &cBinop_4SNY81iA_sendMessage);
}

void Heavy_AmanitaV04::cCast_MZOKh6YO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jWWcy728, HV_BINOP_MULTIPLY, 0, m, &cBinop_jWWcy728_sendMessage);
}

void Heavy_AmanitaV04::cCast_rq6x1tnR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cCast_lGFwgWN5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nV8r7AaW, HV_BINOP_MULTIPLY, 0, m, &cBinop_nV8r7AaW_sendMessage);
}

void Heavy_AmanitaV04::cCast_eaLMng38_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_i0RJnBfo, HV_BINOP_MULTIPLY, 0, m, &cBinop_i0RJnBfo_sendMessage);
}

void Heavy_AmanitaV04::cCast_Fsu7nu0Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_a61Y0kfG, HV_BINOP_MULTIPLY, 0, m, &cBinop_a61Y0kfG_sendMessage);
}

void Heavy_AmanitaV04::cCast_KRTUyxsP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vqTNwnzs, 0, m, &cVar_vqTNwnzs_sendMessage);
}

void Heavy_AmanitaV04::cCast_hQrcV8t9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9GPeSLyn, 0, m, &cVar_9GPeSLyn_sendMessage);
}

void Heavy_AmanitaV04::cMsg_SkP505k5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_JTCWjQpu, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_bqR0emCV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_8VgwPw5L, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_vSqKuMUX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_se2nl7RS, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_xL9IpO8s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_4RkCnlBA, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_8jFrrBgp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Zurr6Tlx, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_xghKfmge_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_OlamsgBQ_sendMessage);
}

void Heavy_AmanitaV04::cSystem_OlamsgBQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DQJM7MvI, HV_BINOP_DIVIDE, 1, m, &cBinop_DQJM7MvI_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gA46Eo6R_sendMessage);
}

void Heavy_AmanitaV04::cUnop_ltlJ3jk6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_2l0KVqfW_sendMessage);
}

void Heavy_AmanitaV04::cMsg_vVOGsa9x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_ltlJ3jk6_sendMessage);
}

void Heavy_AmanitaV04::cBinop_2l0KVqfW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DQJM7MvI, HV_BINOP_DIVIDE, 0, m, &cBinop_DQJM7MvI_sendMessage);
}

void Heavy_AmanitaV04::cCast_gA46Eo6R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vVOGsa9x_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_DQJM7MvI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_orYEkG0K, HV_BINOP_MULTIPLY, 1, m, &cBinop_orYEkG0K_sendMessage);
}

void Heavy_AmanitaV04::cBinop_orYEkG0K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GBIbAdBu_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0YXhxv0j_sendMessage);
}

void Heavy_AmanitaV04::cUnop_XGQdVbwx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_plSHPoY8_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cUnop_VqQyxJVw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_dbDk1RVh_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_drJlP3zs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_aIRKCFyC_sendMessage);
}

void Heavy_AmanitaV04::cBinop_aIRKCFyC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_orYEkG0K, HV_BINOP_MULTIPLY, 0, m, &cBinop_orYEkG0K_sendMessage);
}

void Heavy_AmanitaV04::cBinop_Km4gT89g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_XAUYvAoX_sendMessage);
}

void Heavy_AmanitaV04::cBinop_XAUYvAoX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_si0cEIJ9_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_NX6b8LeG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IAxzOS6C, HV_BINOP_MULTIPLY, 1, m, &cBinop_IAxzOS6C_sendMessage);
}

void Heavy_AmanitaV04::cMsg_4FWkamBG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_F8bN4His_sendMessage);
}

void Heavy_AmanitaV04::cBinop_F8bN4His_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_NX6b8LeG_sendMessage);
}

void Heavy_AmanitaV04::cMsg_WFRskxFn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_RlQYYH3i_sendMessage);
}

void Heavy_AmanitaV04::cBinop_RlQYYH3i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RSbSUWpI, HV_BINOP_MULTIPLY, 1, m, &cBinop_RSbSUWpI_sendMessage);
}

void Heavy_AmanitaV04::cBinop_pseBEJBH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RLwV55f5, HV_BINOP_MULTIPLY, 1, m, &cBinop_RLwV55f5_sendMessage);
}

void Heavy_AmanitaV04::cMsg_kplZh529_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_TJvzkPnL_sendMessage);
}

void Heavy_AmanitaV04::cBinop_TJvzkPnL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_pseBEJBH_sendMessage);
}

void Heavy_AmanitaV04::cBinop_fOJYq3d6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1XIbPWsE, 1, m, &cVar_1XIbPWsE_sendMessage);
}

void Heavy_AmanitaV04::cBinop_OmlVwi5N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1Qs0Tykr, HV_BINOP_MULTIPLY, 1, m, &cBinop_1Qs0Tykr_sendMessage);
}

void Heavy_AmanitaV04::cMsg_NSG7zFAo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_wJlENrtu_sendMessage);
}

void Heavy_AmanitaV04::cBinop_wJlENrtu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HHETrWRB, HV_BINOP_MULTIPLY, 1, m, &cBinop_HHETrWRB_sendMessage);
}

void Heavy_AmanitaV04::cVar_1XIbPWsE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NpA3E0zo_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cVar_NBE7vOUw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D2U65WVh_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_drJlP3zs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_P64yhzp7_sendMessage);
}

void Heavy_AmanitaV04::cVar_MdbGabuI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_Km4gT89g_sendMessage);
}

void Heavy_AmanitaV04::cCast_GBIbAdBu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_XGQdVbwx_sendMessage);
}

void Heavy_AmanitaV04::cCast_0YXhxv0j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_VqQyxJVw_sendMessage);
}

void Heavy_AmanitaV04::cSend_plSHPoY8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_LHaDwDID_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_dbDk1RVh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Mc326zJg_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_hKtdLl8W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jYdpaSvj_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_si0cEIJ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_1g5Rb4zW_sendMessage);
}

void Heavy_AmanitaV04::cBinop_1g5Rb4zW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NYDu84fV, HV_BINOP_MULTIPLY, 1, m, &cBinop_NYDu84fV_sendMessage);
}

void Heavy_AmanitaV04::cBinop_NYDu84fV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_RrgtQdCq_sendMessage);
}

void Heavy_AmanitaV04::cBinop_RrgtQdCq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_hKtdLl8W_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_NpA3E0zo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_svDEdOh6_sendMessage);
}

void Heavy_AmanitaV04::cBinop_svDEdOh6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2sKLPmRG_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jFoT8Hsv_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Ytkna6Yk_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LlS9S9r8_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8JqRWs9z_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JoIq3m9q_sendMessage);
}

void Heavy_AmanitaV04::cBinop_IAxzOS6C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SkP505k5_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_RSbSUWpI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bqR0emCV_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_RLwV55f5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vSqKuMUX_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_1Qs0Tykr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xL9IpO8s_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_HHETrWRB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8jFrrBgp_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_OQobJ98Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_MdbGabuI, 1, m, &cVar_MdbGabuI_sendMessage);
}

void Heavy_AmanitaV04::cCast_YPoeOhX5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_NBE7vOUw, 0, m, &cVar_NBE7vOUw_sendMessage);
}

void Heavy_AmanitaV04::cCast_jFoT8Hsv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HHETrWRB, HV_BINOP_MULTIPLY, 0, m, &cBinop_HHETrWRB_sendMessage);
}

void Heavy_AmanitaV04::cCast_2sKLPmRG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cCast_LlS9S9r8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RLwV55f5, HV_BINOP_MULTIPLY, 0, m, &cBinop_RLwV55f5_sendMessage);
}

void Heavy_AmanitaV04::cCast_Ytkna6Yk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1Qs0Tykr, HV_BINOP_MULTIPLY, 0, m, &cBinop_1Qs0Tykr_sendMessage);
}

void Heavy_AmanitaV04::cCast_8JqRWs9z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RSbSUWpI, HV_BINOP_MULTIPLY, 0, m, &cBinop_RSbSUWpI_sendMessage);
}

void Heavy_AmanitaV04::cCast_JoIq3m9q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IAxzOS6C, HV_BINOP_MULTIPLY, 0, m, &cBinop_IAxzOS6C_sendMessage);
}

void Heavy_AmanitaV04::cCast_P64yhzp7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1XIbPWsE, 0, m, &cVar_1XIbPWsE_sendMessage);
}

void Heavy_AmanitaV04::cCast_D2U65WVh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_MdbGabuI, 0, m, &cVar_MdbGabuI_sendMessage);
}

void Heavy_AmanitaV04::cMsg_2JWSstAp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_YuwTobX4, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_QtpeFtcJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_iSaedkRY, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_9i9ExX6G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_o1Tg2NUq, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_jIZkrxOY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_YIECTLaV, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_2N0vS1uJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_wejbbLv2, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_8oWdWAOT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_X5JNvWVc_sendMessage);
}

void Heavy_AmanitaV04::cSystem_X5JNvWVc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zm64YL1A, HV_BINOP_DIVIDE, 1, m, &cBinop_zm64YL1A_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gAY4cYJB_sendMessage);
}

void Heavy_AmanitaV04::cUnop_wiyZcKEk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_t2AUHuZM_sendMessage);
}

void Heavy_AmanitaV04::cMsg_9HW0W7KX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_wiyZcKEk_sendMessage);
}

void Heavy_AmanitaV04::cBinop_t2AUHuZM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zm64YL1A, HV_BINOP_DIVIDE, 0, m, &cBinop_zm64YL1A_sendMessage);
}

void Heavy_AmanitaV04::cCast_gAY4cYJB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9HW0W7KX_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_zm64YL1A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LixHeZJJ, HV_BINOP_MULTIPLY, 1, m, &cBinop_LixHeZJJ_sendMessage);
}

void Heavy_AmanitaV04::cBinop_LixHeZJJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XM6yfwng_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZZO5U7ew_sendMessage);
}

void Heavy_AmanitaV04::cUnop_DFe0wlpD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_cQIFUO3A_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cUnop_761rtmkr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_1K0Ggvmv_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_WrVwHPG5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_YeTYAdn9_sendMessage);
}

void Heavy_AmanitaV04::cBinop_YeTYAdn9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LixHeZJJ, HV_BINOP_MULTIPLY, 0, m, &cBinop_LixHeZJJ_sendMessage);
}

void Heavy_AmanitaV04::cBinop_gYCh275j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_VEVVk9DU_sendMessage);
}

void Heavy_AmanitaV04::cBinop_VEVVk9DU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Dpv0T8W9_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_ckWw4kWW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k78JLXBu, HV_BINOP_MULTIPLY, 1, m, &cBinop_k78JLXBu_sendMessage);
}

void Heavy_AmanitaV04::cMsg_vsFzntW8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_X7xsmeNq_sendMessage);
}

void Heavy_AmanitaV04::cBinop_X7xsmeNq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ckWw4kWW_sendMessage);
}

void Heavy_AmanitaV04::cMsg_ONvGAnPg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_rGQlLGlR_sendMessage);
}

void Heavy_AmanitaV04::cBinop_rGQlLGlR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bwLElLCl, HV_BINOP_MULTIPLY, 1, m, &cBinop_bwLElLCl_sendMessage);
}

void Heavy_AmanitaV04::cBinop_GpToKEpd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_l1TMRdtZ, HV_BINOP_MULTIPLY, 1, m, &cBinop_l1TMRdtZ_sendMessage);
}

void Heavy_AmanitaV04::cMsg_PE6ZC4oF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_6yc9jKqu_sendMessage);
}

void Heavy_AmanitaV04::cBinop_6yc9jKqu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_GpToKEpd_sendMessage);
}

void Heavy_AmanitaV04::cBinop_snuv6hXl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mPvVHEPy, 1, m, &cVar_mPvVHEPy_sendMessage);
}

void Heavy_AmanitaV04::cBinop_4G3sjGQx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YVRcaS4w, HV_BINOP_MULTIPLY, 1, m, &cBinop_YVRcaS4w_sendMessage);
}

void Heavy_AmanitaV04::cMsg_gM7RKNm0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_GQKPbhLj_sendMessage);
}

void Heavy_AmanitaV04::cBinop_GQKPbhLj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_T02hGe5x, HV_BINOP_MULTIPLY, 1, m, &cBinop_T02hGe5x_sendMessage);
}

void Heavy_AmanitaV04::cVar_mPvVHEPy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hDSe5SvF_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cVar_R0jrJkwU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2TgPpzmy_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_WrVwHPG5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZWPFJXT1_sendMessage);
}

void Heavy_AmanitaV04::cVar_O1F7asEt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_gYCh275j_sendMessage);
}

void Heavy_AmanitaV04::cCast_ZZO5U7ew_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_761rtmkr_sendMessage);
}

void Heavy_AmanitaV04::cCast_XM6yfwng_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_DFe0wlpD_sendMessage);
}

void Heavy_AmanitaV04::cSend_cQIFUO3A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_kWTQF9lT_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_1K0Ggvmv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_cbclIxNP_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_jntkvtrc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_nEiajomn_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_Dpv0T8W9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_fghLk3Ez_sendMessage);
}

void Heavy_AmanitaV04::cBinop_fghLk3Ez_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PINRUXRI, HV_BINOP_MULTIPLY, 1, m, &cBinop_PINRUXRI_sendMessage);
}

void Heavy_AmanitaV04::cBinop_PINRUXRI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_QQdPwHMC_sendMessage);
}

void Heavy_AmanitaV04::cBinop_QQdPwHMC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_jntkvtrc_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_hDSe5SvF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_m3Evgydi_sendMessage);
}

void Heavy_AmanitaV04::cBinop_m3Evgydi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MbUpPWJd_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Jj2rRxKT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Hw7r3giQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bHCYrDTc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IGwECUKv_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fN2pA9c6_sendMessage);
}

void Heavy_AmanitaV04::cBinop_k78JLXBu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2JWSstAp_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_bwLElLCl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QtpeFtcJ_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_l1TMRdtZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9i9ExX6G_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_YVRcaS4w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jIZkrxOY_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_T02hGe5x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2N0vS1uJ_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_qUhodWGg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_O1F7asEt, 1, m, &cVar_O1F7asEt_sendMessage);
}

void Heavy_AmanitaV04::cCast_h9qDaSz2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_R0jrJkwU, 0, m, &cVar_R0jrJkwU_sendMessage);
}

void Heavy_AmanitaV04::cCast_fN2pA9c6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k78JLXBu, HV_BINOP_MULTIPLY, 0, m, &cBinop_k78JLXBu_sendMessage);
}

void Heavy_AmanitaV04::cCast_IGwECUKv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bwLElLCl, HV_BINOP_MULTIPLY, 0, m, &cBinop_bwLElLCl_sendMessage);
}

void Heavy_AmanitaV04::cCast_Jj2rRxKT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_T02hGe5x, HV_BINOP_MULTIPLY, 0, m, &cBinop_T02hGe5x_sendMessage);
}

void Heavy_AmanitaV04::cCast_MbUpPWJd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cCast_bHCYrDTc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_l1TMRdtZ, HV_BINOP_MULTIPLY, 0, m, &cBinop_l1TMRdtZ_sendMessage);
}

void Heavy_AmanitaV04::cCast_Hw7r3giQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YVRcaS4w, HV_BINOP_MULTIPLY, 0, m, &cBinop_YVRcaS4w_sendMessage);
}

void Heavy_AmanitaV04::cCast_2TgPpzmy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_O1F7asEt, 0, m, &cVar_O1F7asEt_sendMessage);
}

void Heavy_AmanitaV04::cCast_ZWPFJXT1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mPvVHEPy, 0, m, &cVar_mPvVHEPy_sendMessage);
}

void Heavy_AmanitaV04::cMsg_9hAReBlF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_j66S4DIF, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_44s36Aw4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_jz5I4u27, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_t7n5w5gl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_3cDRsj7r, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_iVR3tVLU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_InVH5702, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_GMkQRaQ5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_nAUCvobe, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_WG81ZucO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Pp3UJjP3_sendMessage);
}

void Heavy_AmanitaV04::cSystem_Pp3UJjP3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XQ1mHMsv, HV_BINOP_DIVIDE, 1, m, &cBinop_XQ1mHMsv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IkPYIO5n_sendMessage);
}

void Heavy_AmanitaV04::cUnop_09Tx4auJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_ylUa7Bxa_sendMessage);
}

void Heavy_AmanitaV04::cMsg_l0JidDEK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_09Tx4auJ_sendMessage);
}

void Heavy_AmanitaV04::cBinop_ylUa7Bxa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XQ1mHMsv, HV_BINOP_DIVIDE, 0, m, &cBinop_XQ1mHMsv_sendMessage);
}

void Heavy_AmanitaV04::cCast_IkPYIO5n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_l0JidDEK_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_XQ1mHMsv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yGp1Qy25, HV_BINOP_MULTIPLY, 1, m, &cBinop_yGp1Qy25_sendMessage);
}

void Heavy_AmanitaV04::cBinop_yGp1Qy25_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3PNysyWr_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2uRHf7tB_sendMessage);
}

void Heavy_AmanitaV04::cUnop_ptWhk7s3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_IKaV57S2_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cUnop_pCssfxEb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_zaL2k8d1_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_gFrKu4YD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_leQvsYbr_sendMessage);
}

void Heavy_AmanitaV04::cBinop_leQvsYbr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yGp1Qy25, HV_BINOP_MULTIPLY, 0, m, &cBinop_yGp1Qy25_sendMessage);
}

void Heavy_AmanitaV04::cBinop_nPaXTjyI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_w4IwMRXz_sendMessage);
}

void Heavy_AmanitaV04::cBinop_w4IwMRXz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1jtHVNfn_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_csh6EGrY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gIVbebzR, HV_BINOP_MULTIPLY, 1, m, &cBinop_gIVbebzR_sendMessage);
}

void Heavy_AmanitaV04::cMsg_wG1Qw6QJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_j9hWiawF_sendMessage);
}

void Heavy_AmanitaV04::cBinop_j9hWiawF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_csh6EGrY_sendMessage);
}

void Heavy_AmanitaV04::cMsg_WX3NsDnK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_GF5LH0Zg_sendMessage);
}

void Heavy_AmanitaV04::cBinop_GF5LH0Zg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0zY4B5Iu, HV_BINOP_MULTIPLY, 1, m, &cBinop_0zY4B5Iu_sendMessage);
}

void Heavy_AmanitaV04::cBinop_uxwuGQwR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lg4scmau, HV_BINOP_MULTIPLY, 1, m, &cBinop_lg4scmau_sendMessage);
}

void Heavy_AmanitaV04::cMsg_WcpbLPcK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_rIVUBTcv_sendMessage);
}

void Heavy_AmanitaV04::cBinop_rIVUBTcv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_uxwuGQwR_sendMessage);
}

void Heavy_AmanitaV04::cBinop_P77R1msX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OQOvtKxN, 1, m, &cVar_OQOvtKxN_sendMessage);
}

void Heavy_AmanitaV04::cBinop_0D3GH1UM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jesC15nw, HV_BINOP_MULTIPLY, 1, m, &cBinop_jesC15nw_sendMessage);
}

void Heavy_AmanitaV04::cMsg_F5RxbbFW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_7AB3NrLC_sendMessage);
}

void Heavy_AmanitaV04::cBinop_7AB3NrLC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_z5kCP9jZ, HV_BINOP_MULTIPLY, 1, m, &cBinop_z5kCP9jZ_sendMessage);
}

void Heavy_AmanitaV04::cVar_OQOvtKxN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yPVZ5lgP_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cVar_I0THcoC6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_X348rOl0_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_gFrKu4YD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BWmFnjyh_sendMessage);
}

void Heavy_AmanitaV04::cVar_zmBSUTPc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_nPaXTjyI_sendMessage);
}

void Heavy_AmanitaV04::cCast_2uRHf7tB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_pCssfxEb_sendMessage);
}

void Heavy_AmanitaV04::cCast_3PNysyWr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_ptWhk7s3_sendMessage);
}

void Heavy_AmanitaV04::cSend_IKaV57S2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_NBIqFN0o_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_zaL2k8d1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_m5wLM0bt_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_t59NR21r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_sLHc7Xsv_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_1jtHVNfn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Fvw0euFk_sendMessage);
}

void Heavy_AmanitaV04::cBinop_Fvw0euFk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_E2FnTN70, HV_BINOP_MULTIPLY, 1, m, &cBinop_E2FnTN70_sendMessage);
}

void Heavy_AmanitaV04::cBinop_E2FnTN70_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_BwN9BGKw_sendMessage);
}

void Heavy_AmanitaV04::cBinop_BwN9BGKw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_t59NR21r_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_yPVZ5lgP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_cAOTFlup_sendMessage);
}

void Heavy_AmanitaV04::cBinop_cAOTFlup_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_q1qLpjuU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xlYz3AKu_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PjOKALqt_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_t7EykukU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_b9SVLbo2_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NSbkJ7fM_sendMessage);
}

void Heavy_AmanitaV04::cBinop_gIVbebzR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9hAReBlF_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_0zY4B5Iu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_44s36Aw4_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_lg4scmau_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_t7n5w5gl_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_jesC15nw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iVR3tVLU_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_z5kCP9jZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GMkQRaQ5_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_p2uxiypT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_I0THcoC6, 0, m, &cVar_I0THcoC6_sendMessage);
}

void Heavy_AmanitaV04::cCast_YH6xfRji_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zmBSUTPc, 1, m, &cVar_zmBSUTPc_sendMessage);
}

void Heavy_AmanitaV04::cCast_t7EykukU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lg4scmau, HV_BINOP_MULTIPLY, 0, m, &cBinop_lg4scmau_sendMessage);
}

void Heavy_AmanitaV04::cCast_q1qLpjuU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cCast_NSbkJ7fM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gIVbebzR, HV_BINOP_MULTIPLY, 0, m, &cBinop_gIVbebzR_sendMessage);
}

void Heavy_AmanitaV04::cCast_PjOKALqt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jesC15nw, HV_BINOP_MULTIPLY, 0, m, &cBinop_jesC15nw_sendMessage);
}

void Heavy_AmanitaV04::cCast_xlYz3AKu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_z5kCP9jZ, HV_BINOP_MULTIPLY, 0, m, &cBinop_z5kCP9jZ_sendMessage);
}

void Heavy_AmanitaV04::cCast_b9SVLbo2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0zY4B5Iu, HV_BINOP_MULTIPLY, 0, m, &cBinop_0zY4B5Iu_sendMessage);
}

void Heavy_AmanitaV04::cCast_X348rOl0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zmBSUTPc, 0, m, &cVar_zmBSUTPc_sendMessage);
}

void Heavy_AmanitaV04::cCast_BWmFnjyh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OQOvtKxN, 0, m, &cVar_OQOvtKxN_sendMessage);
}

void Heavy_AmanitaV04::cMsg_gRAhCh8z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_46dCWaFd, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_Dqj3Prpa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_bPlvZ9dZ, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_WmHefrGi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_7d43dq8t, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_IfvShOyd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_1zr9HiDQ, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_F1sPywAA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_NWMZwyWt, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_Wsghm5GX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_JdV7Nrso_sendMessage);
}

void Heavy_AmanitaV04::cSystem_JdV7Nrso_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ruKJeOpD, HV_BINOP_DIVIDE, 1, m, &cBinop_ruKJeOpD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OBI7eooS_sendMessage);
}

void Heavy_AmanitaV04::cUnop_v9XWtMEZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_QhyrXR9u_sendMessage);
}

void Heavy_AmanitaV04::cMsg_DgXSBmCv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_v9XWtMEZ_sendMessage);
}

void Heavy_AmanitaV04::cBinop_QhyrXR9u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ruKJeOpD, HV_BINOP_DIVIDE, 0, m, &cBinop_ruKJeOpD_sendMessage);
}

void Heavy_AmanitaV04::cCast_OBI7eooS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DgXSBmCv_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_ruKJeOpD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yU59TrWF, HV_BINOP_MULTIPLY, 1, m, &cBinop_yU59TrWF_sendMessage);
}

void Heavy_AmanitaV04::cBinop_yU59TrWF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XAOFeSLj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_plDT18U3_sendMessage);
}

void Heavy_AmanitaV04::cUnop_8VlNeetN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_tU8Bz8WF_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cUnop_OiaCACK1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_NajI6E2z_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_XdT19sIE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_6HqcpH3s_sendMessage);
}

void Heavy_AmanitaV04::cBinop_6HqcpH3s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yU59TrWF, HV_BINOP_MULTIPLY, 0, m, &cBinop_yU59TrWF_sendMessage);
}

void Heavy_AmanitaV04::cBinop_JXoLDa4t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_j1nB2M8K_sendMessage);
}

void Heavy_AmanitaV04::cBinop_j1nB2M8K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5j2zyM9B_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_LxhRT504_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_g9O2mXcB, 1, m, &cVar_g9O2mXcB_sendMessage);
}

void Heavy_AmanitaV04::cVar_g9O2mXcB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oJhTPnvl_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_pFkoSz5V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_E9OBNYlP, HV_BINOP_MULTIPLY, 1, m, &cBinop_E9OBNYlP_sendMessage);
}

void Heavy_AmanitaV04::cBinop_LFBBVYMu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_pFkoSz5V_sendMessage);
}

void Heavy_AmanitaV04::cBinop_jjHFdUAz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_ru4IJZOb_sendMessage);
}

void Heavy_AmanitaV04::cBinop_ru4IJZOb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GL6356BP, HV_BINOP_MULTIPLY, 1, m, &cBinop_GL6356BP_sendMessage);
}

void Heavy_AmanitaV04::cBinop_6Rybkg4k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zWoSq8nO, HV_BINOP_MULTIPLY, 1, m, &cBinop_zWoSq8nO_sendMessage);
}

void Heavy_AmanitaV04::cBinop_eTZlQh2K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_6Rybkg4k_sendMessage);
}

void Heavy_AmanitaV04::cBinop_7iNihtn3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ki0sVcwX, HV_BINOP_MULTIPLY, 1, m, &cBinop_Ki0sVcwX_sendMessage);
}

void Heavy_AmanitaV04::cMsg_JdLOl17c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_x1tXlSCC_sendMessage);
}

void Heavy_AmanitaV04::cBinop_x1tXlSCC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3i2fGaJq, HV_BINOP_MULTIPLY, 1, m, &cBinop_3i2fGaJq_sendMessage);
}

void Heavy_AmanitaV04::cVar_9miUQ1kA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_njNcDsOd_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_XdT19sIE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kYzAANyD_sendMessage);
}

void Heavy_AmanitaV04::cVar_r06Dl8vA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_JXoLDa4t_sendMessage);
}

void Heavy_AmanitaV04::cCast_plDT18U3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_OiaCACK1_sendMessage);
}

void Heavy_AmanitaV04::cCast_XAOFeSLj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_8VlNeetN_sendMessage);
}

void Heavy_AmanitaV04::cSend_tU8Bz8WF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_yESzyihM_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_NajI6E2z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_t3ePwvDU_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_nClcUrxa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_rlKTUYTA_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_5j2zyM9B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_1zc54o4V_sendMessage);
}

void Heavy_AmanitaV04::cBinop_1zc54o4V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PgzwpbDw, HV_BINOP_MULTIPLY, 1, m, &cBinop_PgzwpbDw_sendMessage);
}

void Heavy_AmanitaV04::cBinop_PgzwpbDw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_3oRZXTXC_sendMessage);
}

void Heavy_AmanitaV04::cBinop_3oRZXTXC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_nClcUrxa_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_oJhTPnvl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_oWs7RcjN_sendMessage);
}

void Heavy_AmanitaV04::cBinop_oWs7RcjN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hhMeuKuI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9Vr7LofW_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OAhSbMZ3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_anr6GsSS_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mP0azfqg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WfE7fZXc_sendMessage);
}

void Heavy_AmanitaV04::cBinop_E9OBNYlP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gRAhCh8z_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_GL6356BP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Dqj3Prpa_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_zWoSq8nO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WmHefrGi_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_Ki0sVcwX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IfvShOyd_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_3i2fGaJq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_F1sPywAA_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_le9M3Qxt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9miUQ1kA, 0, m, &cVar_9miUQ1kA_sendMessage);
}

void Heavy_AmanitaV04::cCast_wm5DMLh5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_r06Dl8vA, 1, m, &cVar_r06Dl8vA_sendMessage);
}

void Heavy_AmanitaV04::cCast_anr6GsSS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zWoSq8nO, HV_BINOP_MULTIPLY, 0, m, &cBinop_zWoSq8nO_sendMessage);
}

void Heavy_AmanitaV04::cCast_OAhSbMZ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ki0sVcwX, HV_BINOP_MULTIPLY, 0, m, &cBinop_Ki0sVcwX_sendMessage);
}

void Heavy_AmanitaV04::cCast_9Vr7LofW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3i2fGaJq, HV_BINOP_MULTIPLY, 0, m, &cBinop_3i2fGaJq_sendMessage);
}

void Heavy_AmanitaV04::cCast_hhMeuKuI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cCast_mP0azfqg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GL6356BP, HV_BINOP_MULTIPLY, 0, m, &cBinop_GL6356BP_sendMessage);
}

void Heavy_AmanitaV04::cCast_WfE7fZXc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_E9OBNYlP, HV_BINOP_MULTIPLY, 0, m, &cBinop_E9OBNYlP_sendMessage);
}

void Heavy_AmanitaV04::cCast_kYzAANyD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_g9O2mXcB, 0, m, &cVar_g9O2mXcB_sendMessage);
}

void Heavy_AmanitaV04::cCast_njNcDsOd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_r06Dl8vA, 0, m, &cVar_r06Dl8vA_sendMessage);
}

void Heavy_AmanitaV04::cMsg_IiwNJRkM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_2ytgXHah, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_m85N9kiA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_MdHocvBn, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_XHLIJM2q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Fz1lvyl5, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_fI6dU8Zp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_uZ6EjM7R, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_HykzlxD5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Q6HkJ08S, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_IvJTNbRG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_haGGLHrM_sendMessage);
}

void Heavy_AmanitaV04::cSystem_haGGLHrM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qeTXZSZv, HV_BINOP_DIVIDE, 1, m, &cBinop_qeTXZSZv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nskBLQ9y_sendMessage);
}

void Heavy_AmanitaV04::cUnop_obawfFQ0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_GIC96C1F_sendMessage);
}

void Heavy_AmanitaV04::cMsg_TODoyFxE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_obawfFQ0_sendMessage);
}

void Heavy_AmanitaV04::cBinop_GIC96C1F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qeTXZSZv, HV_BINOP_DIVIDE, 0, m, &cBinop_qeTXZSZv_sendMessage);
}

void Heavy_AmanitaV04::cCast_nskBLQ9y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TODoyFxE_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_qeTXZSZv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_N8fD3HoE, HV_BINOP_MULTIPLY, 1, m, &cBinop_N8fD3HoE_sendMessage);
}

void Heavy_AmanitaV04::cBinop_N8fD3HoE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bnTWlX7q_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0pt3OdXL_sendMessage);
}

void Heavy_AmanitaV04::cUnop_5SoQkxr5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_RwLoVrRM_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cUnop_ZIP4lR8f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_J91UFVii_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_qLGlW0d0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_KFvN0fPq_sendMessage);
}

void Heavy_AmanitaV04::cBinop_KFvN0fPq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_N8fD3HoE, HV_BINOP_MULTIPLY, 0, m, &cBinop_N8fD3HoE_sendMessage);
}

void Heavy_AmanitaV04::cBinop_1jVgDaPw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_S9AO5WO4_sendMessage);
}

void Heavy_AmanitaV04::cBinop_S9AO5WO4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rucviaeq_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_46jhsARd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uMVfuk4q, 1, m, &cVar_uMVfuk4q_sendMessage);
}

void Heavy_AmanitaV04::cVar_uMVfuk4q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qDb4m1g0_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_aH6kXf0H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mZyRvmIi, HV_BINOP_MULTIPLY, 1, m, &cBinop_mZyRvmIi_sendMessage);
}

void Heavy_AmanitaV04::cBinop_PHf849YS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_aH6kXf0H_sendMessage);
}

void Heavy_AmanitaV04::cBinop_ZkDGylwo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_sn3lTHAK_sendMessage);
}

void Heavy_AmanitaV04::cBinop_sn3lTHAK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PwytTeXv, HV_BINOP_MULTIPLY, 1, m, &cBinop_PwytTeXv_sendMessage);
}

void Heavy_AmanitaV04::cBinop_TfWLItkp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FVpNG9gW, HV_BINOP_MULTIPLY, 1, m, &cBinop_FVpNG9gW_sendMessage);
}

void Heavy_AmanitaV04::cBinop_ZUTVLLab_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_TfWLItkp_sendMessage);
}

void Heavy_AmanitaV04::cBinop_OheNfvaL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bMoVi3TL, HV_BINOP_MULTIPLY, 1, m, &cBinop_bMoVi3TL_sendMessage);
}

void Heavy_AmanitaV04::cMsg_ExZ3aMYM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_TJ1Z08jP_sendMessage);
}

void Heavy_AmanitaV04::cBinop_TJ1Z08jP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Zejl7Cq4, HV_BINOP_MULTIPLY, 1, m, &cBinop_Zejl7Cq4_sendMessage);
}

void Heavy_AmanitaV04::cVar_jys2IdjN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lBSAegDd_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_qLGlW0d0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wuXrBx2D_sendMessage);
}

void Heavy_AmanitaV04::cVar_UlReeqkI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_1jVgDaPw_sendMessage);
}

void Heavy_AmanitaV04::cCast_bnTWlX7q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_5SoQkxr5_sendMessage);
}

void Heavy_AmanitaV04::cCast_0pt3OdXL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_ZIP4lR8f_sendMessage);
}

void Heavy_AmanitaV04::cSend_RwLoVrRM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_2CH3D7HH_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_J91UFVii_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IWkMNJrU_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_pChp9F0z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_QD1xEw5h_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_rucviaeq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_NmyUtVOz_sendMessage);
}

void Heavy_AmanitaV04::cBinop_NmyUtVOz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H4mhJ3AF, HV_BINOP_MULTIPLY, 1, m, &cBinop_H4mhJ3AF_sendMessage);
}

void Heavy_AmanitaV04::cBinop_H4mhJ3AF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_1liUEoLQ_sendMessage);
}

void Heavy_AmanitaV04::cBinop_1liUEoLQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_pChp9F0z_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_qDb4m1g0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_1MA0hZcf_sendMessage);
}

void Heavy_AmanitaV04::cBinop_1MA0hZcf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XuWXhE81_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_INactRT3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fjPFxucd_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6Kmy7Nmf_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_imAYoVYq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_apeRamkE_sendMessage);
}

void Heavy_AmanitaV04::cBinop_mZyRvmIi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IiwNJRkM_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_PwytTeXv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m85N9kiA_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_FVpNG9gW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XHLIJM2q_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_bMoVi3TL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fI6dU8Zp_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_Zejl7Cq4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HykzlxD5_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_e5ncyvJi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UlReeqkI, 1, m, &cVar_UlReeqkI_sendMessage);
}

void Heavy_AmanitaV04::cCast_1x6fFnlT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jys2IdjN, 0, m, &cVar_jys2IdjN_sendMessage);
}

void Heavy_AmanitaV04::cCast_fjPFxucd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bMoVi3TL, HV_BINOP_MULTIPLY, 0, m, &cBinop_bMoVi3TL_sendMessage);
}

void Heavy_AmanitaV04::cCast_6Kmy7Nmf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FVpNG9gW, HV_BINOP_MULTIPLY, 0, m, &cBinop_FVpNG9gW_sendMessage);
}

void Heavy_AmanitaV04::cCast_XuWXhE81_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cCast_INactRT3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Zejl7Cq4, HV_BINOP_MULTIPLY, 0, m, &cBinop_Zejl7Cq4_sendMessage);
}

void Heavy_AmanitaV04::cCast_imAYoVYq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PwytTeXv, HV_BINOP_MULTIPLY, 0, m, &cBinop_PwytTeXv_sendMessage);
}

void Heavy_AmanitaV04::cCast_apeRamkE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mZyRvmIi, HV_BINOP_MULTIPLY, 0, m, &cBinop_mZyRvmIi_sendMessage);
}

void Heavy_AmanitaV04::cCast_lBSAegDd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UlReeqkI, 0, m, &cVar_UlReeqkI_sendMessage);
}

void Heavy_AmanitaV04::cCast_wuXrBx2D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uMVfuk4q, 0, m, &cVar_uMVfuk4q_sendMessage);
}

void Heavy_AmanitaV04::cSend_EDRMdkbe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Y173Lwk2_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_GNAiHCtr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_uMrg2Is4, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_syouMPmx, m);
}

void Heavy_AmanitaV04::cMsg_BuQh94Yi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.99999f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_uMrg2Is4, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_syouMPmx, m);
}

void Heavy_AmanitaV04::cBinop_M00cYHNZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 10000.0f, 0, m, &cBinop_DctdEqOs_sendMessage);
}

void Heavy_AmanitaV04::cBinop_0o9s72Va_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_DAo2uj0b_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_vlCVD7Sx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.75f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_uMrg2Is4, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_syouMPmx, m);
}

void Heavy_AmanitaV04::cMsg_MMeJ4A7W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 60000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_0o9s72Va_sendMessage);
}

void Heavy_AmanitaV04::cCast_KgUgVLz2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_M00cYHNZ, HV_BINOP_DIVIDE, 0, m, &cBinop_M00cYHNZ_sendMessage);
}

void Heavy_AmanitaV04::cCast_bOQAmhJg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_M00cYHNZ, HV_BINOP_DIVIDE, 1, m, &cBinop_M00cYHNZ_sendMessage);
}

void Heavy_AmanitaV04::cMsg_k70i9duA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_U9mUn0Iw, 1, m, &cIf_U9mUn0Iw_sendMessage);
}

void Heavy_AmanitaV04::cMsg_HPW0qI1v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_U9mUn0Iw, 1, m, &cIf_U9mUn0Iw_sendMessage);
}

void Heavy_AmanitaV04::cCast_PUvN1g33_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JPJ80njZ, 0, m, &cVar_JPJ80njZ_sendMessage);
}

void Heavy_AmanitaV04::cCast_91eAvC5i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_bmffGrCI_onMessage(_c, NULL, 0, m, NULL);
  cIf_onMessage(_c, &Context(_c)->cIf_3qpZqJ74, 1, m, &cIf_3qpZqJ74_sendMessage);
}

void Heavy_AmanitaV04::cBinop_CLpRsAaL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 10000.0f, 0, m, &cBinop_YqOrHSra_sendMessage);
}

void Heavy_AmanitaV04::cBinop_cDKXzJPh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pBRo4hpy, 0, m, &cVar_pBRo4hpy_sendMessage);
}

void Heavy_AmanitaV04::cCast_bV067MiG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CLpRsAaL, HV_BINOP_DIVIDE, 1, m, &cBinop_CLpRsAaL_sendMessage);
}

void Heavy_AmanitaV04::cCast_2vDs3hyD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CLpRsAaL, HV_BINOP_DIVIDE, 0, m, &cBinop_CLpRsAaL_sendMessage);
}

void Heavy_AmanitaV04::cMsg_8XlT5c1y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_yFJVoOS3, 1, m, &cIf_yFJVoOS3_sendMessage);
}

void Heavy_AmanitaV04::cMsg_yx3L9KxB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_yFJVoOS3, 1, m, &cIf_yFJVoOS3_sendMessage);
}

void Heavy_AmanitaV04::cCast_vIymqzFE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ECwvug8i, 0, m, &cVar_ECwvug8i_sendMessage);
}

void Heavy_AmanitaV04::cCast_TmAEG0yj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_qODZNkt9_onMessage(_c, NULL, 0, m, NULL);
  cIf_onMessage(_c, &Context(_c)->cIf_iUu4VdzX, 1, m, &cIf_iUu4VdzX_sendMessage);
}

void Heavy_AmanitaV04::cBinop_DeCxG8Wt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_vcmDrcet_sendMessage);
}

void Heavy_AmanitaV04::cBinop_vcmDrcet_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_trlisMSF, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZRBzrnyB, m);
}

void Heavy_AmanitaV04::cBinop_WjWoVb8A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_XVrouwbL_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_OV8UKNev_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 12.0f, 0, m, &cBinop_WjWoVb8A_sendMessage);
}

void Heavy_AmanitaV04::cMsg_0FG62CXt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_5cB29lcr, 1, m, &cTabwrite_5cB29lcr_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_M1qbIxWG, 1, m, &cTabwrite_M1qbIxWG_sendMessage);
}

void Heavy_AmanitaV04::cMsg_j2qwi4c7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_5cB29lcr, 1, m, &cTabwrite_5cB29lcr_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_M1qbIxWG, 1, m, &cTabwrite_M1qbIxWG_sendMessage);
}

void Heavy_AmanitaV04::cMsg_p5OZrBum_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_5cB29lcr, 1, m, &cTabwrite_5cB29lcr_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_M1qbIxWG, 1, m, &cTabwrite_M1qbIxWG_sendMessage);
}

void Heavy_AmanitaV04::cMsg_QLxcb2kA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 3.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_5cB29lcr, 1, m, &cTabwrite_5cB29lcr_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_M1qbIxWG, 1, m, &cTabwrite_M1qbIxWG_sendMessage);
}

void Heavy_AmanitaV04::cMsg_55r89G4R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 4.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_5cB29lcr, 1, m, &cTabwrite_5cB29lcr_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_M1qbIxWG, 1, m, &cTabwrite_M1qbIxWG_sendMessage);
}

void Heavy_AmanitaV04::cMsg_HnNkYwJG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 5.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_5cB29lcr, 1, m, &cTabwrite_5cB29lcr_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_M1qbIxWG, 1, m, &cTabwrite_M1qbIxWG_sendMessage);
}

void Heavy_AmanitaV04::cMsg_YcAYlecf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_5cB29lcr, 1, m, &cTabwrite_5cB29lcr_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_M1qbIxWG, 1, m, &cTabwrite_M1qbIxWG_sendMessage);
}

void Heavy_AmanitaV04::cMsg_QmwsJB6R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 7.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_5cB29lcr, 1, m, &cTabwrite_5cB29lcr_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_M1qbIxWG, 1, m, &cTabwrite_M1qbIxWG_sendMessage);
}

void Heavy_AmanitaV04::cMsg_Mxozbvr3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 16.0f);
  cSwitchcase_JsNlYAc4_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Ew9wqVXZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_6hlBlFyu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 8.0f);
  cSwitchcase_JsNlYAc4_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Ew9wqVXZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_UDM1ISyN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 4.0f);
  cSwitchcase_JsNlYAc4_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Ew9wqVXZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_jydpxm0r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cSwitchcase_JsNlYAc4_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Ew9wqVXZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_c7ScGklO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_JsNlYAc4_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Ew9wqVXZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_gASXcw1v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.5f);
  cSwitchcase_JsNlYAc4_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Ew9wqVXZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_j2fB9PrK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  cSwitchcase_JsNlYAc4_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Ew9wqVXZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_8NsqDafe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_scx9aD9y, 1, m, &cTabwrite_scx9aD9y_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_gDT26Eua, 1, m, &cTabwrite_gDT26Eua_sendMessage);
}

void Heavy_AmanitaV04::cMsg_xWzyHHhd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_scx9aD9y, 1, m, &cTabwrite_scx9aD9y_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_gDT26Eua, 1, m, &cTabwrite_gDT26Eua_sendMessage);
}

void Heavy_AmanitaV04::cMsg_BI01zYMd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_scx9aD9y, 1, m, &cTabwrite_scx9aD9y_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_gDT26Eua, 1, m, &cTabwrite_gDT26Eua_sendMessage);
}

void Heavy_AmanitaV04::cMsg_YsgVK6T0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 3.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_scx9aD9y, 1, m, &cTabwrite_scx9aD9y_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_gDT26Eua, 1, m, &cTabwrite_gDT26Eua_sendMessage);
}

void Heavy_AmanitaV04::cMsg_IFPHrI6A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 4.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_scx9aD9y, 1, m, &cTabwrite_scx9aD9y_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_gDT26Eua, 1, m, &cTabwrite_gDT26Eua_sendMessage);
}

void Heavy_AmanitaV04::cMsg_lLL0JzO4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 5.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_scx9aD9y, 1, m, &cTabwrite_scx9aD9y_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_gDT26Eua, 1, m, &cTabwrite_gDT26Eua_sendMessage);
}

void Heavy_AmanitaV04::cMsg_FTx1H9uP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_scx9aD9y, 1, m, &cTabwrite_scx9aD9y_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_gDT26Eua, 1, m, &cTabwrite_gDT26Eua_sendMessage);
}

void Heavy_AmanitaV04::cMsg_QSIr7bZs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 7.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_scx9aD9y, 1, m, &cTabwrite_scx9aD9y_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_gDT26Eua, 1, m, &cTabwrite_gDT26Eua_sendMessage);
}

void Heavy_AmanitaV04::cMsg_tVNAUkwZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 8.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_5cB29lcr, 1, m, &cTabwrite_5cB29lcr_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_M1qbIxWG, 1, m, &cTabwrite_M1qbIxWG_sendMessage);
}

void Heavy_AmanitaV04::cMsg_vrgFNdEa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.125f);
  cSwitchcase_JsNlYAc4_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Ew9wqVXZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_Thjwamds_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0625f);
  cSwitchcase_JsNlYAc4_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Ew9wqVXZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_7QisO7BO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 8.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_scx9aD9y, 1, m, &cTabwrite_scx9aD9y_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_gDT26Eua, 1, m, &cTabwrite_gDT26Eua_sendMessage);
}

void Heavy_AmanitaV04::cCast_C5EnhOFK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jmyFk9RF_sendMessage(_c, 0, m);
  cMsg_6hlBlFyu_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_9eG0fD18_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_j2qwi4c7_sendMessage(_c, 0, m);
  cMsg_xWzyHHhd_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_fdchS6r0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RAj6lZuV_sendMessage(_c, 0, m);
  cMsg_jydpxm0r_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_7B9Qqz4b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0FG62CXt_sendMessage(_c, 0, m);
  cMsg_8NsqDafe_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_Ex2yPQFY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gASXcw1v_sendMessage(_c, 0, m);
  cMsg_6lxVpRcV_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_FIdDtDNz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YsgVK6T0_sendMessage(_c, 0, m);
  cMsg_QLxcb2kA_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_h2VOYkdK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CQYCW3P4_sendMessage(_c, 0, m);
  cMsg_j2fB9PrK_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_wPXfRw2G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FTx1H9uP_sendMessage(_c, 0, m);
  cMsg_YcAYlecf_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_VcOHSzbn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UDM1ISyN_sendMessage(_c, 0, m);
  cMsg_o0NC7Vct_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_ezsdSKZT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_povNdhoH_sendMessage(_c, 0, m);
  cMsg_vrgFNdEa_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_eSDwDHOd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Mxozbvr3_sendMessage(_c, 0, m);
  cMsg_AyQjLVyb_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_Qr4BOYzZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_c7ScGklO_sendMessage(_c, 0, m);
  cMsg_g7wR4UnN_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_lhdA8EXx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QSIr7bZs_sendMessage(_c, 0, m);
  cMsg_QmwsJB6R_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_CTlbFrdu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_p5OZrBum_sendMessage(_c, 0, m);
  cMsg_BI01zYMd_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_3LDHuaMJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Thjwamds_sendMessage(_c, 0, m);
  cMsg_QJVPDrtH_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_5fF118GE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HnNkYwJG_sendMessage(_c, 0, m);
  cMsg_lLL0JzO4_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_Dw89VSIq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7QisO7BO_sendMessage(_c, 0, m);
  cMsg_tVNAUkwZ_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_u0cT0n0d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_55r89G4R_sendMessage(_c, 0, m);
  cMsg_IFPHrI6A_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::hTable_OwxwRUw5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::hTable_owdqjely_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::hTable_9xfY4Fou_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::hTable_n0vcvDE1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cMsg_AyQjLVyb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.6667f);
  cSwitchcase_OgsNsPzs_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_yFXooX3A_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_jmyFk9RF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 5.3333f);
  cSwitchcase_OgsNsPzs_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_yFXooX3A_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_o0NC7Vct_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.6667f);
  cSwitchcase_OgsNsPzs_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_yFXooX3A_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_RAj6lZuV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.3333f);
  cSwitchcase_OgsNsPzs_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_yFXooX3A_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_g7wR4UnN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.6667f);
  cSwitchcase_OgsNsPzs_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_yFXooX3A_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_6lxVpRcV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.3333f);
  cSwitchcase_OgsNsPzs_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_yFXooX3A_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_CQYCW3P4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.1667f);
  cSwitchcase_OgsNsPzs_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_yFXooX3A_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_povNdhoH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0833f);
  cSwitchcase_OgsNsPzs_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_yFXooX3A_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_QJVPDrtH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0417f);
  cSwitchcase_OgsNsPzs_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_yFXooX3A_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cBinop_6ahTlcfU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_G25VLtUu, 0, m, &cVar_G25VLtUu_sendMessage);
}

void Heavy_AmanitaV04::cBinop_tH2W4xHg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_UfxIbD4E_sendMessage);
}

void Heavy_AmanitaV04::cBinop_UfxIbD4E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_I05TBQfM, 1, m, &cIf_I05TBQfM_sendMessage);
}

void Heavy_AmanitaV04::cBinop_r3x4UfRC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5988.0f, 0, m, &cBinop_OV8UKNev_sendMessage);
}

void Heavy_AmanitaV04::cMsg_oo1g548l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 45.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_I05TBQfM, 0, m, &cIf_I05TBQfM_sendMessage);
}

void Heavy_AmanitaV04::cSend_XVrouwbL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_t42l9gHI_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_jKrVgBs9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_uWvJy9IM_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_LC0DRQ8I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_VxGq1vDt_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_E8sjyc6N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 12.0f, 0, m, &cBinop_LC0DRQ8I_sendMessage);
}

void Heavy_AmanitaV04::cBinop_i6d124JX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5988.0f, 0, m, &cBinop_E8sjyc6N_sendMessage);
}

void Heavy_AmanitaV04::cSend_VxGq1vDt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_zixyazZc_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_iUKwTJiI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_hoc1kBfc_sendMessage);
}

void Heavy_AmanitaV04::cBinop_hoc1kBfc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_O8Dzt5nd, 1, m, &cIf_O8Dzt5nd_sendMessage);
}

void Heavy_AmanitaV04::cMsg_SOXmQMcm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 45.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_O8Dzt5nd, 0, m, &cIf_O8Dzt5nd_sendMessage);
}

void Heavy_AmanitaV04::cSend_kpaaT47b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_wzvytjOF_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_TfgULpEc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fU3KLh7q_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_GWZzm99D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ga85wPJT, 0, m, &cVar_ga85wPJT_sendMessage);
}

void Heavy_AmanitaV04::cSend_DAo2uj0b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_PkDJoeR0_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_NDvumbGq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_FQ5lZ8CX_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_87YWMyHX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_TAi96BGJ_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_dRy898qf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_3J5ugC3H_sendMessage);
}

void Heavy_AmanitaV04::cBinop_3J5ugC3H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_hVGY7xbv, m);
}

void Heavy_AmanitaV04::cSend_zJEAGQU3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_kVEpgK87_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_tYxUeSHr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_BsY1dALB_sendMessage);
}

void Heavy_AmanitaV04::cBinop_BsY1dALB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AojRSN2y_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_o8mv32ut_sendMessage);
}

void Heavy_AmanitaV04::cMsg_WxFbEtwG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 15.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_29qiZpXI, 0, m, NULL);
}

void Heavy_AmanitaV04::cSend_U2PxPcjC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_vcF2LA2U_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cCast_YWyBAi3o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_ajhiOgom, 1, m, &cIf_ajhiOgom_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_tYxUeSHr_sendMessage);
}

void Heavy_AmanitaV04::cCast_FGXyROZ0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9TBjr5pj, 0, m, &cVar_9TBjr5pj_sendMessage);
}

void Heavy_AmanitaV04::cCast_AojRSN2y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_EW5CBHNs, 1, m, &cIf_EW5CBHNs_sendMessage);
}

void Heavy_AmanitaV04::cCast_o8mv32ut_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_I4fFIIPZ, 0, m, &cVar_I4fFIIPZ_sendMessage);
}

void Heavy_AmanitaV04::cMsg_BCvG6GBi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_XDDwdEjq, 1, m, &cIf_XDDwdEjq_sendMessage);
}

void Heavy_AmanitaV04::cMsg_geiY9OiX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_lzCHOocS, 1, m, &cIf_lzCHOocS_sendMessage);
}

void Heavy_AmanitaV04::cMsg_fr9TntNi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_lzCHOocS, 1, m, &cIf_lzCHOocS_sendMessage);
}

void Heavy_AmanitaV04::cBinop_JFJC2gNF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_WBp28i39_sendMessage);
}

void Heavy_AmanitaV04::cBinop_WBp28i39_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_LGbgwq2C_sendMessage);
}

void Heavy_AmanitaV04::cBinop_LGbgwq2C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 4.0f, 0, m, &cBinop_4OHF2UKo_sendMessage);
}

void Heavy_AmanitaV04::cMsg_E9LX5awD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 50.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_wwckSs2Q, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_K0VznMJ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 50.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_cdGIm0CJ, 0, m, NULL);
}

void Heavy_AmanitaV04::cBinop_reJsIyYR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_E9LX5awD_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_4OHF2UKo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_K0VznMJ9_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_ZPhjgsrQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_XDDwdEjq, 1, m, &cIf_XDDwdEjq_sendMessage);
}

void Heavy_AmanitaV04::cSend_wcHZXIrI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ZcSCataI_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_1YtriCyk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 45.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_0bSrha6L, 0, m, &cIf_0bSrha6L_sendMessage);
}

void Heavy_AmanitaV04::cMsg_roSpjVlE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 45.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_qNw2WoiH, 0, m, &cIf_qNw2WoiH_sendMessage);
}

void Heavy_AmanitaV04::cSend_TAi96BGJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Gi4p8lUL_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cSend_FQ5lZ8CX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dlYbwmHX_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cMsg_hTaWMj9z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 45.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_e7Ujc4Wm, 0, m, NULL);
}

void Heavy_AmanitaV04::cMsg_QvhHkzUB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 45.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_x1PSSFYg, 0, m, NULL);
}

void Heavy_AmanitaV04::cBinop_y4j5yruR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_nVkNOWCN_sendMessage);
}

void Heavy_AmanitaV04::cBinop_nVkNOWCN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_qfWlr240, 1, m);
}

void Heavy_AmanitaV04::cBinop_Ad1RPCfG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_mBLKeREE_sendMessage);
}

void Heavy_AmanitaV04::cBinop_mBLKeREE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hTaWMj9z_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_pIpHpG6O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Bwuhghy8_sendMessage);
}

void Heavy_AmanitaV04::cBinop_Bwuhghy8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QvhHkzUB_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cBinop_WHq2mEOj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_fKrjH0uD, m);
}

void Heavy_AmanitaV04::cVar_sZrPfcc1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_AmanitaV04::cReceive_Y173Lwk2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 7.999f, 0, m, &cBinop_cDKXzJPh_sendMessage);
}

void Heavy_AmanitaV04::cReceive_dlQ12Wyb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7IiaupB3_sendMessage(_c, 0, m);
  cMsg_pDTn2dCY_sendMessage(_c, 0, m);
  cMsg_VXV6bU8t_sendMessage(_c, 0, m);
  cMsg_BCf8vk0G_sendMessage(_c, 0, m);
  cMsg_X53ZzgLO_sendMessage(_c, 0, m);
  cMsg_STJFVjSO_sendMessage(_c, 0, m);
  cMsg_t5UbgSDz_sendMessage(_c, 0, m);
  cMsg_xghKfmge_sendMessage(_c, 0, m);
  cMsg_8oWdWAOT_sendMessage(_c, 0, m);
  cMsg_WG81ZucO_sendMessage(_c, 0, m);
  cMsg_Wsghm5GX_sendMessage(_c, 0, m);
  cMsg_IvJTNbRG_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ntdqWZ7M, 0, m, &cVar_ntdqWZ7M_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_fpCvlBFa, 0, m, &cVar_fpCvlBFa_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_8FLcOwHc, 0, m, &cVar_8FLcOwHc_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_znTg6Enw, 0, m, &cVar_znTg6Enw_sendMessage);
  sSample_onMessage(_c, &Context(_c)->sSample_C5C5GMyE, 1, m);
  sSample_onMessage(_c, &Context(_c)->sSample_pJjCzAVx, 1, m);
  cVar_onMessage(_c, &Context(_c)->cVar_4O4cjttC, 0, m, &cVar_4O4cjttC_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_islKyctZ, 0, m, &cVar_islKyctZ_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_CsqxiRF0, 0, m, &cVar_CsqxiRF0_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_NBE7vOUw, 0, m, &cVar_NBE7vOUw_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_R0jrJkwU, 0, m, &cVar_R0jrJkwU_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_I0THcoC6, 0, m, &cVar_I0THcoC6_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_9miUQ1kA, 0, m, &cVar_9miUQ1kA_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_jys2IdjN, 0, m, &cVar_jys2IdjN_sendMessage);
  cMsg_1WpAceds_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_mu7P3lMg, 0, m, &cVar_mu7P3lMg_sendMessage);
  cSwitchcase_PkNUR8tv_onMessage(_c, NULL, 0, m, NULL);
  cMsg_qaRur3zB_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_umbYGmaJ, 0, m, &cVar_umbYGmaJ_sendMessage);
  cMsg_IMLhlqRc_sendMessage(_c, 0, m);
  cMsg_w5zCUufb_sendMessage(_c, 0, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1PUEN4iw_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_wYOKmnVy, 0, m, &cVar_wYOKmnVy_sendMessage);
  cMsg_7Cl242UO_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_MOPAtY5Y, 0, m, &cVar_MOPAtY5Y_sendMessage);
  cMsg_H6xhR2yZ_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cReceive_CqVfbADW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e6QWvULO, HV_BINOP_MULTIPLY, 0, m, &cBinop_e6QWvULO_sendMessage);
}

void Heavy_AmanitaV04::cReceive_qWirHvPV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_4kuIwSvl_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_P2uBKb8b_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_yZAutpu7_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_JGwVnMVV_sendMessage);
}

void Heavy_AmanitaV04::cReceive_l3gGuxJi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_zoigHEus_sendMessage);
  cMsg_jIHwtOyD_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cReceive_4KdaUxTv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DsWcsaAq, HV_BINOP_MULTIPLY, 0, m, &cBinop_DsWcsaAq_sendMessage);
}

void Heavy_AmanitaV04::cReceive_mwn4v2MU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_lnJwm7jy_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Tvma84KW_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_JeXemNg1_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_dMaEzKbf_sendMessage);
}

void Heavy_AmanitaV04::cReceive_4m07vR4n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_QLUsueWl_sendMessage);
  cMsg_IWUIsdFI_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cReceive_uByuc3p8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EUqMx08q, HV_BINOP_MULTIPLY, 0, m, &cBinop_EUqMx08q_sendMessage);
}

void Heavy_AmanitaV04::cReceive_8MyG36WH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_an32oiyS_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_k6yfvC2X_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_i6WNPa79_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_ATja3rQT_sendMessage);
}

void Heavy_AmanitaV04::cReceive_uCCPc9Z4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_wSQ4Z49C_sendMessage);
  cMsg_hoY4COZ3_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cReceive_2ByaMnjL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RBA9Q73Z, HV_BINOP_MULTIPLY, 0, m, &cBinop_RBA9Q73Z_sendMessage);
}

void Heavy_AmanitaV04::cReceive_aXyDQBSd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_LhV8WU2X_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_5eZadB1v_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ieTGYjcQ_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_cUX36Osa_sendMessage);
}

void Heavy_AmanitaV04::cReceive_CFJ4wfDE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_BxkbD1R8_sendMessage);
  cMsg_p2amB3d6_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cReceive_t42l9gHI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_qTY6vJJK_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cReceive_uWvJy9IM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 7.999f, 0, m, &cBinop_GWZzm99D_sendMessage);
}

void Heavy_AmanitaV04::cReceive_zixyazZc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_QK7nc9zE_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cReceive_wzvytjOF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fxTtGChg, 0, m, &cVar_fxTtGChg_sendMessage);
}

void Heavy_AmanitaV04::cReceive_fU3KLh7q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TmAEG0yj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vIymqzFE_sendMessage);
}

void Heavy_AmanitaV04::cReceive_PkDJoeR0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_M00cYHNZ, HV_BINOP_DIVIDE, 0, m, &cBinop_M00cYHNZ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CLpRsAaL, HV_BINOP_DIVIDE, 0, m, &cBinop_CLpRsAaL_sendMessage);
}

void Heavy_AmanitaV04::cReceive_kVEpgK87_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SlQCg45E, 0, m, &cVar_SlQCg45E_sendMessage);
}

void Heavy_AmanitaV04::cReceive_vcF2LA2U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_91eAvC5i_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PUvN1g33_sendMessage);
}

void Heavy_AmanitaV04::cReceive_UVkULApi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_RxAegQuq_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 2.0f, 0, m, &cBinop_tH3cNl7E_sendMessage);
}

void Heavy_AmanitaV04::cReceive_u1tQNHMZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 100.0f, 0, m, &cBinop_6ahTlcfU_sendMessage);
}

void Heavy_AmanitaV04::cReceive_FnuRjS1E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_DeCxG8Wt_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_FS3OckOJ, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_iuXikdsW, m);
}

void Heavy_AmanitaV04::cReceive_W8oiaj7a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_sujd5J8R, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_qB5feYvx, m);
}

void Heavy_AmanitaV04::cReceive_pQe4QGx4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9miUQ1kA, 0, m, &cVar_9miUQ1kA_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_fpCvlBFa, 0, m, &cVar_fpCvlBFa_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_8FLcOwHc, 0, m, &cVar_8FLcOwHc_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_znTg6Enw, 0, m, &cVar_znTg6Enw_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ntdqWZ7M, 0, m, &cVar_ntdqWZ7M_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_jys2IdjN, 0, m, &cVar_jys2IdjN_sendMessage);
}

void Heavy_AmanitaV04::cReceive_55hWXm0r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MMeJ4A7W_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cReceive_7oUXdOtT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_v3GAUCGw, 0, m, &cVar_v3GAUCGw_sendMessage);
}

void Heavy_AmanitaV04::cReceive_lWbUSQ9N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_K4LmWkmk, 0, m, &cVar_K4LmWkmk_sendMessage);
}

void Heavy_AmanitaV04::cReceive_yEOEzjUR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_tYxUeSHr_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YWyBAi3o_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FGXyROZ0_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_ajhiOgom, 1, m, &cIf_ajhiOgom_sendMessage);
  cSend_wcHZXIrI_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cReceive_ZcSCataI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_gVcwoHbO_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cReceive_MWOGtVUH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_ajhiOgom, 0, m, &cIf_ajhiOgom_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_i6d124JX_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_9TBjr5pj, 1, m, &cVar_9TBjr5pj_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 0.75f, 0, m, &cBinop_NDvumbGq_sendMessage);
  cSend_EDRMdkbe_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cReceive_RqNSdtNh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_I4fFIIPZ, 1, m, &cVar_I4fFIIPZ_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_EW5CBHNs, 0, m, &cIf_EW5CBHNs_sendMessage);
}

void Heavy_AmanitaV04::cReceive_bgWqSFqp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_qGoiAmJT_onMessage(_c, NULL, 0, m, NULL);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_tH2W4xHg_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_0bSrha6L, 1, m, &cIf_0bSrha6L_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_qNw2WoiH, 1, m, &cIf_qNw2WoiH_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_iUKwTJiI_sendMessage);
}

void Heavy_AmanitaV04::cReceive_lMpqT4zZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_dRy898qf_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_9tcdiXWk, m);
}

void Heavy_AmanitaV04::cReceive_bL2182oy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_sSl7Uvsi_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_AmanitaV04::cReceive_dlYbwmHX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_73fUxEa9, m);
}

void Heavy_AmanitaV04::cReceive_Gi4p8lUL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_BzCifJdr, m);
}

void Heavy_AmanitaV04::cReceive_I1iTiBjT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BeNyFAmt, 0, m, &cVar_BeNyFAmt_sendMessage);
}

void Heavy_AmanitaV04::cReceive_5MW0BWWN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uTOPoicY, 0, m, &cVar_uTOPoicY_sendMessage);
}

void Heavy_AmanitaV04::cReceive_YlVrzrF4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sSample_onMessage(_c, &Context(_c)->sSample_C5C5GMyE, 1, m);
  sSample_onMessage(_c, &Context(_c)->sSample_pJjCzAVx, 1, m);
}

void Heavy_AmanitaV04::cReceive_Vni57wCE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JgHQjmoq, HV_BINOP_MULTIPLY, 0, m, &cBinop_JgHQjmoq_sendMessage);
}

void Heavy_AmanitaV04::cReceive_hgfti8zT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_J2h7SqZp_sendMessage(_c, 0, m);
  cMsg_PyutpwFt_sendMessage(_c, 0, m);
  cMsg_EQF3flMe_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_EyBtekzN_sendMessage);
}

void Heavy_AmanitaV04::cReceive_KwdXNIiN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_u86eUTtx_sendMessage);
  cMsg_mob5u3Av_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cReceive_wmvruDgz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PhFsYOUv, HV_BINOP_MULTIPLY, 0, m, &cBinop_PhFsYOUv_sendMessage);
}

void Heavy_AmanitaV04::cReceive_a81uPReF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BSXE8r2X_sendMessage(_c, 0, m);
  cMsg_ijFlZU9N_sendMessage(_c, 0, m);
  cMsg_MJN0lC7M_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_gN15r3jr_sendMessage);
}

void Heavy_AmanitaV04::cReceive_Mp5S9jEz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_q8nh0GzY_sendMessage);
  cMsg_7o1TfFZx_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cReceive_b7NGKn4R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GhuCZTQ2, HV_BINOP_MULTIPLY, 0, m, &cBinop_GhuCZTQ2_sendMessage);
}

void Heavy_AmanitaV04::cReceive_OnzssKff_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HkC4IPlf_sendMessage(_c, 0, m);
  cMsg_LsrtJiqH_sendMessage(_c, 0, m);
  cMsg_e1UB1GtM_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_ENUBvMEB_sendMessage);
}

void Heavy_AmanitaV04::cReceive_1JyV5QcG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_LR4eeZNE_sendMessage);
  cMsg_WrkrwpoS_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cReceive_LHaDwDID_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NYDu84fV, HV_BINOP_MULTIPLY, 0, m, &cBinop_NYDu84fV_sendMessage);
}

void Heavy_AmanitaV04::cReceive_Mc326zJg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4FWkamBG_sendMessage(_c, 0, m);
  cMsg_WFRskxFn_sendMessage(_c, 0, m);
  cMsg_kplZh529_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_OmlVwi5N_sendMessage);
}

void Heavy_AmanitaV04::cReceive_jYdpaSvj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_fOJYq3d6_sendMessage);
  cMsg_NSG7zFAo_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cReceive_tDr6Q9gj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_fk2ybKK0, 1, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_y4j5yruR_sendMessage);
}

void Heavy_AmanitaV04::cReceive_XrY5Ahgr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CsqxiRF0, 0, m, &cVar_CsqxiRF0_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_NBE7vOUw, 0, m, &cVar_NBE7vOUw_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_4O4cjttC, 0, m, &cVar_4O4cjttC_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_islKyctZ, 0, m, &cVar_islKyctZ_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_I0THcoC6, 0, m, &cVar_I0THcoC6_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_R0jrJkwU, 0, m, &cVar_R0jrJkwU_sendMessage);
}

void Heavy_AmanitaV04::cReceive_4ONZ7LVN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_phTDrx1i_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eVG5jxP6_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OQobJ98Y_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YPoeOhX5_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qb6gEP2g_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_K7BI458q_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mxris0gp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UNocm8So_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YH6xfRji_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_p2uxiypT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qUhodWGg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_h9qDaSz2_sendMessage);
}

void Heavy_AmanitaV04::cReceive_uoRTAa4Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oWPg6nDk_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_W7KvEoH9_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YxXuomE8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LqWlCnSf_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hsuxwbcJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_veZgtIra_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hWJiaJ5U_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AjZenjTi_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wm5DMLh5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_le9M3Qxt_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_e5ncyvJi_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1x6fFnlT_sendMessage);
}

void Heavy_AmanitaV04::cReceive_kWTQF9lT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PINRUXRI, HV_BINOP_MULTIPLY, 0, m, &cBinop_PINRUXRI_sendMessage);
}

void Heavy_AmanitaV04::cReceive_cbclIxNP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vsFzntW8_sendMessage(_c, 0, m);
  cMsg_ONvGAnPg_sendMessage(_c, 0, m);
  cMsg_PE6ZC4oF_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_4G3sjGQx_sendMessage);
}

void Heavy_AmanitaV04::cReceive_nEiajomn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_snuv6hXl_sendMessage);
  cMsg_gM7RKNm0_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cReceive_NBIqFN0o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_E2FnTN70, HV_BINOP_MULTIPLY, 0, m, &cBinop_E2FnTN70_sendMessage);
}

void Heavy_AmanitaV04::cReceive_m5wLM0bt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wG1Qw6QJ_sendMessage(_c, 0, m);
  cMsg_WX3NsDnK_sendMessage(_c, 0, m);
  cMsg_WcpbLPcK_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_0D3GH1UM_sendMessage);
}

void Heavy_AmanitaV04::cReceive_sLHc7Xsv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_P77R1msX_sendMessage);
  cMsg_F5RxbbFW_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cReceive_yESzyihM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PgzwpbDw, HV_BINOP_MULTIPLY, 0, m, &cBinop_PgzwpbDw_sendMessage);
}

void Heavy_AmanitaV04::cReceive_t3ePwvDU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_LFBBVYMu_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_jjHFdUAz_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_eTZlQh2K_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_7iNihtn3_sendMessage);
}

void Heavy_AmanitaV04::cReceive_rlKTUYTA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_LxhRT504_sendMessage);
  cMsg_JdLOl17c_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cReceive_2CH3D7HH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H4mhJ3AF, HV_BINOP_MULTIPLY, 0, m, &cBinop_H4mhJ3AF_sendMessage);
}

void Heavy_AmanitaV04::cReceive_IWkMNJrU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_PHf849YS_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ZkDGylwo_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ZUTVLLab_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_OheNfvaL_sendMessage);
}

void Heavy_AmanitaV04::cReceive_QD1xEw5h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_46jhsARd_sendMessage);
  cMsg_ExZ3aMYM_sendMessage(_c, 0, m);
}

void Heavy_AmanitaV04::cReceive_e9OaTdGs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_fk2ybKK0, 0, m);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_qfWlr240, 0, m);
}

void Heavy_AmanitaV04::cReceive_z3V0zzGs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_yXfTZSTS, m);
}

void Heavy_AmanitaV04::cReceive_AlmJlQyT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_WHq2mEOj_sendMessage);
}



/*
 * Code for expr~ implementation
 * Write out the generic implementation code
 */

 // per class code

 // per object code


/*
 * Context Process Implementation
 */

int Heavy_AmanitaV04::process(float **inputBuffers, float **outputBuffers, int n) {
  while (hLp_hasData(&inQueue)) {
    hv_uint32_t numBytes = 0;
    ReceiverMessagePair *p = reinterpret_cast<ReceiverMessagePair *>(hLp_getReadBuffer(&inQueue, &numBytes));
    hv_assert(numBytes >= sizeof(ReceiverMessagePair));
    scheduleMessageForReceiver(p->receiverHash, &p->msg);
    hLp_consume(&inQueue);
  }

  sendBangToReceiver(0xDD21C0EB); // send to __hv_bang~ on next cycle
  const int n4 = n & ~HV_N_SIMD_MASK; // ensure that the block size is a multiple of HV_N_SIMD

  // temporary signal vars
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5, Bf6, Bf7, Bf8;
  hv_bufferi_t Bi0, Bi1;

  // input and output vars
  hv_bufferf_t O0, O1;
  hv_bufferf_t I0, I1;

  // declare and init the zero buffer
  hv_bufferf_t ZERO; __hv_zero_f(VOf(ZERO));

  hv_uint32_t nextBlock = blockStartTimestamp;
  for (int n = 0; n < n4; n += HV_N_SIMD) {

    // process all of the messages for this block
    nextBlock += HV_N_SIMD;
    while (mq_hasMessageBefore(&mq, nextBlock)) {
      MessageNode *const node = mq_peek(&mq);
      node->sendMessage(this, node->let, node->m);
      mq_pop(&mq);
    }

    // load input buffers
    __hv_load_f(inputBuffers[0]+n, VOf(I0));
    __hv_load_f(inputBuffers[1]+n, VOf(I1));

    // zero output buffers
    __hv_zero_f(VOf(O0));
    __hv_zero_f(VOf(O1));

    // process all signal functions
    __hv_varread_f(&sVarf_2L3vyvfk, VOf(Bf0));
    __hv_varread_f(&sVarf_7hXfEjh0, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf0));
    __hv_varread_f(&sVarf_OXyolQkb, VOf(Bf2));
    __hv_add_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_QSzOMnb0, VOf(Bf0));
    __hv_del1_f(&sDel1_wocHPnaG, VIf(Bf0), VOf(Bf3));
    __hv_lt_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_samphold_f(&sSamphold_yzMRp8so, VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_x0fCsQUp, VOf(Bf2));
    __hv_line_f(&sLine_atojWmEO, VOf(Bf0));
    __hv_line_f(&sLine_Ilj4kQh6, VOf(Bf4));
    __hv_line_f(&sLine_fVnSiKLX, VOf(Bf5));
    __hv_line_f(&sLine_cWqwgQjz, VOf(Bf6));
    __hv_biquad_f(&sBiquad_s_pZw5JQDS, VIf(Bf3), VIf(Bf2), VIf(Bf0), VIf(Bf4), VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_line_f(&sLine_hpn0gkGI, VOf(Bf5));
    __hv_line_f(&sLine_XxWIh19O, VOf(Bf4));
    __hv_line_f(&sLine_ktLdH00s, VOf(Bf0));
    __hv_line_f(&sLine_eizTBENW, VOf(Bf2));
    __hv_line_f(&sLine_0WlYyFat, VOf(Bf3));
    __hv_biquad_f(&sBiquad_s_UFJJ9VwH, VIf(Bf6), VIf(Bf5), VIf(Bf4), VIf(Bf0), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_YuwTobX4, VOf(Bf2));
    __hv_line_f(&sLine_iSaedkRY, VOf(Bf0));
    __hv_line_f(&sLine_o1Tg2NUq, VOf(Bf4));
    __hv_line_f(&sLine_YIECTLaV, VOf(Bf5));
    __hv_line_f(&sLine_wejbbLv2, VOf(Bf6));
    __hv_biquad_f(&sBiquad_s_YVg7m7wW, VIf(Bf3), VIf(Bf2), VIf(Bf0), VIf(Bf4), VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_line_f(&sLine_nEvZ96O4, VOf(Bf5));
    __hv_line_f(&sLine_2uXzu9ni, VOf(Bf4));
    __hv_line_f(&sLine_Dra6gunK, VOf(Bf0));
    __hv_line_f(&sLine_q9UI8WNn, VOf(Bf2));
    __hv_line_f(&sLine_tawZETvk, VOf(Bf3));
    __hv_biquad_f(&sBiquad_s_Uuz8ctfb, VIf(Bf6), VIf(Bf5), VIf(Bf4), VIf(Bf0), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_h0ZC3RrL, VOf(Bf2));
    __hv_line_f(&sLine_UYLJECgu, VOf(Bf0));
    __hv_line_f(&sLine_qM7OkhPz, VOf(Bf4));
    __hv_line_f(&sLine_dYMIG95W, VOf(Bf5));
    __hv_line_f(&sLine_MVSHHN5F, VOf(Bf6));
    __hv_biquad_f(&sBiquad_s_om0ETsIq, VIf(Bf3), VIf(Bf2), VIf(Bf0), VIf(Bf4), VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_line_f(&sLine_46dCWaFd, VOf(Bf5));
    __hv_line_f(&sLine_bPlvZ9dZ, VOf(Bf4));
    __hv_line_f(&sLine_7d43dq8t, VOf(Bf0));
    __hv_line_f(&sLine_1zr9HiDQ, VOf(Bf2));
    __hv_line_f(&sLine_NWMZwyWt, VOf(Bf3));
    __hv_biquad_f(&sBiquad_s_xF8He5kO, VIf(Bf6), VIf(Bf5), VIf(Bf4), VIf(Bf0), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf3), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf2), VIf(Bf0), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_fma_f(VIf(Bf2), VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_div_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_tabwrite_f(&sTabwrite_Czd0K66U, VIf(Bf0));
    __hv_varread_f(&sVarf_OCX5mggz, VOf(Bf0));
    __hv_varread_f(&sVarf_9d0eVPMw, VOf(Bf3));
    __hv_add_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_aLWyQyfV, VOf(Bf3));
    __hv_del1_f(&sDel1_gPjrd0pY, VIf(Bf3), VOf(Bf0));
    __hv_lt_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_samphold_f(&sSamphold_JY0EQW55, VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_tIRhsB7g, VOf(Bf1));
    __hv_line_f(&sLine_res0tOOd, VOf(Bf3));
    __hv_line_f(&sLine_I3FNyOlU, VOf(Bf4));
    __hv_line_f(&sLine_fkUC3JDx, VOf(Bf5));
    __hv_line_f(&sLine_zMgtDtoQ, VOf(Bf2));
    __hv_biquad_f(&sBiquad_s_C2x4ae5Z, VIf(Bf0), VIf(Bf1), VIf(Bf3), VIf(Bf4), VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_JTCWjQpu, VOf(Bf5));
    __hv_line_f(&sLine_8VgwPw5L, VOf(Bf4));
    __hv_line_f(&sLine_se2nl7RS, VOf(Bf3));
    __hv_line_f(&sLine_4RkCnlBA, VOf(Bf1));
    __hv_line_f(&sLine_Zurr6Tlx, VOf(Bf0));
    __hv_biquad_f(&sBiquad_s_wyWoUDHy, VIf(Bf2), VIf(Bf5), VIf(Bf4), VIf(Bf3), VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_j66S4DIF, VOf(Bf1));
    __hv_line_f(&sLine_jz5I4u27, VOf(Bf3));
    __hv_line_f(&sLine_3cDRsj7r, VOf(Bf4));
    __hv_line_f(&sLine_InVH5702, VOf(Bf5));
    __hv_line_f(&sLine_nAUCvobe, VOf(Bf2));
    __hv_biquad_f(&sBiquad_s_84aWd8v7, VIf(Bf0), VIf(Bf1), VIf(Bf3), VIf(Bf4), VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_NqE7ZDTP, VOf(Bf5));
    __hv_line_f(&sLine_r4SxPXCz, VOf(Bf4));
    __hv_line_f(&sLine_xcknOm8v, VOf(Bf3));
    __hv_line_f(&sLine_5IC87hpp, VOf(Bf1));
    __hv_line_f(&sLine_JGpKqxxm, VOf(Bf0));
    __hv_biquad_f(&sBiquad_s_8iRBIzv2, VIf(Bf2), VIf(Bf5), VIf(Bf4), VIf(Bf3), VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_KNTgTv69, VOf(Bf1));
    __hv_line_f(&sLine_3HSGtFMu, VOf(Bf3));
    __hv_line_f(&sLine_EsuFj9dL, VOf(Bf4));
    __hv_line_f(&sLine_lU4SHAKq, VOf(Bf5));
    __hv_line_f(&sLine_fOcjv85L, VOf(Bf2));
    __hv_biquad_f(&sBiquad_s_Mee24zVM, VIf(Bf0), VIf(Bf1), VIf(Bf3), VIf(Bf4), VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_2ytgXHah, VOf(Bf5));
    __hv_line_f(&sLine_MdHocvBn, VOf(Bf4));
    __hv_line_f(&sLine_Fz1lvyl5, VOf(Bf3));
    __hv_line_f(&sLine_uZ6EjM7R, VOf(Bf1));
    __hv_line_f(&sLine_Q6HkJ08S, VOf(Bf0));
    __hv_biquad_f(&sBiquad_s_5A7qPvOd, VIf(Bf2), VIf(Bf5), VIf(Bf4), VIf(Bf3), VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf1));
    __hv_var_k_f(VOf(Bf3), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf1), VIf(Bf3), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_fma_f(VIf(Bf1), VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_div_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_tabwrite_f(&sTabwrite_aHKdomwd, VIf(Bf3));
    __hv_varread_f(&sVarf_6fho1ydH, VOf(Bf3));
    __hv_varread_f(&sVarf_RNfjZS9V, VOf(Bf0));
    __hv_varread_f(&sVarf_sujd5J8R, VOf(Bf4));
    __hv_neg_f(VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_qB5feYvx, VOf(Bf4));
    __hv_mul_f(VIf(Bf0), VIf(Bf4), VOf(Bf1));
    __hv_fma_f(VIf(Bf3), VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_yXfTZSTS, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf1));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf0), VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_varwrite_f(&sVarf_OCX5mggz, VIf(Bf1));
    __hv_varread_f(&sVarf_9tcdiXWk, VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(I1), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(I0), VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_hVGY7xbv, VOf(Bf5));
    __hv_mul_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(I0), VIf(Bf4), VIf(Bf5), VOf(Bf0));
    __hv_varwrite_f(&sVarf_9d0eVPMw, VIf(Bf0));
    __hv_fma_f(VIf(I1), VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varwrite_f(&sVarf_2L3vyvfk, VIf(Bf5));
    __hv_line_f(&sLine_Xa6SpYWp, VOf(Bf5));
    __hv_varread_f(&sVarf_fKrjH0uD, VOf(Bf4));
    __hv_phasor_k_f(&sPhasor_fk2ybKK0, VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_abs_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf7), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf8), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf6), VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf0), VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_sample_f(this, &sSample_C5C5GMyE, VIf(Bf3), &sSample_C5C5GMyE_sendMessage);
    __hv_line_f(&sLine_e7Ujc4Wm, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_tabhead_f(&sTabhead_3bXgIFW3, VOf(Bf5));
    __hv_var_k_f_r(VOf(Bf7), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_OnqtGO50, VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_YRrphA6i, VOf(Bf3));
    __hv_min_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf5));
    __hv_max_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_floor_f(VIf(Bf5), VOf(Bf7));
    __hv_varread_f(&sVarf_2v1zuXlZ, VOf(Bf3));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_2LPO3GE3, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_igqTS9WR, VIi(Bi0), VOf(Bf3));
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf0));
    __hv_sub_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf0), VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_6fho1ydH, VIf(Bf3));
    __hv_phasor_k_f(&sPhasor_qfWlr240, VOf(Bf3));
    __hv_var_k_f(VOf(Bf7), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_abs_f(VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf3), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf7), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf7), VIf(Bf7), VOf(Bf3));
    __hv_mul_f(VIf(Bf7), VIf(Bf3), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf8), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf0), VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf3), VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_sample_f(this, &sSample_pJjCzAVx, VIf(Bf7), &sSample_pJjCzAVx_sendMessage);
    __hv_line_f(&sLine_x1PSSFYg, VOf(Bf7));
    __hv_line_f(&sLine_UIVXe1oU, VOf(Bf5));
    __hv_fma_f(VIf(Bf4), VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_tabhead_f(&sTabhead_SpTSDUJR, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf4), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_Tmv896k0, VOf(Bf7));
    __hv_mul_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_UBpYi6Xt, VOf(Bf5));
    __hv_min_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf4));
    __hv_varread_f(&sVarf_PZtrrbNA, VOf(Bf5));
    __hv_zero_f(VOf(Bf3));
    __hv_lt_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_and_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_cast_fi(VIf(Bf3), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_t6gU4Bj0, VIi(Bi1), VOf(Bf3));
    __hv_tabread_if(&sTabread_l6CKdsGO, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf3));
    __hv_sub_f(VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf3), VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varwrite_f(&sVarf_RNfjZS9V, VIf(Bf5));
    __hv_varread_f(&sVarf_lZHTWdOr, VOf(Bf5));
    __hv_mul_f(VIf(I0), VIf(Bf5), VOf(Bf5));
    sEnv_process(this, &sEnv_2WpaXiVp, VIf(Bf5), &sEnv_2WpaXiVp_sendMessage);
    __hv_line_f(&sLine_29qiZpXI, VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_div_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_varwrite_f(&sVarf_AkVyXzdY, VIf(Bf5));
    __hv_varread_f(&sVarf_73fUxEa9, VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 19904.0f, 19904.0f, 19904.0f, 19904.0f, 19904.0f, 19904.0f, 19904.0f, 19904.0f);
    __hv_var_k_f(VOf(Bf3), 24000.0f, 24000.0f, 24000.0f, 24000.0f, 24000.0f, 24000.0f, 24000.0f, 24000.0f);
    __hv_fms_f(VIf(Bf5), VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_neg_f(VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_syouMPmx, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_phasor_f(&sPhasor_yP6CC4U3, VIf(Bf4), VOf(Bf4));
    __hv_varwrite_f(&sVarf_aLWyQyfV, VIf(Bf4));
    __hv_varread_f(&sVarf_BzCifJdr, VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 19904.0f, 19904.0f, 19904.0f, 19904.0f, 19904.0f, 19904.0f, 19904.0f, 19904.0f);
    __hv_var_k_f(VOf(Bf5), 24000.0f, 24000.0f, 24000.0f, 24000.0f, 24000.0f, 24000.0f, 24000.0f, 24000.0f);
    __hv_fms_f(VIf(Bf4), VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_neg_f(VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_uMrg2Is4, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_phasor_f(&sPhasor_rPWSw8Wd, VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_QSzOMnb0, VIf(Bf3));
    __hv_varread_f(&sVarf_F6O4L72L, VOf(Bf3));
    __hv_varread_i(&sVari_aLj7r7A9, VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 16807, 16807, 16807, 16807, 16807, 16807, 16807, 16807);
    __hv_mul_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_cast_if(VIi(Bi1), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f);
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varwrite_i(&sVari_aLj7r7A9, VIi(Bi1));
    __hv_varread_f(&sVarf_BxwREdfz, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_HPeIbm8g, VOf(Bf4));
    __hv_rpole_f(&sRPole_aSVpdioe, VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_DuG3puRh, VOf(Bf5));
    __hv_rpole_f(&sRPole_bgU0aRG7, VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_8XRQ8W91, VIf(Bf5), VOf(Bf7));
    __hv_mul_f(VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_9tQCKPbZ, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_nlmkClI6, VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 0.75f, 0.75f, 0.75f, 0.75f, 0.75f, 0.75f, 0.75f, 0.75f);
    __hv_min_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), -0.75f, -0.75f, -0.75f, -0.75f, -0.75f, -0.75f, -0.75f, -0.75f);
    __hv_max_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_UkcYMfwf, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_7hXfEjh0, VIf(Bf3));
    __hv_add_f(VIf(Bf1), VIf(Bf2), VOf(Bf1));
    __hv_varwrite_f(&sVarf_F6O4L72L, VIf(Bf1));
    __hv_varwrite_f(&sVarf_OXyolQkb, VIf(Bf2));
    __hv_varread_f(&sVarf_6fho1ydH, VOf(Bf2));
    __hv_varread_f(&sVarf_FS3OckOJ, VOf(Bf1));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_AkVyXzdY, VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf1));
    __hv_line_f(&sLine_cdGIm0CJ, VOf(Bf3));
    __hv_zero_f(VOf(Bf4));
    __hv_max_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_log2_f(VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f);
    __hv_var_k_f(VOf(Bf5), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_fma_f(VIf(Bf4), VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_div_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_9d0eVPMw, VOf(Bf3));
    __hv_varread_f(&sVarf_trlisMSF, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf1), VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf5));
    __hv_var_k_f(VOf(Bf1), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf5), VIf(Bf1), VOf(Bf3));
    __hv_var_k_f(VOf(Bf7), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_fma_f(VIf(Bf5), VIf(Bf7), VIf(Bf1), VOf(Bf1));
    __hv_div_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf4), 0.49f, 0.49f, 0.49f, 0.49f, 0.49f, 0.49f, 0.49f, 0.49f);
    __hv_min_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf1), -0.49f, -0.49f, -0.49f, -0.49f, -0.49f, -0.49f, -0.49f, -0.49f);
    __hv_max_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf1), VIf(O0), VOf(O0));
    __hv_varread_f(&sVarf_RNfjZS9V, VOf(Bf1));
    __hv_varread_f(&sVarf_iuXikdsW, VOf(Bf4));
    __hv_mul_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_wwckSs2Q, VOf(Bf4));
    __hv_zero_f(VOf(Bf1));
    __hv_max_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_log2_f(VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf4), 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f);
    __hv_var_k_f(VOf(Bf3), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_fma_f(VIf(Bf1), VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf4));
    __hv_max_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_div_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_2L3vyvfk, VOf(Bf4));
    __hv_varread_f(&sVarf_ZRBzrnyB, VOf(Bf1));
    __hv_mul_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf2), VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf3), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf1), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf1), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf2), VOf(Bf4));
    __hv_var_k_f(VOf(Bf7), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_fma_f(VIf(Bf3), VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_div_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 0.49f, 0.49f, 0.49f, 0.49f, 0.49f, 0.49f, 0.49f, 0.49f);
    __hv_min_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf2), -0.49f, -0.49f, -0.49f, -0.49f, -0.49f, -0.49f, -0.49f, -0.49f);
    __hv_max_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf2), VIf(O1), VOf(O1));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
    __hv_store_f(outputBuffers[1]+n, VIf(O1));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed

}

int Heavy_AmanitaV04::processInline(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(!(n4 & HV_N_SIMD_MASK)); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 2 channel(s)
  float **const bIn = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bIn[0] = inputBuffers+(0*n4);
  bIn[1] = inputBuffers+(1*n4);

  // define the heavy output buffer for 2 channel(s)
  float **const bOut = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bOut[0] = outputBuffers+(0*n4);
  bOut[1] = outputBuffers+(1*n4);

  int n = process(bIn, bOut, n4);
  return n;
}

int Heavy_AmanitaV04::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(n4 & ~HV_N_SIMD_MASK); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 2 channel(s), uninterleave
  float *const bIn = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));
  #if HV_SIMD_SSE || HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 a = _mm_load_ps(inputBuffers+i);                // LRLR
    __m128 b = _mm_load_ps(inputBuffers+4+i);              // LRLR
    __m128 x = _mm_shuffle_ps(a, b, _MM_SHUFFLE(2,0,2,0)); // LLLL
    __m128 y = _mm_shuffle_ps(a, b, _MM_SHUFFLE(3,1,3,1)); // RRRR
    _mm_store_ps(bIn+j, x);
    _mm_store_ps(bIn+n4+j, y);
  }
  #elif HV_SIMD_NEON
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4x2_t a = vld2q_f32(inputBuffers+i); // load and uninterleave
    vst1q_f32(bIn+j, a.val[0]);
    vst1q_f32(bIn+n4+j, a.val[1]);
  }
  #else // HV_SIMD_NONE
  for (int j = 0; j < n4; ++j) {
    bIn[0*n4+j] = inputBuffers[0+2*j];
    bIn[1*n4+j] = inputBuffers[1+2*j];
  }
  #endif

  // define the heavy output buffer for 2 channel(s)
  float *const bOut = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));

  int n = processInline(bIn, bOut, n4);

  // interleave the heavy output into the output buffer
  #if HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 8, i += 16) {
    __m256 x = _mm256_load_ps(bOut+j);    // LLLLLLLL
    __m256 y = _mm256_load_ps(bOut+n4+j); // RRRRRRRR
    __m256 a = _mm256_unpacklo_ps(x, y);  // LRLRLRLR
    __m256 b = _mm256_unpackhi_ps(x, y);  // LRLRLRLR
    _mm256_store_ps(outputBuffers+i, a);
    _mm256_store_ps(outputBuffers+8+i, b);
  }
  #elif HV_SIMD_SSE
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 x = _mm_load_ps(bOut+j);    // LLLL
    __m128 y = _mm_load_ps(bOut+n4+j); // RRRR
    __m128 a = _mm_unpacklo_ps(x, y);  // LRLR
    __m128 b = _mm_unpackhi_ps(x, y);  // LRLR
    _mm_store_ps(outputBuffers+i, a);
    _mm_store_ps(outputBuffers+4+i, b);
  }
  #elif HV_SIMD_NEON
  // https://community.arm.com/groups/processors/blog/2012/03/13/coding-for-neon--part-5-rearranging-vectors
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4_t x = vld1q_f32(bOut+j);
    float32x4_t y = vld1q_f32(bOut+n4+j);
    float32x4x2_t z = {x, y};
    vst2q_f32(outputBuffers+i, z); // interleave and store
  }
  #else // HV_SIMD_NONE
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < n4; ++j) {
      outputBuffers[i+2*j] = bOut[i*n4+j];
    }
  }
  #endif

  return n;
}
