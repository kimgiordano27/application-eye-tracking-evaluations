/*
FUNCTION_NAME: OVRManager$$get_gpuUtilLevel
ENTRY_POINT: 06aac520
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__get_gpuUtilLevel(long param_1,float param_2)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  ulong unaff_d8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fStack0000000000000004;
  undefined4 uStack000000000000000c;
  float fStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  fVar2 = unaff_s12 * unaff_s12 + param_2 + unaff_s11 * unaff_s11;
  if (**(float **)(param_1 + 0xb8) <= fVar2) {
    fVar6 = unaff_s10 * unaff_s12 + (float)unaff_d8 * unaff_s13 + unaff_s9 * unaff_s11;
    unaff_d8 = (ulong)(uint)((float)unaff_d8 - (unaff_s13 * fVar6) / fVar2);
    unaff_s9 = unaff_s9 - (unaff_s11 * fVar6) / fVar2;
    unaff_s10 = unaff_s10 - (unaff_s12 * fVar6) / fVar2;
  }
  uVar3 = OVRManager__set_isBoundaryVisibilitySuppressed();
  uVar4 = FUN_07a009b0(unaff_d8,0);
  fVar2 = unaff_s9;
  fVar6 = unaff_s10;
  uVar5 = OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                    ();
  uVar1 = FUN_0467cd68();
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)unaff_x19 = uVar5;
    *(float *)((long)unaff_x19 + 4) = fVar2;
    *(float *)(unaff_x19 + 1) = fVar6;
    *(undefined4 *)((long)unaff_x19 + 0xc) = uVar4;
    *(float *)(unaff_x19 + 2) = unaff_s9;
    *(float *)((long)unaff_x19 + 0x14) = unaff_s10;
    *(undefined4 *)(unaff_x19 + 3) = uVar3;
  }
  else {
    if (*(long *)(unaff_x20 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    fStack0000000000000004 = fVar2;
    uStack000000000000000c = uVar4;
    fStack0000000000000014 = unaff_s10;
    FUN_06aabe2c(&stack0x00000020);
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *unaff_x19 = in_stack_00000020;
  }
  return;
}


