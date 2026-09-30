/*
FUNCTION_NAME: FUN_06aff92c
ENTRY_POINT: 06aff92c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_06aff92c(void *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4 [16],
                 float param_5,float param_6,float param_7,float param_8,float param_9,long param_10
                 ,int param_11,int param_12,byte param_13,float *param_14,byte param_15)

{
  byte bVar1;
  bool bVar2;
  float fVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  float *pfVar13;
  undefined8 *puVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  ulong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  ulong uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 local_4b8;
  undefined8 local_480;
  undefined8 uStack_478;
  float local_468;
  float fStack_464;
  float local_460;
  float local_45c;
  float local_458;
  undefined1 auStack_450 [304];
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  undefined1 auStack_2e0 [72];
  undefined8 local_298;
  long local_290 [3];
  int local_278;
  undefined8 local_274;
  undefined8 local_26c;
  undefined4 local_244;
  float local_23c;
  float local_238;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  undefined4 local_1f8;
  undefined1 auStack_1f0 [304];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  puVar4 = PTR_DAT_06f6d618;
  uVar30 = param_4._8_8_;
  auVar27._0_8_ = param_4._0_8_;
  uVar9 = param_3;
  fVar35 = param_5;
  if ((DAT_073ab395 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d668);
    FUN_02fe925c(PTR_DAT_06f6d618);
    FUN_02fe925c(PTR_DAT_06f9b518);
    FUN_02fe925c(PTR_DAT_06f6dbd8);
    FUN_02fe925c(OVRPlugin_OVRP_1_5_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_60_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_61_0_TypeInfo);
    DAT_073ab395 = 1;
  }
  fVar36 = (float)uVar9;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  memset(auStack_1f0,0,0x130);
  memset(&local_320,0,0x130);
  memset(auStack_450,0,0x130);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar8 = FUN_068f9b78(param_10,0,0);
  if ((uVar8 & 1) == 0) {
    if (param_10 == 0) goto LAB_06b00178;
    FUN_06906d10(&local_468,param_10,0);
    fVar19 = DAT_01369a20;
    if ((DAT_01369a20 <= local_45c + local_45c) &&
       (FUN_06906d10(&local_468,param_10,0), fVar19 <= local_458 + local_458)) {
      uVar9 = FUN_06906ef4(param_10,0);
      lVar12 = *(long *)puVar4;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(lVar12);
      }
      uVar8 = FUN_068f9b78(uVar9,0,0);
      puVar4 = PTR_DAT_06f9b518;
      if ((uVar8 & 1) == 0) {
        if (param_12 == 1) {
          lVar12 = *(long *)PTR_DAT_06f9b518;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
            lVar12 = *(long *)puVar4;
          }
          uVar9 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x20);
          local_4b8 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
        }
        else {
          uVar9 = NEON_fmov(0x3f800000,4);
          local_4b8 = uVar9;
        }
        fVar15 = (float)FUN_06aff598(param_10);
        fVar22 = param_4._0_4_;
        fVar18 = fVar36;
        fVar20 = fVar35;
        uVar16 = FUN_06aff648(param_10);
        uVar23 = param_4._0_4_;
        fVar19 = fVar18;
        fVar28 = fVar20;
        fVar17 = (float)FUN_06906e58(param_10,0);
        fVar24 = param_4._0_4_;
        if (DAT_0738e665 == '\0') {
          FUN_02fe925c(PTR_DAT_06f6dbd8);
          DAT_0738e665 = '\x01';
        }
        puVar4 = PTR_DAT_06f6dbd8;
        fVar3 = DAT_01369900;
        pfVar13 = *(float **)(*(long *)PTR_DAT_06f6dbd8 + 0xb8);
        fVar31 = fVar17 - *pfVar13;
        fVar32 = fVar19 - pfVar13[1];
        fVar34 = fVar24 - pfVar13[2];
        fVar33 = fVar28 - pfVar13[3];
        if (fVar33 * fVar33 + fVar34 * fVar34 + fVar31 * fVar31 + fVar32 * fVar32 < DAT_01369900) {
          fVar32 = *param_14 - *pfVar13;
          fVar33 = param_14[1] - pfVar13[1];
          fVar34 = param_14[2] - pfVar13[2];
          fVar31 = param_14[3] - pfVar13[3];
          bVar5 = DAT_01369900 <=
                  fVar31 * fVar31 + fVar34 * fVar34 + fVar32 * fVar32 + fVar33 * fVar33;
        }
        else {
          bVar5 = true;
        }
        uVar21 = (ulong)(uint)fVar18;
        uVar8 = (ulong)uVar16;
        uVar29 = (ulong)(uint)fVar20;
        uVar25 = (ulong)uVar23;
        if (param_6 == 0.0) {
          bVar2 = param_9 != 1.0 || (param_7 != 0.0 || param_8 != 1.0);
        }
        else {
          bVar2 = true;
        }
        bVar1 = (param_11 == 1 | param_13 | param_15) & 1;
        if ((bVar5 || bVar1 != 0) || bVar2) {
          uVar8 = FUN_06907038(param_10,0);
          if (((uVar8 & 1) == 0) || (iVar6 = FUN_06907080(param_10,0), iVar6 == 0)) {
            uVar21 = (ulong)(uint)fVar18;
            uVar8 = (ulong)uVar16;
            uVar29 = (ulong)(uint)fVar20;
            uVar25 = (ulong)uVar23;
          }
          else {
            FUN_06907080(param_10,0);
            uVar21 = (ulong)(uint)fVar18;
            uVar29 = (ulong)(uint)fVar20;
            auVar26 = ZEXT416(uVar23);
            uVar8 = FUN_06aff6f8(uVar16,uVar21,auVar26,uVar29);
            uVar25 = auVar26._0_8_;
          }
        }
        if (bVar2) {
          fVar18 = (float)uVar25;
          uVar25 = (ulong)(uint)(param_8 * fVar18);
          uVar8 = (ulong)(uint)(param_6 * fVar18 + (float)uVar8);
          uVar21 = (ulong)(uint)(param_7 * (float)uVar29 + (float)uVar21);
          uVar29 = (ulong)(uint)(param_9 * (float)uVar29);
        }
        auVar27._8_8_ = uVar30;
        FUN_06aff1d8(param_2,param_3,auVar27,param_5,uVar8,uVar21,uVar25,uVar29,param_10,param_11,
                     &local_b0,&local_c0);
        FUN_06906d10(&local_468,param_10,0);
        fVar31 = fVar22 / (local_45c + local_45c);
        fVar32 = fVar35 / (local_458 + local_458);
        FUN_06906d10(&local_468,param_10,0);
        fVar18 = local_468 - local_45c;
        fVar20 = fStack_464 - local_458;
        FUN_06906d10(&local_468,param_10,0);
        fVar18 = (fVar15 - fVar18) / (local_45c + local_45c);
        fVar20 = 1.0 - (fVar32 + (fVar36 - fVar20) / (local_458 + local_458));
        memset(auStack_2e0,0,0xf0);
        auVar27 = NEON_fmov(0x3f800000,4);
        uStack_308 = uStack_b8;
        local_310 = local_c0;
        uStack_2f8 = auVar27._8_8_;
        uStack_300 = auVar27._0_8_;
        uStack_318 = uStack_a8;
        local_320 = local_b0;
        local_2f0 = fVar18;
        local_2ec = fVar20;
        local_2e8 = fVar31;
        local_2e4 = fVar32;
        if ((bVar5 || bVar1 != 0) || bVar2) {
          local_298 = FUN_06906ef4(param_10,0);
          local_290[0] = 0;
        }
        else {
          local_298 = 0;
          local_290[0] = param_10;
        }
        thunk_FUN_03048534(&local_298);
        thunk_FUN_03048534(local_290,local_290[0]);
        FUN_06906dbc(param_10,0);
        local_244 = auVar27._0_4_;
        plVar10 = (long *)FUN_06906ef4(param_10,0);
        if (plVar10 == (long *)0x0) {
LAB_06b00178:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        iVar6 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
        plVar10 = (long *)FUN_06906ef4(param_10,0);
        if (plVar10 == (long *)0x0) goto LAB_06b00178;
        iVar7 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
        local_23c = (float)iVar6;
        local_238 = (float)iVar7;
        local_274 = local_4b8;
        local_278 = param_11;
        local_26c = uVar9;
        local_220 = fVar15;
        local_21c = fVar36;
        local_218 = fVar22;
        local_214 = fVar35;
        uVar8 = FUN_06907038(param_10,0);
        local_1f8 = 2;
        if ((uVar8 & 1) == 0) {
          local_1f8 = 0;
        }
        memcpy(auStack_1f0,&local_320,0x130);
        fVar35 = *param_14;
        fVar36 = param_14[1];
        fVar18 = param_14[2];
        fVar20 = param_14[3];
        if (DAT_0738e665 == '\0') {
          FUN_02fe925c(PTR_DAT_06f6dbd8);
          DAT_0738e665 = '\x01';
        }
        pfVar13 = *(float **)(*(long *)puVar4 + 0xb8);
        fVar35 = fVar35 - *pfVar13;
        fVar36 = fVar36 - pfVar13[1];
        fVar18 = fVar18 - pfVar13[2];
        fVar20 = fVar20 - pfVar13[3];
        if (((fVar20 * fVar20 + fVar18 * fVar18 + fVar35 * fVar35 + fVar36 * fVar36 < fVar3) ||
            (fVar35 = fVar17 - *pfVar13, fVar36 = fVar28 - pfVar13[1], fVar18 = fVar24 - pfVar13[2],
            fVar20 = fVar19 - pfVar13[3],
            fVar20 * fVar20 + fVar18 * fVar18 + fVar35 * fVar35 + fVar36 * fVar36 < fVar3)) ||
           ((fVar19 - param_14[3]) * (fVar19 - param_14[3]) +
            (fVar24 - param_14[2]) * (fVar24 - param_14[2]) +
            (fVar17 - *param_14) * (fVar17 - *param_14) +
            (fVar28 - param_14[1]) * (fVar28 - param_14[1]) < fVar3)) {
          puVar14 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          uVar9 = *puVar14;
          uVar30 = puVar14[1];
          fVar35 = (float)*(undefined8 *)param_14 - (float)uVar9;
          fVar36 = (float)((ulong)*(undefined8 *)param_14 >> 0x20) - (float)((ulong)uVar9 >> 0x20);
          fVar18 = (float)*(undefined8 *)(param_14 + 2) - (float)uVar30;
          fVar20 = (float)((ulong)*(undefined8 *)(param_14 + 2) >> 0x20) -
                   (float)((ulong)uVar30 >> 0x20);
          if (fVar20 * fVar20 + fVar18 * fVar18 + fVar35 * fVar35 + fVar36 * fVar36 < fVar3) {
            *param_14 = fVar17;
            param_14[1] = fVar28;
            param_14[2] = fVar24;
            param_14[3] = fVar19;
          }
        }
        else {
          uVar9 = FUN_068fc8bc(param_10,0);
          local_468 = fVar17;
          fStack_464 = fVar28;
          local_460 = fVar24;
          local_45c = fVar19;
          uVar30 = thunk_FUN_0301043c(*(undefined8 *)puVar4,&local_468);
          uStack_478 = *(undefined8 *)(param_14 + 2);
          local_480 = *(undefined8 *)param_14;
          uVar11 = thunk_FUN_0301043c(*(undefined8 *)puVar4,&local_480);
          uVar9 = FUN_0597263c(*(undefined8 *)OVRPlugin_OVRP_1_61_0_TypeInfo,uVar9,uVar30,uVar11,0);
          if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d668);
          }
          FUN_068bdec0(uVar9,0);
        }
        memcpy(auStack_450,auStack_1f0,0x130);
        goto LAB_06affb5c;
      }
      uVar9 = FUN_068fc8bc(param_10,0);
      uVar9 = FUN_05971ec8(*(undefined8 *)OVRPlugin_OVRP_1_60_0_TypeInfo,uVar9,
                           *(undefined8 *)OVRPlugin_OVRP_1_5_0_TypeInfo,0);
      if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d668);
      }
      FUN_068bdec0(uVar9,0);
    }
  }
  memset(auStack_450,0,0x130);
LAB_06affb5c:
  memcpy(param_1,auStack_450,0x130);
  return;
}


