/*
FUNCTION_NAME: FUN_07030898
ENTRY_POINT: 07030898
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07030898(long param_1,long param_2,byte param_3,byte param_4,long param_5)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  char cVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  float fVar19;
  float in_s3;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  float local_1e0;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 uStack_1bc;
  undefined8 uStack_1a8;
  undefined1 local_1a0 [56];
  undefined8 uStack_168;
  float local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 *puStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined1 local_94 [4];
  undefined8 uVar20;
  
  puVar2 = OVRPlugin_OVRP_1_51_0_TypeInfo;
  if ((DAT_07eebddc & 1) == 0) {
    FUN_03642964(PTR_DAT_079fd888);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(OVRPlugin_OVRP_1_51_0_TypeInfo);
    FUN_03642964(
                UnityEngine_InputSystem_InputActionRebindingExtensions_<>c__DisplayClass25_0_TypeInfo
                );
    FUN_03642964(OVR_OpenVR_IVROverlay__GetOverlayFlags_TypeInfo);
    FUN_03642964(PTR_DAT_079ff4c8);
    DAT_07eebddc = 1;
  }
  puVar3 = PTR_DAT_079ff4c8;
  lVar7 = *(long *)puVar2;
  local_94[0] = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar7 = *(long *)puVar2;
  }
  FUN_06eaa264(local_94,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),0);
  local_120 = 0;
  puStack_118 = local_94;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  plVar8 = (long *)FUN_07030244(param_1,param_2);
  lVar7 = FUN_0702e180();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(char *)(lVar7 + 0x8c) == '\0') {
    cVar13 = *(char *)(lVar7 + 0x9c);
  }
  else {
    cVar13 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  fVar21 = *(float *)(lVar7 + 0xb4);
  fVar14 = (float)FUN_07173328(param_1,0);
  if (fVar14 <= fVar21) {
    fVar21 = fVar14;
  }
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar22 = 0;
  *(float *)(param_5 + 0x1a8) = fVar21;
  if ((cVar13 != '\0') &&
     (fVar14 = (float)UnityEngine_TextCore_LowLevel_FontEngine__GetAllMarkToBaseAdjustmentRecords_Injected
                                (param_1,0), fVar14 <= fVar21)) {
    uVar22 = *(undefined4 *)(param_5 + 0x1a8);
  }
  *(undefined4 *)(param_5 + 0x1a8) = uVar22;
  uVar9 = FUN_06fc2f3c(param_5,0);
  puVar3 = PTR_DAT_079fd888;
  puVar2 = PTR_DAT_079f4e28;
  if ((uVar9 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar9 = FUN_071c0684(param_2,0,0);
    if ((uVar9 & 1) == 0) {
      *(undefined4 *)(param_5 + 0xe8) = 0;
      *(undefined1 *)(param_5 + 0x184) = 1;
      *(undefined1 *)(param_5 + 0x1ac) = 0;
      cVar13 = DAT_07ed7a01;
      uVar1 = *(undefined2 *)(lVar7 + 0x44);
      *(undefined1 *)(param_5 + 0x13c) = 0;
      *(undefined8 *)(param_5 + 0x140) = *(undefined8 *)(param_5 + 0x134);
      *(undefined2 *)(param_5 + 400) = uVar1;
      *(undefined8 *)(param_5 + 0x148) = 0;
      if (cVar13 == '\0') {
        FUN_03642964(PTR_DAT_079f7f08);
        goto LAB_07030b34;
      }
      goto LAB_07030b3c;
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    iVar6 = *(int *)(param_2 + 0x2c);
    *(int *)(param_5 + 0xe8) = iVar6;
    if (iVar6 == 0) {
      bVar4 = true;
    }
    else {
      bVar4 = *(char *)(param_2 + 0x5a) != '\0';
    }
    *(bool *)(param_5 + 0x184) = bVar4;
    *(undefined1 *)(param_5 + 0x1ac) = *(undefined1 *)(param_2 + 0x4c);
    if (*(char *)(param_2 + 0x20) == '\0') {
      uVar22 = 0;
    }
    else {
      uVar22 = *(undefined4 *)(param_5 + 0x1a8);
    }
    *(undefined4 *)(param_5 + 0x1a8) = uVar22;
    bVar5 = FUN_0701af38(param_2,0);
    *(byte *)(param_5 + 400) = bVar5 & 1;
    bVar5 = FUN_0701afd4(param_2,0);
    puVar12 = (undefined4 *)(param_2 + 0x74);
    *(byte *)(param_5 + 0x191) = bVar5 & 1;
    *(undefined1 *)(param_5 + 0x13c) = *(undefined1 *)(param_2 + 0x5d);
    puVar11 = (undefined4 *)(param_2 + 0x70);
    uVar17 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_5 + 0x148) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_5 + 0x140) = uVar17;
    uVar17 = *(undefined8 *)(param_2 + 0x78);
  }
  else {
    lVar10 = *(long *)PTR_DAT_079fd888;
    *(undefined4 *)(param_5 + 0xe8) = 0;
    *(undefined1 *)(param_5 + 0x184) = 1;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    bVar5 = FUN_06f01f20(param_1,0);
    *(byte *)(param_5 + 0x1ac) = bVar5 & 1;
    cVar13 = DAT_07ed7a01;
    uVar1 = *(undefined2 *)(lVar7 + 0x44);
    *(undefined1 *)(param_5 + 0x13c) = 0;
    *(undefined8 *)(param_5 + 0x148) = 0;
    *(undefined8 *)(param_5 + 0x140) = *(undefined8 *)(param_5 + 0x134);
    *(undefined2 *)(param_5 + 400) = uVar1;
    if (cVar13 == '\0') {
      FUN_03642964(PTR_DAT_079f7f08);
LAB_07030b34:
      DAT_07ed7a01 = '\x01';
    }
LAB_07030b3c:
    uVar17 = 0;
    puVar11 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_079f7f08 + 0xb8) + 8);
    puVar12 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_079f7f08 + 0xb8) + 0xc);
  }
  uVar22 = *puVar11;
  uVar18 = *puVar12;
  *(undefined8 *)(param_5 + 0x158) = uVar17;
  *(long **)(param_5 + 0x1d8) = plVar8;
  *(undefined4 *)(param_5 + 0x150) = uVar22;
  *(undefined4 *)(param_5 + 0x154) = uVar18;
  thunk_FUN_036b7ad0(param_5 + 0x1d8,plVar8);
  if (*(int *)(*(long *)PTR_DAT_079ff4c8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  bVar5 = FUN_07035118(param_5);
  *(byte *)(param_5 + 0x192) = bVar5 & 1;
  *(byte *)(param_5 + 0x1e0) = param_3 & 1;
  *(byte *)(param_5 + 0x238) = param_4 & 1;
  uVar9 = FUN_06f5ac94(0);
  if ((uVar9 & 1) != 0) {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar9 = (**(code **)(*plVar8 + 0x2b8))(plVar8,*(undefined8 *)(*plVar8 + 0x2c0));
    if ((uVar9 & 1) != 0) {
      iVar6 = FUN_071742bc(param_1,0);
      bVar4 = iVar6 - 1U < 2 || iVar6 == 4;
      goto LAB_07030c70;
    }
  }
  bVar4 = false;
LAB_07030c70:
  iVar6 = *(int *)(param_5 + 0xe8);
  *(bool *)(param_5 + 0x194) = bVar4;
  *(byte *)(param_5 + 400) = *(byte *)(param_5 + 400) | bVar4;
  if (iVar6 == 1) {
    *(undefined1 *)(param_5 + 0x191) = 0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar9 = FUN_071c0684(param_2,0,0);
  puVar2 = PTR_DAT_079ff4c8;
  if ((uVar9 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_079ff4c8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_07035d48(param_5,param_2);
  }
  FUN_0717535c(&local_160,param_1,0);
  fVar21 = local_160;
  uStack_c8 = CONCAT44(uStack_150,uStack_154);
  local_d0 = CONCAT44(uStack_158,uStack_15c);
  uStack_b8 = CONCAT44(uStack_140,uStack_144);
  uVar17 = CONCAT44(uStack_148,local_14c);
  uVar20 = CONCAT44(uStack_138,local_13c);
  uStack_9c = uStack_128;
  local_c0 = uVar17;
  local_b0 = uVar20;
  if (iVar6 == 1) {
    uVar9 = FUN_07173b54(param_1,0);
    fVar19 = (float)uVar20;
    fVar14 = (float)uVar17;
    if ((uVar9 & 1) == 0) {
      fVar26 = *(float *)(param_5 + 300);
      fVar25 = *(float *)(param_5 + 0x130);
      fVar24 = *(float *)(param_5 + 0x134);
      fVar23 = *(float *)(param_5 + 0x138);
      fVar15 = (float)FUN_07174b30(param_1,0);
      if ((((fVar26 != fVar15) || (fVar25 != fVar14)) || (fVar24 != fVar19)) || (fVar23 != in_s3)) {
        FUN_0717535c(&local_160,param_1,0);
        fVar21 = local_160;
        fVar14 = (float)FUN_07173f08(param_1,0);
        fVar21 = (fVar21 * fVar14) / *(float *)(param_5 + 0x168);
      }
    }
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_07035e74(param_5 + 0x210);
  uVar9 = FUN_06fc36ec(param_5,0);
  puVar2 = OVR_OpenVR_IVROverlay__GetOverlayFlags_TypeInfo;
  if ((uVar9 & 1) == 0) {
    plVar8 = (long *)OVR_OpenVR_IVROverlay__GetOverlayFlags_TypeInfo;
    if (*(int *)(*(long *)OVR_OpenVR_IVROverlay__GetOverlayFlags_TypeInfo + 0xe4) == 0) {
      thunk_FUN_036a1978();
      plVar8 = (long *)OVR_OpenVR_IVROverlay__GetOverlayFlags_TypeInfo;
    }
  }
  else {
    plVar8 = (long *)
             UnityEngine_InputSystem_InputActionRebindingExtensions_<>c__DisplayClass25_0_TypeInfo;
    if (*(int *)(*(long *)
                  UnityEngine_InputSystem_InputActionRebindingExtensions_<>c__DisplayClass25_0_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_036a1978();
      plVar8 = (long *)
               UnityEngine_InputSystem_InputActionRebindingExtensions_<>c__DisplayClass25_0_TypeInfo
      ;
    }
  }
  uVar17 = **(undefined8 **)(*plVar8 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_07010e20(&local_160,param_5,uVar17,0);
  uStack_108 = CONCAT44(uStack_154,uStack_158);
  local_110 = CONCAT44(uStack_15c,local_160);
  uStack_f8 = CONCAT44(uStack_144,uStack_148);
  uStack_100 = CONCAT44(local_14c,uStack_150);
  uStack_e8 = CONCAT44(uStack_134,uStack_138);
  local_f0 = CONCAT44(local_13c,uStack_140);
  uStack_e0 = CONCAT44(uStack_12c,uStack_130);
  uStack_d8 = uStack_128;
  FUN_071751ac(&local_160,param_1,0);
  uStack_168 = uStack_128;
  uStack_218 = uStack_108;
  local_220 = local_110;
  uStack_208 = uStack_f8;
  uStack_210 = uStack_100;
  uStack_1f8 = uStack_e8;
  local_200 = local_f0;
  uStack_1e8 = uStack_d8;
  uStack_1f0 = uStack_e0;
  uStack_1a8 = uStack_9c;
  uStack_1bc = local_b0;
  uStack_1c4 = uStack_b8;
  local_1cc = local_c0;
  uStack_1d4 = uStack_c8;
  local_1dc = local_d0;
  local_1e0 = fVar21;
  FUN_06fc229c(param_5,local_1a0,&local_1e0,&local_220,0);
  uVar18 = (undefined4)local_c0;
  uVar22 = (undefined4)local_b0;
  lVar10 = FUN_071bd0d0(param_1,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar16 = FUN_071d0360(lVar10,0);
  *(undefined4 *)(param_5 + 0x1e4) = uVar16;
  *(undefined4 *)(param_5 + 0x1e8) = uVar22;
  *(undefined4 *)(param_5 + 0x1ec) = uVar18;
  uVar16 = UnityEngine_TextCore_LowLevel_LigatureSubstitutionRecord__op_Equality(param_1,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar16 = FUN_06f0146c(uVar16,0);
  *(undefined4 *)(param_5 + 0x1f0) = uVar16;
  *(undefined4 *)(param_5 + 500) = uVar22;
  *(undefined4 *)(param_5 + 0x1f8) = uVar18;
  *(float *)(param_5 + 0x1fc) = in_s3;
  *(undefined1 *)(param_5 + 0x1ad) = *(undefined1 *)(param_5 + 0x1ac);
  bVar5 = FUN_06fc3018(param_5,0);
  *(byte *)(param_5 + 0x195) = bVar5 & 1;
  if (*(char *)(param_5 + 0x1ac) == '\0') {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar7 + 0x110);
  }
  *(byte *)(param_5 + 399) = *(byte *)(param_5 + 399) & bVar5;
  FUN_06eaa270(local_94,0);
  return;
}


