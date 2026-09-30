/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking
ENTRY_POINT: 05bcef80
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartFaceTracking
               (float param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
               float param_6,float param_7,float param_8)

{
  undefined4 uVar1;
  undefined4 *unaff_x19;
  float *unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s12;
  float unaff_s14;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float in_s21;
  float in_s22;
  float in_s23;
  float in_s24;
  float in_s25;
  float in_s26;
  
  param_8 = param_8 + param_4;
  fVar4 = param_8;
  if (param_7 + param_6 <= param_8) {
    fVar4 = param_7 + param_6;
  }
  fVar2 = in_s16 * in_s16 + in_s17 + (in_s23 - unaff_s14) * (in_s23 - unaff_s14);
  fVar5 = (in_s20 - unaff_s12) * (in_s20 - unaff_s12) +
          (in_s18 - unaff_s8) * (in_s18 - unaff_s8) + (in_s19 - unaff_s14) * (in_s19 - unaff_s14);
  fVar3 = fVar2;
  if (fVar4 <= fVar2) {
    fVar3 = fVar4;
  }
  fVar4 = fVar5;
  if (fVar3 <= fVar5) {
    fVar4 = fVar3;
  }
  if (fVar5 == fVar4) {
    uVar1 = 0;
    *unaff_x20 = in_s18;
    unaff_x20[1] = in_s19;
    unaff_x20[2] = in_s20;
  }
  else if (fVar2 == fVar4) {
    *unaff_x20 = in_s22;
    unaff_x20[1] = in_s23;
    uVar1 = 0x43340000;
    unaff_x20[2] = in_s21;
  }
  else if (param_8 == fVar4) {
    *unaff_x20 = in_s25;
    unaff_x20[1] = in_s26;
    uVar1 = 0x42b40000;
    unaff_x20[2] = in_s24;
  }
  else {
    *unaff_x20 = param_1;
    unaff_x20[1] = param_2;
    uVar1 = 0xc2b40000;
    unaff_x20[2] = param_3;
  }
  *unaff_x19 = uVar1;
  return;
}


