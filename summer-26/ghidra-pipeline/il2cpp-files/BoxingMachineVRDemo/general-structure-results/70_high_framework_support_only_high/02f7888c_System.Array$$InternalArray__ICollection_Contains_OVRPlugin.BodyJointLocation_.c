/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 02f7888c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_BodyJointLocation>(long *param_1)

{
  bool bVar1;
  ulong unaff_x20;
  ulong unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float fVar5;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  fVar3 = ABS(unaff_s8);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar4 = **(float **)(*param_1 + 0xb8) * 8.0;
  fVar5 = fVar3 * DAT_012084b4;
  if (fVar3 * DAT_012084b4 <= fVar4) {
    fVar5 = fVar4;
  }
  if (ABS(0.0 - unaff_s8) < fVar5) {
    return;
  }
  fVar5 = ABS(unaff_s9);
  fVar3 = DAT_01208378;
  if (fStack0000000000000014 < 0.0) {
    fVar3 = 0.0;
  }
  fVar4 = fVar5;
  if ((unaff_x21 & 1) == 0) {
    fVar4 = 1.0;
  }
  fVar2 = unaff_s10 * fVar5;
  if (unaff_s10 * fVar5 <= fVar3 * fVar4) {
    fVar2 = fVar3 * fVar4;
  }
  FUN_0601bd84(fVar2);
  bVar1 = (unaff_x20 & 1) == 0;
  fVar3 = 1.0;
  if (bVar1) {
    fVar3 = fVar5;
  }
  if (bVar1) {
    fVar5 = 1.0;
  }
  FUN_0601bf0c(fVar5 * (unaff_s10 * fVar3 + fStack0000000000000018));
  FUN_0601caec(ABS(fStack000000000000001c / unaff_s11));
  if (0.0 <= fStack0000000000000014) {
    fVar3 = (float)FUN_0601be58();
    fVar3 = atan2f(ABS(unaff_s11) * fStack0000000000000010,fVar3);
    FUN_0601c094(fVar3 * DAT_0120865c + fVar3 * DAT_0120865c);
    return;
  }
  FUN_0601c5b0(unaff_s11 * in_stack_00000008._4_4_);
  return;
}


