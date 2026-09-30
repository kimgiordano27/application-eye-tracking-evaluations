/*
FUNCTION_NAME: OVRManager$$remove_TrackingAcquired
ENTRY_POINT: 05fef134
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__remove_TrackingAcquired(long param_1,float param_2)

{
  bool bVar1;
  float *pfVar2;
  float *unaff_x19;
  long *unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  param_2 = unaff_s8 * unaff_s8 + param_2;
  if (**(float **)(param_1 + 0xb8) <= param_2) {
    fVar4 = unaff_s11 * unaff_s8 + unaff_s9 * unaff_s13 + unaff_s10 * unaff_s12;
    unaff_s9 = unaff_s9 - (unaff_s13 * fVar4) / param_2;
    unaff_s10 = unaff_s10 - (unaff_s12 * fVar4) / param_2;
    unaff_s11 = unaff_s11 - (unaff_s8 * fVar4) / param_2;
  }
  if (DAT_07a3ca81 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3ca81 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar4 = SQRT(unaff_s11 * unaff_s11 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10);
  if (fVar4 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar3 = *pfVar2;
    fVar5 = pfVar2[1];
    fVar4 = pfVar2[2];
  }
  else {
    fVar3 = unaff_s9 / fVar4;
    fVar5 = unaff_s10 / fVar4;
    fVar4 = unaff_s11 / fVar4;
  }
  fVar6 = unaff_s15 * unaff_s15 + in_stack_00000008._4_4_ * in_stack_00000008._4_4_;
  fVar8 = unaff_x19[1] - unaff_x19[1];
  fStack0000000000000010 = fStack0000000000000010 - *unaff_x19;
  fStack0000000000000014 = fStack0000000000000014 - unaff_x19[2];
  fVar9 = (fVar8 * fVar8 + fStack0000000000000010 * fStack0000000000000010 +
          fStack0000000000000014 * fStack0000000000000014) - fVar6;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (unaff_s14 < fVar9) {
    bVar1 = false;
  }
  else {
    fVar7 = fVar4 * fVar8 - fVar5 * fStack0000000000000014;
    fVar9 = fVar3 * fStack0000000000000014 - fVar4 * fStack0000000000000010;
    fVar4 = fVar5 * fStack0000000000000010 - fVar3 * fVar8;
    bVar1 = fVar4 * fVar4 + fVar7 * fVar7 + fVar9 * fVar9 <= fVar6;
  }
  return bVar1;
}


