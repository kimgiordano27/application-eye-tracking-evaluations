/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<bool>$$Invoke
ENTRY_POINT: 03eb3454
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<bool>__Invoke
               (undefined8 *param_1,undefined1 param_2 [16],float param_3,float param_4,
               float param_5,undefined8 param_6,undefined8 param_7,long *param_8,undefined8 param_9,
               long param_10)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  puVar1 = PTR_DAT_06320af8;
  if ((DAT_066c4b1b & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06320af8);
    DAT_066c4b1b = 1;
  }
  auVar24 = FUN_056c41bc(param_7,*param_8,0);
  FUN_056c45a8(&local_f8,param_7,param_8[1],0);
  local_b0 = local_e8;
  uStack_b8 = uStack_f0;
  local_c0 = local_f8;
  FUN_056c45a8(&local_110,param_7,param_8[2],0);
  uStack_d8 = uStack_108;
  local_e0 = local_110;
  local_d0 = local_100;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066c3c7e == '\0') {
    FUN_02b3c81c(PTR_DAT_06320af8);
    DAT_066c3c7e = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *(long *)puVar1;
  }
  pfVar4 = *(float **)(lVar2 + 0xb8);
  fVar18 = pfVar4[3];
  fVar17 = pfVar4[4];
  fVar16 = pfVar4[5];
  fVar19 = pfVar4[6];
  if (*(char *)((long)param_8 + 0x24) == '\0') {
    fVar12 = *pfVar4;
    fVar10 = pfVar4[1];
    fVar7 = pfVar4[2];
    local_12c = fVar10;
    local_128 = fVar12;
    local_124 = fVar12;
    local_120 = fVar10;
    local_11c = fVar7;
  }
  else {
    if (*param_8 == 0) goto LAB_03eb38b8;
    fVar5 = (float)FUN_05c9bf94(*param_8,0);
    if (param_8[1] == 0) goto LAB_03eb38b8;
    fVar8 = param_3;
    fVar15 = param_4;
    fVar6 = (float)FUN_05c9bf94(param_8[1],0);
    if (param_8[2] == 0) goto LAB_03eb38b8;
    fVar10 = param_3 - fVar8;
    fVar12 = param_4 - fVar15;
    param_5 = (float)FUN_05c9bf94(param_8[2],0);
    param_5 = fVar5 - param_5;
    fVar7 = param_4 - fVar12;
    local_12c = param_3 - fVar10;
    local_128 = param_5;
    local_124 = fVar5 - fVar6;
    local_120 = param_3 - fVar8;
    local_11c = param_4 - fVar15;
  }
  fVar5 = fVar18;
  fVar8 = fVar17;
  fVar15 = fVar16;
  fVar6 = fVar19;
  if (*(char *)((long)param_8 + 0x25) != '\0') {
    if (*param_8 != 0) {
      fVar6 = (float)FUN_05c9a10c(*param_8,0);
      if (param_8[1] != 0) {
        fVar17 = fVar10;
        fVar18 = fVar12;
        fVar5 = param_5;
        FUN_05c9a10c(param_8[1],0);
        fVar8 = (float)FUN_05c7b504(0);
        if (param_8[2] != 0) {
          fVar11 = fVar6 * fVar17;
          fVar13 = fVar10 * fVar18;
          fVar14 = fVar12 * fVar17 + fVar6 * fVar5 + param_5 * fVar8;
          fVar19 = ((param_5 * fVar5 - fVar6 * fVar8) - fVar10 * fVar17) - fVar12 * fVar18;
          fVar16 = (fVar10 * fVar8 + fVar12 * fVar5 + param_5 * fVar18) - fVar11;
          fVar17 = (fVar6 * fVar18 + fVar10 * fVar5 + param_5 * fVar17) - fVar12 * fVar8;
          fVar18 = fVar14 - fVar13;
          FUN_05c9a10c(param_8[2],0);
          fVar9 = (float)FUN_05c7b504(0);
          fVar5 = (fVar12 * fVar11 + fVar6 * fVar14 + param_5 * fVar9) - fVar10 * fVar13;
          fVar8 = (fVar6 * fVar13 + fVar10 * fVar14 + param_5 * fVar11) - fVar12 * fVar9;
          fVar15 = (fVar10 * fVar9 + fVar12 * fVar14 + param_5 * fVar13) - fVar6 * fVar11;
          fVar6 = ((param_5 * fVar14 - fVar6 * fVar9) - fVar10 * fVar11) - fVar12 * fVar13;
          goto LAB_03eb3744;
        }
      }
    }
LAB_03eb38b8:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_03eb3744:
  uVar3 = FUN_056c6360(param_8,*(undefined8 *)(*(long *)(*(long *)(param_10 + 0x20) + 0xc0) + 0x38))
  ;
  auVar20 = FUN_056be164(param_7,param_9,uVar3,0);
  uVar3 = FUN_056c63ec(param_8,*(undefined8 *)(*(long *)(*(long *)(param_10 + 0x20) + 0xc0) + 0x40))
  ;
  auVar21 = FUN_056be164(param_7,param_9,uVar3,0);
  uVar3 = FUN_056c642c(param_8,*(undefined8 *)(*(long *)(*(long *)(param_10 + 0x20) + 0xc0) + 0x48))
  ;
  auVar22 = FUN_056be2e4(param_7,param_9,uVar3,0);
  uVar3 = FUN_056c646c(param_8,*(undefined8 *)(*(long *)(*(long *)(param_10 + 0x20) + 0xc0) + 0x50))
  ;
  auVar23 = FUN_056be2e4(param_7,param_9,uVar3,0);
  *(int *)(param_1 + 1) = auVar24._8_4_;
  *(float *)((long)param_1 + 0x4c) = fVar17;
  *(float *)(param_1 + 10) = fVar16;
  *(undefined8 *)((long)param_1 + 0x14) = uStack_b8;
  *(undefined8 *)((long)param_1 + 0xc) = local_c0;
  *param_1 = auVar24._0_8_;
  *(undefined8 *)((long)param_1 + 0x2c) = uStack_d8;
  *(undefined8 *)((long)param_1 + 0x24) = local_e0;
  *(undefined8 *)((long)param_1 + 0x1c) = local_b0;
  *(float *)((long)param_1 + 100) = fVar5;
  *(float *)(param_1 + 0xd) = fVar8;
  *(float *)((long)param_1 + 0x3c) = local_124;
  *(float *)(param_1 + 8) = local_120;
  *(undefined8 *)((long)param_1 + 0x34) = local_d0;
  *(float *)((long)param_1 + 0x44) = local_11c;
  *(float *)(param_1 + 9) = fVar18;
  *(float *)((long)param_1 + 0x6c) = fVar15;
  *(float *)(param_1 + 0xe) = fVar6;
  *(float *)((long)param_1 + 0x54) = fVar19;
  *(float *)(param_1 + 0xb) = local_128;
  *(float *)((long)param_1 + 0x5c) = local_12c;
  *(float *)(param_1 + 0xc) = fVar7;
  *(undefined1 (*) [16])((long)param_1 + 0x74) = auVar20;
  *(undefined1 (*) [16])((long)param_1 + 0x84) = auVar21;
  *(undefined1 (*) [16])((long)param_1 + 0x94) = auVar22;
  *(undefined1 (*) [16])((long)param_1 + 0xa4) = auVar23;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  return;
}


