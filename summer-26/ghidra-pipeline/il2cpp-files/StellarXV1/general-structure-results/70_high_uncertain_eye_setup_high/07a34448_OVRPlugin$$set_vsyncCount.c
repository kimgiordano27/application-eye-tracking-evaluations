/*
FUNCTION_NAME: OVRPlugin$$set_vsyncCount
ENTRY_POINT: 07a34448
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRPlugin__set_vsyncCount(long param_1,float *param_2,undefined8 *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  float *pfVar14;
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uStack_16c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined8 uStack_20;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puVar4 = PTR_DAT_092b7110;
  if ((DAT_09895261 & 1) == 0) {
    FUN_04077588(PTR_DAT_092edde0);
    FUN_04077588(PTR_DAT_092f0420);
    FUN_04077588(PTR_DAT_092f0428);
    FUN_04077588(PTR_DAT_092b7110);
    DAT_09895261 = 1;
  }
  puVar5 = PTR_DAT_092edde0;
  uStack_20 = 0;
  fStack_18 = 0.0;
  uStack_14 = 0;
  uStack_8 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_88 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_40 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_90 = 0;
  uStack_b0 = 0;
  fStack_a8 = 0.0;
  uStack_a4 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_b4 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_089d9e40(&fStack_e0,0);
  uStack_20 = CONCAT44(fStack_dc,fStack_e0);
  fStack_18 = fStack_d8;
  uStack_14 = uStack_d4;
  FUN_089d9e40(&uStack_10c,0);
  FUN_089d9e40(&uStack_10c,0);
  *(ulong *)((long)param_3 + 0x14) = CONCAT44(uStack_f4,uStack_f8);
  *(ulong *)((long)param_3 + 0xc) = CONCAT44(uStack_fc,uStack_100);
  param_3[1] = CONCAT44(uStack_100,uStack_104);
  *param_3 = uStack_10c;
  lVar12 = *(long *)puVar5;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar12);
    lVar12 = *(long *)puVar5;
  }
  puVar6 = PTR_DAT_092f0428;
  puVar5 = PTR_DAT_09285d58;
  puVar4 = PTR_DAT_09285ae0;
  lVar10 = *(long *)(param_1 + 0x20);
  if (lVar10 != 0) {
    puVar13 = *(undefined4 **)(lVar12 + 0xb8);
    uStack_16c = 0;
    uStack_120 = *puVar13;
    uStack_124 = puVar13[1];
    iVar15 = 0;
    uStack_128 = puVar13[2];
    do {
      if (*(int *)(lVar10 + 0x18) <= iVar15) {
        return uStack_16c;
      }
      FUN_05b22228(&fStack_e0,lVar10,iVar15,*(undefined8 *)puVar6);
      uStack_48 = CONCAT44(uStack_d4,fStack_d8);
      uStack_50 = CONCAT44(fStack_dc,fStack_e0);
      uStack_40 = CONCAT44(uStack_cc,uStack_d0);
      lVar12 = *(long *)(param_1 + 0x20);
      uStack_38 = uStack_c8;
      uStack_2c = uStack_bc;
      uStack_34 = uStack_c4;
      uStack_30 = uStack_c0;
      if (lVar12 == 0) break;
      iVar2 = *(int *)(lVar12 + 0x18);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = (iVar15 + 1) / iVar2;
      }
      FUN_05b22228(&uStack_10c,lVar12,(iVar15 + 1) - iVar3 * iVar2,*(undefined8 *)puVar6);
      uStack_78 = CONCAT44(uStack_100,uStack_104);
      uStack_5c = uStack_e8;
      uVar9 = uStack_5c;
      uStack_60 = uStack_ec;
      uStack_70 = CONCAT44(uStack_f8,uStack_fc);
      uStack_5c._4_1_ = (char)((ulong)uStack_e8 >> 0x20);
      uStack_80 = uStack_10c;
      uStack_68 = uStack_f4;
      uStack_64 = uStack_f0;
      uStack_5c = uVar9;
      if (uStack_2c._4_1_ == '\0') {
        bVar1 = uStack_5c._4_1_ == '\0';
        if (bVar1) goto LAB_07a34620;
        goto LAB_07a34ad8;
      }
      if (uStack_5c._4_1_ == '\0') {
LAB_07a34620:
        if (*(long *)(param_1 + 0x20) == 0) break;
        if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) == 1) goto LAB_07a34634;
        FUN_07a35940(&fStack_e0,&uStack_50,param_4,0);
        uVar8 = uStack_d4;
        fVar24 = fStack_d8;
        fVar20 = fStack_dc;
        fVar7 = fStack_e0;
        FUN_07a35940(&fStack_e0,&uStack_80,param_4,0);
        uVar18 = uStack_d4;
        uVar22 = uStack_d0;
        fVar16 = (float)FUN_07a359dc(&uStack_50,param_4,0);
        fVar19 = fVar16;
        fVar29 = fVar20;
        fVar28 = fVar24;
        fVar25 = (float)FUN_07a34b20(fVar7);
        fVar26 = *param_2;
        fVar21 = param_2[1];
        fVar27 = param_2[2];
        fVar31 = param_2[3];
        fVar30 = param_2[4];
        fVar32 = param_2[5];
        if (DAT_09885627 == '\0') {
          FUN_04077588(puVar5);
          DAT_09885627 = '\x01';
        }
        fVar31 = fVar28 * fVar32 + fVar25 * fVar31 + fVar29 * fVar30;
        fVar32 = ABS(fVar31);
        if (fVar32 <= 0.0) {
          fVar32 = 0.0;
        }
        fVar23 = **(float **)(*(long *)puVar5 + 0xb8) * 8.0;
        fVar30 = fVar32 * DAT_01aecc74;
        if (fVar32 * DAT_01aecc74 <= fVar23) {
          fVar30 = fVar23;
        }
        if (fVar30 <= ABS(0.0 - fVar31)) {
          fVar28 = fVar28 * fVar27;
          fVar19 = -(fVar28 + fVar26 * fVar25 + fVar29 * fVar21) - fVar19;
          if (fVar19 / fVar31 <= 0.0) goto LAB_07a34ad8;
          uVar17 = UnityEngine_TextCore_Text_FontAsset__DestroyAtlasTextures(param_2,0);
          FUN_07a33df0(uVar17,param_1,&uStack_b4);
          fStack_18 = fVar24;
          uVar18 = FUN_07a34f0c(fVar7,fVar20,fVar24,fVar16,uVar18,uVar22);
          uStack_20 = CONCAT44(fVar20,uVar18);
          uStack_14 = FUN_089b8ef8(uVar8,0);
LAB_07a34a50:
          fVar7 = fStack_18;
          uVar8 = (undefined4)uStack_20;
          uVar18 = uStack_20._4_4_;
          if (*(int *)(*(long *)PTR_DAT_092edde0 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_07a260e4(uVar17,fVar19,fVar28,uVar8,uVar18,fVar7,&uStack_90,0);
          uVar11 = FUN_07a2d570(uStack_120,uStack_124,uStack_128,&uStack_90);
          if ((uVar11 & 1) != 0) {
            uStack_124 = uStack_90._4_4_;
            uStack_120 = (undefined4)uStack_90;
            uStack_128 = uStack_88;
            FUN_079e2784(param_3,&uStack_20,0);
            uStack_16c = 1;
          }
        }
      }
      else {
LAB_07a34634:
        FUN_07a35940(&fStack_e0,&uStack_50,param_4,0);
        fVar20 = fStack_d8;
        fVar7 = fStack_dc;
        fVar19 = fStack_e0;
        uStack_b0 = CONCAT44(fStack_dc,fStack_e0);
        fVar24 = param_2[3];
        fVar29 = param_2[4];
        fVar28 = param_2[5];
        fStack_a8 = fStack_d8;
        uStack_9c = uStack_cc;
        uStack_98 = uStack_c8;
        uStack_a4 = uStack_d4;
        uStack_a0 = uStack_d0;
        if (DAT_098854e7 == '\0') {
          FUN_04077588(puVar4);
          DAT_098854e7 = '\x01';
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        fVar16 = SQRT(fVar28 * fVar28 + fVar24 * fVar24 + fVar29 * fVar29);
        if (fVar16 <= DAT_01aecf88) {
          if (DAT_098854f1 == '\0') {
            FUN_04077588(PTR_DAT_09285d60);
            DAT_098854f1 = '\x01';
          }
          pfVar14 = *(float **)(*(long *)PTR_DAT_09285d60 + 0xb8);
          fVar24 = *pfVar14;
          fVar29 = pfVar14[1];
          fVar16 = pfVar14[2];
        }
        else {
          fVar24 = -fVar24 / fVar16;
          fVar29 = -fVar29 / fVar16;
          fVar16 = -fVar28 / fVar16;
        }
        fVar32 = *param_2;
        fVar25 = param_2[1];
        fVar28 = param_2[2];
        fVar27 = param_2[3];
        fVar31 = param_2[4];
        fVar26 = param_2[5];
        if (DAT_09885627 == '\0') {
          FUN_04077588(puVar5);
          DAT_09885627 = '\x01';
        }
        fVar26 = fVar16 * fVar26 + fVar24 * fVar27 + fVar29 * fVar31;
        fVar27 = ABS(fVar26);
        if (fVar27 <= 0.0) {
          fVar27 = 0.0;
        }
        fVar21 = **(float **)(*(long *)puVar5 + 0xb8) * 8.0;
        fVar31 = fVar27 * DAT_01aecc74;
        if (fVar27 * DAT_01aecc74 <= fVar21) {
          fVar31 = fVar21;
        }
        if (fVar31 <= ABS(0.0 - fVar26)) {
          fVar28 = fVar16 * fVar28 + fVar24 * fVar32 + fVar29 * fVar25;
          fVar19 = (fVar20 * fVar16 + fVar19 * fVar24 + fVar7 * fVar29) - fVar28;
          if (0.0 < fVar19 / fVar26) {
            uVar17 = UnityEngine_TextCore_Text_FontAsset__DestroyAtlasTextures(param_2,0);
            FUN_079e2784(&uStack_20,&uStack_b0,0);
            goto LAB_07a34a50;
          }
        }
      }
LAB_07a34ad8:
      lVar10 = *(long *)(param_1 + 0x20);
      iVar15 = iVar15 + 1;
    } while (lVar10 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


