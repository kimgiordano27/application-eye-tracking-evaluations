/*
FUNCTION_NAME: OVRManager$$get_gpuUtilSupported
ENTRY_POINT: 06aac4cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRManager__get_gpuUtilSupported(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  ulong uVar2;
  int in_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  ulong unaff_d8;
  float unaff_s9;
  float unaff_s10;
  float fStack0000000000000004;
  undefined4 uStack000000000000000c;
  float fStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  lVar1 = unaff_x20 + 0x148;
  if (in_w8 == 0) {
    FUN_033b9870();
  }
  fVar3 = (float)OVRManager__set_isBoundaryVisibilitySuppressed(lVar1);
  if (DAT_086d898f == '\0') {
    FUN_0335b6c8(&DAT_083ce8d0,1);
    DataMemoryBarrier(2,3);
    DAT_086d898f = '\x01';
  }
  fVar4 = param_3 * param_3 + fVar3 * fVar3 + param_2 * param_2;
  if (**(float **)(DAT_083ce8d0 + 0xb8) <= fVar4) {
    fVar8 = unaff_s10 * param_3 + (float)unaff_d8 * fVar3 + unaff_s9 * param_2;
    unaff_d8 = (ulong)(uint)((float)unaff_d8 - (fVar3 * fVar8) / fVar4);
    unaff_s9 = unaff_s9 - (param_2 * fVar8) / fVar4;
    unaff_s10 = unaff_s10 - (param_3 * fVar8) / fVar4;
  }
  uVar5 = OVRManager__set_isBoundaryVisibilitySuppressed(lVar1);
  uVar6 = FUN_07a009b0(unaff_d8,0);
  fVar3 = unaff_s9;
  fVar4 = unaff_s10;
  uVar7 = OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                    (lVar1);
  uVar2 = FUN_0467cd68();
  if ((uVar2 & 1) == 0) {
    *(undefined4 *)unaff_x19 = uVar7;
    *(float *)((long)unaff_x19 + 4) = fVar3;
    *(float *)(unaff_x19 + 1) = fVar4;
    *(undefined4 *)((long)unaff_x19 + 0xc) = uVar6;
    *(float *)(unaff_x19 + 2) = unaff_s9;
    *(float *)((long)unaff_x19 + 0x14) = unaff_s10;
    *(undefined4 *)(unaff_x19 + 3) = uVar5;
  }
  else {
    if (*(long *)(unaff_x20 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    fStack0000000000000004 = fVar3;
    uStack000000000000000c = uVar6;
    fStack0000000000000014 = unaff_s10;
    FUN_06aabe2c(&stack0x00000020);
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *unaff_x19 = in_stack_00000020;
  }
  return;
}


