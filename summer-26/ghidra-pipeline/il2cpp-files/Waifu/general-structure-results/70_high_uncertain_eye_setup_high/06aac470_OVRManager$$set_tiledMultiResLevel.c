/*
FUNCTION_NAME: OVRManager$$set_tiledMultiResLevel
ENTRY_POINT: 06aac470
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRManager__set_tiledMultiResLevel(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 unaff_w22;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack0000000000000004;
  undefined4 uStack000000000000000c;
  float fStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x138) = unaff_w22;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  FUN_06aac274(&stack0x00000040);
  if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar7 = FUN_07a17308(&stack0x00000040,0);
  lVar1 = unaff_x20 + 0x148;
  fVar8 = param_2;
  fVar10 = param_3;
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
    fVar9 = param_3 * fVar10 + (float)uVar7 * fVar2 + param_2 * fVar8;
    uVar7 = (ulong)(uint)((float)uVar7 - (fVar2 * fVar9) / fVar3);
    param_2 = param_2 - (fVar8 * fVar9) / fVar3;
    param_3 = param_3 - (fVar10 * fVar9) / fVar3;
  }
  uVar4 = OVRManager__set_isBoundaryVisibilitySuppressed(lVar1);
  uVar5 = FUN_07a009b0(uVar7,0);
  fVar8 = param_2;
  fVar10 = param_3;
  uVar6 = OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                    (lVar1);
  uVar7 = FUN_0467cd68();
  if ((uVar7 & 1) == 0) {
    *(undefined4 *)unaff_x19 = uVar6;
    *(float *)((long)unaff_x19 + 4) = fVar8;
    *(float *)(unaff_x19 + 1) = fVar10;
    *(undefined4 *)((long)unaff_x19 + 0xc) = uVar5;
    *(float *)(unaff_x19 + 2) = param_2;
    *(float *)((long)unaff_x19 + 0x14) = param_3;
    *(undefined4 *)(unaff_x19 + 3) = uVar4;
  }
  else {
    if (*(long *)(unaff_x20 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    fStack0000000000000004 = fVar8;
    uStack000000000000000c = uVar5;
    fStack0000000000000014 = param_3;
    FUN_06aabe2c(&stack0x00000020);
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *unaff_x19 = in_stack_00000020;
  }
  return;
}


