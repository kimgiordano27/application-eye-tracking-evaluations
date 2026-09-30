/*
FUNCTION_NAME: FUN_05e64aa0
ENTRY_POINT: 05e64aa0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e64aa0(void *param_1,undefined4 param_2,ulong param_3,ulong param_4,ulong param_5,
                 float param_6,float param_7,float param_8,float param_9,long param_10,int param_11,
                 ulong param_12,undefined1 (*param_13) [16],ulong param_14)

{
  float fVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar19;
  undefined1 auVar18 [16];
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined8 local_490;
  undefined8 uStack_488;
  float local_480;
  float fStack_47c;
  float local_478;
  float local_474;
  float fStack_470;
  undefined1 auStack_468 [312];
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  float local_300;
  float local_2fc;
  undefined8 local_2f8;
  undefined8 local_298;
  long local_290 [2];
  int local_280;
  undefined4 local_27c;
  undefined4 local_274;
  float local_244;
  float local_240;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  undefined4 local_200;
  undefined1 auStack_1f8 [312];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  puVar2 = PTR_DAT_06312520;
  uVar11 = param_3;
  uVar25 = param_4;
  uVar30 = param_5;
  if ((DAT_066dc660 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(PTR_DAT_0631b2c0);
    FUN_02b3c81c(Method_OVRPlugin_RectiPair_set_Item__);
    FUN_02b3c81c(Method_OVRRaycaster_<>c_<GraphicRaycast>b__20_0__);
    FUN_02b3c81c(Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__);
    DAT_066dc660 = 1;
  }
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  memset(auStack_1f8,0,0x138);
  memset(&local_330,0,0x138);
  memset(auStack_468,0,0x138);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar7 = FUN_05c8e378(param_10,0,0);
  if ((uVar7 & 1) != 0) goto LAB_05e64cb0;
  if (param_10 == 0) goto LAB_05e652e4;
  FUN_05c3a46c(&local_480,param_10,0);
  fVar16 = DAT_010321cc;
  if ((DAT_010321cc <= local_474 + local_474) &&
     (FUN_05c3a46c(&local_480,param_10,0), fVar16 <= fStack_470 + fStack_470)) {
    uVar8 = FUN_05c3a704(param_10,0);
    lVar12 = *(long *)puVar2;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar12);
    }
    uVar7 = FUN_05c8e378(uVar8,0,0);
    if ((uVar7 & 1) == 0) {
      fVar13 = (float)FUN_05e6476c(param_10);
      fVar24 = (float)uVar11;
      uVar7 = uVar25;
      uVar31 = uVar30;
      fVar14 = (float)FUN_05e6481c(param_10);
      fVar28 = (float)uVar11;
      fVar16 = (float)uVar7;
      fVar19 = (float)uVar31;
      fVar22 = fVar16;
      fVar20 = fVar28;
      fVar29 = fVar19;
      fVar15 = (float)FUN_05c3a62c(param_10,0);
      if (DAT_066c29d4 == '\0') {
        FUN_02b3c81c(PTR_DAT_0631b2c0);
        DAT_066c29d4 = '\x01';
      }
      puVar2 = PTR_DAT_0631b2c0;
      fVar1 = DAT_01031cf4;
      uVar8 = **(undefined8 **)(*(long *)PTR_DAT_0631b2c0 + 0xb8);
      uVar35 = (*(undefined8 **)(*(long *)PTR_DAT_0631b2c0 + 0xb8))[1];
      fVar32 = (float)uVar8;
      fVar23 = fVar15 - fVar32;
      fVar27 = (float)((ulong)uVar8 >> 0x20);
      fVar26 = fVar20 - fVar27;
      fVar33 = (float)uVar35;
      fVar36 = fVar22 - fVar33;
      fVar34 = (float)((ulong)uVar35 >> 0x20);
      fVar37 = fVar29 - fVar34;
      if (fVar37 * fVar37 + fVar36 * fVar36 + fVar23 * fVar23 + fVar26 * fVar26 < DAT_01031cf4) {
        fVar32 = (float)*(undefined8 *)*param_13 - fVar32;
        fVar27 = (float)((ulong)*(undefined8 *)*param_13 >> 0x20) - fVar27;
        fVar33 = (float)*(undefined8 *)(*param_13 + 8) - fVar33;
        fVar34 = (float)((ulong)*(undefined8 *)(*param_13 + 8) >> 0x20) - fVar34;
        bVar3 = DAT_01031cf4 <=
                fVar34 * fVar34 + fVar33 * fVar33 + fVar32 * fVar32 + fVar27 * fVar27;
      }
      else {
        bVar3 = true;
      }
      bVar4 = true;
      if (((param_6 == 0.0) && (param_7 == 0.0)) && (param_8 == 1.0)) {
        if (param_11 == 1) {
          bVar3 = true;
        }
        bVar4 = param_9 != 1.0;
        if (((bVar4) || (bVar3)) || (((param_12 & 1) != 0 || ((param_14 & 1) != 0))))
        goto LAB_05e64e4c;
        bVar3 = false;
LAB_05e64ebc:
        uVar7 = uVar7 & 0xffffffff;
        uVar31 = uVar31 & 0xffffffff;
        uVar11 = uVar11 & 0xffffffff;
      }
      else {
LAB_05e64e4c:
        uVar9 = FUN_05c3abcc(param_10,0);
        if ((uVar9 & 1) == 0) {
          if (bVar4) goto LAB_05e64ee8;
          bVar3 = true;
          goto LAB_05e64ebc;
        }
        iVar5 = thunk_FUN_05c39edc(param_10,0);
        if (iVar5 == 0) {
          if (!bVar4) {
            bVar3 = true;
            goto LAB_05e64ebc;
          }
LAB_05e64ee8:
          bVar3 = true;
          uVar7 = (ulong)(uint)(param_8 * fVar16);
          uVar31 = (ulong)(uint)(param_9 * fVar19);
          fVar14 = fVar14 + param_6 * fVar16;
          uVar11 = (ulong)(uint)(fVar28 + param_7 * fVar19);
        }
        else {
          thunk_FUN_05c39edc(param_10,0);
          uVar7 = uVar7 & 0xffffffff;
          uVar31 = uVar31 & 0xffffffff;
          fVar14 = (float)FUN_05e648cc(fVar14,uVar11 & 0xffffffff,uVar7,uVar31);
          fVar16 = (float)uVar7;
          uVar7 = uVar7 & 0xffffffff;
          fVar19 = (float)uVar31;
          uVar31 = uVar31 & 0xffffffff;
          if (bVar4) goto LAB_05e64ee8;
          bVar3 = true;
          uVar11 = (ulong)(uint)fVar28;
        }
      }
      FUN_05e64484(param_2,param_3 & 0xffffffff,param_4 & 0xffffffff,param_5 & 0xffffffff,fVar14,
                   uVar11,uVar7,uVar31,param_10,param_11,&local_b0,&local_c0);
      FUN_05c3a46c(&local_480,param_10,0);
      fVar19 = (float)uVar30 / (fStack_470 + fStack_470);
      uVar8 = CONCAT44(fVar19,(float)uVar25 / (local_474 + local_474));
      FUN_05c3a46c(&local_480,param_10,0);
      fVar16 = local_480 - local_474;
      fVar14 = fStack_47c - fStack_470;
      FUN_05c3a46c(&local_480,param_10,0);
      fVar16 = (fVar13 - fVar16) / (local_474 + local_474);
      fVar19 = 1.0 - (fVar19 + (fVar24 - fVar14) / (fStack_470 + fStack_470));
      uStack_328 = uStack_a8;
      local_330 = local_b0;
      uStack_318 = uStack_b8;
      uStack_320 = local_c0;
      memset(&local_310,0,0x118);
      auVar18 = NEON_fmov(0x3f800000,4);
      local_298 = 0;
      uStack_308 = auVar18._8_8_;
      local_310 = auVar18._0_8_;
      lVar12 = param_10;
      local_300 = fVar16;
      local_2fc = fVar19;
      local_2f8 = uVar8;
      if (bVar3) {
        local_298 = FUN_05c3a704(param_10,0);
        lVar12 = 0;
      }
      thunk_FUN_02bb0e9c(&local_298);
      local_290[0] = lVar12;
      thunk_FUN_02bb0e9c(local_290,lVar12);
      FUN_05c3a554(param_10,0);
      plVar10 = (long *)FUN_05c3a704(param_10,0);
      if (plVar10 == (long *)0x0) {
LAB_05e652e4:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      iVar5 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
      plVar10 = (long *)FUN_05c3a704(param_10,0);
      if (plVar10 == (long *)0x0) goto LAB_05e652e4;
      iVar6 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
      local_244 = (float)iVar5;
      local_240 = (float)iVar6;
      local_27c = in_stack_00000000;
      local_274 = in_stack_00000008;
      local_280 = param_11;
      local_228 = fVar13;
      local_224 = fVar24;
      local_220 = (float)uVar25;
      local_21c = (float)uVar30;
      uVar11 = FUN_05c3abcc(param_10,0);
      local_200 = 2;
      if ((uVar11 & 1) == 0) {
        local_200 = 0;
      }
      memcpy(auStack_1f8,&local_330,0x138);
      uVar35 = *(undefined8 *)*param_13;
      uVar8 = *(undefined8 *)(*param_13 + 8);
      if (DAT_066c29d4 == '\0') {
        FUN_02b3c81c(PTR_DAT_0631b2c0);
        DAT_066c29d4 = '\x01';
      }
      uVar17 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
      uVar21 = (*(undefined8 **)(*(long *)puVar2 + 0xb8))[1];
      fVar16 = (float)uVar17;
      fVar24 = (float)uVar35 - fVar16;
      fVar19 = (float)((ulong)uVar17 >> 0x20);
      fVar28 = (float)((ulong)uVar35 >> 0x20) - fVar19;
      fVar13 = (float)uVar21;
      fVar23 = (float)uVar8 - fVar13;
      fVar14 = (float)((ulong)uVar21 >> 0x20);
      fVar32 = (float)((ulong)uVar8 >> 0x20) - fVar14;
      if (((fVar32 * fVar32 + fVar23 * fVar23 + fVar24 * fVar24 + fVar28 * fVar28 < fVar1) ||
          ((fVar20 - fVar14) * (fVar20 - fVar14) +
           (fVar22 - fVar13) * (fVar22 - fVar13) +
           (fVar15 - fVar16) * (fVar15 - fVar16) + (fVar29 - fVar19) * (fVar29 - fVar19) < fVar1))
         || (fVar24 = fVar15 - *(float *)*param_13, fVar28 = fVar29 - *(float *)(*param_13 + 4),
            fVar23 = fVar22 - *(float *)(*param_13 + 8),
            fVar32 = fVar20 - *(float *)(*param_13 + 0xc),
            fVar32 * fVar32 + fVar23 * fVar23 + fVar24 * fVar24 + fVar28 * fVar28 < fVar1)) {
        fVar16 = *(float *)*param_13 - fVar16;
        fVar13 = *(float *)(*param_13 + 8) - fVar13;
        fVar19 = *(float *)(*param_13 + 4) - fVar19;
        fVar14 = *(float *)(*param_13 + 0xc) - fVar14;
        if (fVar14 * fVar14 + fVar13 * fVar13 + fVar16 * fVar16 + fVar19 * fVar19 < fVar1) {
          *(float *)*param_13 = fVar15;
          *(float *)(*param_13 + 4) = fVar29;
          *(float *)(*param_13 + 8) = fVar22;
          *(float *)(*param_13 + 0xc) = fVar20;
        }
      }
      else {
        uVar8 = thunk_FUN_05c92238(param_10,0);
        local_480 = fVar15;
        fStack_47c = fVar29;
        local_478 = fVar22;
        local_474 = fVar20;
        uVar35 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                           (*(undefined8 *)puVar2,&local_480);
        uStack_488 = SUB168(*param_13,8);
        local_490 = SUB168(*param_13,0);
        uVar17 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                           (*(undefined8 *)puVar2,&local_490);
        uVar8 = FUN_04c0af6c(*(undefined8 *)Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__,
                             uVar8,uVar35,uVar17,0);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
        }
        FUN_05c41e34(uVar8,0);
      }
      memcpy(auStack_468,auStack_1f8,0x138);
      goto LAB_05e64cd0;
    }
    uVar8 = thunk_FUN_05c92238(param_10,0);
    uVar8 = FUN_04c0a5c4(*(undefined8 *)Method_OVRRaycaster_<>c_<GraphicRaycast>b__20_0__,uVar8,
                         *(undefined8 *)Method_OVRPlugin_RectiPair_set_Item__,0);
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
    }
    FUN_05c41e34(uVar8,0);
  }
LAB_05e64cb0:
  memset(&local_330,0,0x138);
  memset(auStack_468,0,0x138);
LAB_05e64cd0:
  memcpy(param_1,auStack_468,0x138);
  return;
}


