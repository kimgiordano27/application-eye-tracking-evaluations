/*
FUNCTION_NAME: FUN_06aafd94
ENTRY_POINT: 06aafd94
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_06aafd94(undefined4 param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  ulong uVar5;
  float fVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong local_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar7 = param_2;
  uVar8 = param_3;
  uVar11 = param_4;
  if ((DAT_086e2153 & 1) == 0) {
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d1cb8,1);
    DataMemoryBarrier(2,3);
    DAT_086e2153 = 1;
  }
  uVar3 = *(undefined8 *)(param_5 + 0x30);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar1 = FUN_07a119fc(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
                    /* catch() { ... } // from try @ 06aaff18 with catch @ 06aaff1c */
                    /* catch() { ... } // from try @ 06aafe90 with catch @ 06aaff20 */
    return;
  }
  lVar2 = *(long *)(param_5 + 0x30);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x58) = param_1;
    *(int *)(lVar2 + 0x5c) = (int)param_2;
    *(int *)(lVar2 + 0x60) = (int)param_3;
    *(int *)(lVar2 + 100) = (int)param_4;
    uVar3 = *(undefined8 *)(param_5 + 0x38);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar1 = FUN_07a0d2c4(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_06aaff34;
      FUN_06aac274(&local_70);
      uVar5 = local_70 & 0xffffffff;
      uVar7 = local_70 >> 0x20;
                    /* try { // try from 06aafe90 to 06bafec7 has its CatchHandler @ 06aaff20 */
      uVar1 = uStack_68 & 0xffffffff;
    }
    else {
      if (*(long *)(param_5 + 0x38) == 0) goto LAB_06aaff34;
      uVar5 = FUN_07a18d2c(*(long *)(param_5 + 0x38),0);
      uVar1 = uVar8;
    }
    fVar9 = (float)uVar8;
    lVar2 = *(long *)(param_5 + 0x20);
    if (lVar2 != 0) {
      local_50 = *(undefined8 *)(lVar2 + 0x168);
      uStack_68 = *(ulong *)(lVar2 + 0x150);
      local_70 = *(ulong *)(lVar2 + 0x148);
      uStack_58 = *(undefined8 *)(lVar2 + 0x160);
      uVar3 = *(undefined8 *)(lVar2 + 0x158);
      uStack_60 = uVar3;
      if (*(int *)(DAT_083d1cb8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar6 = (float)uVar3;
      fVar4 = (float)OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                               (&local_70);
      uVar8 = (ulong)(uint)(fVar6 - (float)uVar7);
      uVar10 = (ulong)(uint)(fVar9 - (float)uVar1);
      uVar3 = FUN_07a00a64(fVar4 - (float)uVar5,uVar8,uVar10,0);
      if (*(long *)(param_5 + 0x30) != 0) {
                    /* try { // try from 06aaff18 to 06baff1b has its CatchHandler @ 06aaff1c */
        FUN_06a2fb18(uVar5,uVar7,uVar1,uVar3,uVar8,uVar10,uVar11,*(long *)(param_5 + 0x30),0);
        return;
      }
    }
  }
LAB_06aaff34:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


