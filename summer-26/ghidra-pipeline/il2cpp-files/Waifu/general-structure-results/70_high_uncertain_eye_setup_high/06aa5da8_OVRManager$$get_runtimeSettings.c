/*
FUNCTION_NAME: OVRManager$$get_runtimeSettings
ENTRY_POINT: 06aa5da8
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_runtimeSettings(float param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  int in_w8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar7;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000048;
  
                    /* try { // try from 06aa5dac to 06ba5dd3 has its CatchHandler @ 06aa5e34 */
  fVar7 = unaff_s10 * param_3 + param_1 + param_2;
  if (in_w8 == 0) {
    FUN_0335b6c8(&DAT_083ce8d0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0xe6f) = 1;
  }
  fVar2 = ABS(fVar7);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = **(float **)(DAT_083ce8d0 + 0xb8) * 8.0;
  fVar6 = fVar2 * DAT_012edc5c;
  if (fVar2 * DAT_012edc5c <= fVar3) {
    fVar6 = fVar3;
  }
  if (((ABS(0.0 - fVar7) < fVar6) ||
      (fVar7 = (-(unaff_s10 * unaff_s13 + unaff_s8 * unaff_s14 + unaff_s9 * unaff_s15) - unaff_s12)
               / fVar7, fVar7 <= 0.0)) ||
     ((0.0 < in_stack_00000048._4_4_ && (in_stack_00000048._4_4_ < fVar7)))) {
    uVar1 = 0;
  }
  else {
    uVar5 = *(undefined8 *)((long)unaff_x20 + 0xc);
    fVar6 = *(float *)((long)unaff_x20 + 0x14);
    uVar4 = *unaff_x20;
    fVar2 = *(float *)(unaff_x20 + 1);
    *(float *)(unaff_x19 + 3) = fVar7;
    uVar1 = 1;
    *(float *)(unaff_x19 + 2) = unaff_s9;
    *(float *)((long)unaff_x19 + 0x14) = unaff_s10;
    *unaff_x19 = CONCAT44((float)((ulong)uVar4 >> 0x20) + (float)((ulong)uVar5 >> 0x20) * fVar7,
                          (float)uVar4 + (float)uVar5 * fVar7);
    *(float *)(unaff_x19 + 1) = fVar2 + fVar7 * fVar6;
    *(float *)((long)unaff_x19 + 0xc) = unaff_s8;
  }
  return uVar1;
}


