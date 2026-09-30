/*
FUNCTION_NAME: FUN_068aad9c
ENTRY_POINT: 068aad9c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_068aad9c(long param_1,int param_2)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined4 uStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  float local_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  float local_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  byte local_b4 [4];
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((DAT_075590ee & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_119_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_17_0_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    DAT_075590ee = 1;
  }
  local_a8 = 0.0;
  local_b0 = 0;
  local_b4[0] = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_74 = 0.0;
  uStack_80 = 0;
  uStack_68 = 0;
  fStack_70 = 0.0;
  fStack_6c = 0.0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_bc = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_c4 = 0.0;
  uStack_d0 = 0;
  uStack_ec = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_f4 = 0.0;
  uStack_100 = 0;
  if ((param_2 != 2) && (*(char *)(param_1 + 0x29d) == '\0')) {
    return;
  }
  if (*(int *)(param_1 + 0x2e0) == 1) {
    return;
  }
  plVar5 = (long *)FUN_068a9eec(param_1);
  puVar1 = OVRPlugin_OVRP_1_119_0_TypeInfo;
  if (plVar5 == (long *)0x0) goto LAB_068ab170;
  lVar7 = *plVar5;
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  uVar13 = *(undefined8 *)(param_1 + 0x2e8);
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  uVar14 = *(undefined8 *)(param_1 + 0x2f0);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)OVRPlugin_OVRP_1_119_0_TypeInfo) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
        goto LAB_068aaeb8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)OVRPlugin_OVRP_1_119_0_TypeInfo,2);
LAB_068aaeb8:
  bVar2 = (*(code *)*puVar6)(plVar5,uVar11,uVar13,uVar14,puVar6[1]);
  bVar3 = FUN_068ab51c(param_1,&local_a0);
  bVar2 = bVar2 & 1;
  *(undefined1 *)(param_1 + 0x340) = 0;
  bVar12 = bVar3 & 1 | bVar2;
  *(byte *)(param_1 + 0x330) = bVar12;
  if (bVar12 == 0) {
    return;
  }
  lVar7 = *(long *)puVar1;
  *(undefined4 *)(param_1 + 0x2e0) = 2;
  lVar8 = *plVar5;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_068aaf50;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_031c0d08(plVar5,lVar7,0);
LAB_068aaf50:
  puVar6 = (undefined8 *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  local_b0 = *puVar6;
  local_a8 = *(float *)(puVar6 + 1);
  if ((bVar3 & 1 & bVar2) == 0) {
LAB_068ab04c:
    bVar4 = 0;
    bVar12 = 0;
    if ((bVar3 & 1) == 0) goto LAB_068ab034;
LAB_068ab054:
    fVar15 = local_74 - (float)local_b0;
    fVar16 = fStack_70 - (float)((ulong)local_b0 >> 0x20);
    fVar15 = fVar15 * fVar15 + fVar16 * fVar16 + (fStack_6c - local_a8) * (fStack_6c - local_a8);
    bVar12 = bVar4;
  }
  else {
    if (*(long *)(param_1 + 0x2f0) == 0) goto LAB_068ab170;
    FUN_0430d770(&local_13c,*(long *)(param_1 + 0x2f0),0,
                 *(undefined8 *)OVRPlugin_OVRP_1_17_0_TypeInfo);
    uStack_d8 = uStack_134;
    local_e0 = local_13c;
    uStack_c8 = uStack_124;
    uStack_d0 = local_12c;
    uStack_bc = uStack_118;
    local_c4 = fStack_120;
    uStack_c0 = uStack_11c;
    uVar11 = FUN_06a634a0(&local_e0,0);
    puVar1 = PTR_DAT_070c1b68;
    if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)PTR_DAT_070c1b68);
    }
    uVar9 = FUN_069d69b8(uVar11,0,0);
    uVar11 = local_a0;
    if ((uVar9 & 1) == 0) goto LAB_068ab04c;
    lVar7 = FUN_06a634a0(&local_e0,0);
    if (lVar7 == 0) goto LAB_068ab170;
    uVar13 = FUN_069d3b50(lVar7,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)puVar1);
    }
    bVar4 = FUN_069d8404(uVar11,uVar13,0);
    bVar12 = bVar4;
    if ((bVar3 & 1) != 0) goto LAB_068ab054;
LAB_068ab034:
    fVar15 = 3.4028235e+38;
  }
  if (bVar2 == 0) {
    fVar16 = 3.4028235e+38;
  }
  else {
    if (*(long *)(param_1 + 0x2f0) == 0) {
LAB_068ab170:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_0430d770(&local_13c,*(long *)(param_1 + 0x2f0),0,
                 *(undefined8 *)OVRPlugin_OVRP_1_17_0_TypeInfo);
    uStack_108 = uStack_134;
    local_110 = local_13c;
    uStack_f8 = uStack_124;
    uStack_100 = local_12c;
    uStack_ec = uStack_118;
    local_f4 = fStack_120;
    uStack_f0 = uStack_11c;
    fVar16 = (float)FUN_06a6354c(&local_110,0);
    fVar17 = (float)local_12c - local_b0._4_4_;
    fVar16 = (fVar16 - (float)local_b0) * (fVar16 - (float)local_b0) + fVar17 * fVar17 +
             (fStack_120 - local_a8) * (fStack_120 - local_a8);
  }
  local_b4[0] = bVar3;
  if ((((bVar12 | bVar3 ^ 0xff) & 1) == 0) && (local_b4[0] = bVar2 ^ 1, fVar15 < fVar16)) {
    local_b4[0] = 1;
  }
  local_b4[0] = local_b4[0] & 1;
  if ((bVar2 != 0) && ((bVar3 & (bVar12 ^ 1) & fVar15 <= fVar16) == 0)) {
    FUN_068ab618(fVar15,param_1,&local_b0,bVar3 & 1,local_b4);
  }
  if (local_b4[0] != 0) {
    FUN_068ab804(param_1,&local_a0);
  }
  return;
}


