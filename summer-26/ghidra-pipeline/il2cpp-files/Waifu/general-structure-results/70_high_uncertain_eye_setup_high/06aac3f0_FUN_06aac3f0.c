/*
FUNCTION_NAME: FUN_06aac3f0
ENTRY_POINT: 06aac3f0
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_06aac3f0(undefined8 *param_1,undefined1 param_2 [16],float param_3,float param_4,
                 long param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  
  if ((DAT_086e2138 & 1) == 0) {
    FUN_0335b6c8(&DAT_083edc78,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083edc88,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cffc8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d1cb8,1);
    DataMemoryBarrier(2,3);
    DAT_086e2138 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_78 = 0;
  local_80 = 0;
  FUN_06aac274(&local_90,param_5);
  if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar7 = FUN_07a17308(&local_90,0);
  lVar1 = param_5 + 0x148;
  fVar8 = param_3;
  fVar10 = param_4;
  if (*(int *)(DAT_083d1cb8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar2 = (float)OVRManager__set_isBoundaryVisibilitySuppressed(lVar1);
  if (DAT_086d898f == '\0') {
    FUN_0335b6c8(&DAT_083ce8d0,1);
    DataMemoryBarrier(2,3);
    DAT_086d898f = '\x01';
  }
  fVar3 = fVar10 * fVar10 + fVar2 * fVar2 + fVar8 * fVar8;
  if (**(float **)(DAT_083ce8d0 + 0xb8) <= fVar3) {
    fVar9 = param_4 * fVar10 + (float)uVar7 * fVar2 + param_3 * fVar8;
    uVar7 = (ulong)(uint)((float)uVar7 - (fVar2 * fVar9) / fVar3);
    param_3 = param_3 - (fVar8 * fVar9) / fVar3;
    param_4 = param_4 - (fVar10 * fVar9) / fVar3;
  }
  uVar4 = OVRManager__set_isBoundaryVisibilitySuppressed(lVar1);
  uVar5 = FUN_07a009b0(uVar7,0);
  fVar8 = param_3;
  fVar10 = param_4;
  uVar6 = OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                    (lVar1);
  uVar7 = FUN_0467cd68(param_5,DAT_083edc78);
  if ((uVar7 & 1) == 0) {
    *(undefined4 *)param_1 = uVar6;
    *(float *)((long)param_1 + 4) = fVar8;
    *(float *)(param_1 + 1) = fVar10;
    *(undefined4 *)((long)param_1 + 0xc) = uVar5;
    *(float *)(param_1 + 2) = param_3;
    *(float *)((long)param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 3) = uVar4;
  }
  else {
    if (*(long *)(param_5 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    local_d0 = uVar6;
    fStack_cc = fVar8;
    local_c8 = fVar10;
    uStack_c4 = uVar5;
    local_c0 = param_3;
    fStack_bc = param_4;
    local_b8 = uVar4;
    FUN_06aabe2c(&uStack_b0,*(long *)(param_5 + 200),&local_d0);
    *(undefined8 *)((long)param_1 + 0x14) = uStack_9c;
    *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_a0,local_a4);
    param_1[1] = CONCAT44(local_a4,uStack_a8);
    *param_1 = uStack_b0;
  }
  return;
}


