/*
FUNCTION_NAME: OVRPlugin$$get_userPresent
ENTRY_POINT: 01a14884
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_userPresent
               (undefined4 param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16]
               ,float param_6,float param_7,undefined1 param_8 [16])

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_s16;
  float in_register_00005204;
  float in_s17;
  float in_s19;
  float in_s20;
  undefined4 in_s21;
  float in_s22;
  float in_s23;
  undefined4 in_s24;
  float in_s25;
  float in_s26;
  undefined4 in_s27;
  
  param_4 = (in_s20 - in_s17) * (in_s20 - in_s17) + param_4;
  param_6 = (in_s23 - in_s17) * (in_s23 - in_s17) + param_6;
  fVar2 = (in_s26 - in_s17) * (in_s26 - in_s17) +
          param_8._0_4_ * param_8._0_4_ + (param_7 - in_s16) * (param_7 - in_s16);
  fVar3 = (param_3 - in_s17) * (param_3 - in_s17) +
          param_8._4_4_ * param_8._4_4_ +
          (param_2 - in_register_00005204) * (param_2 - in_register_00005204);
  fVar4 = fVar2;
  if (fVar3 <= fVar2) {
    fVar4 = fVar3;
  }
  fVar3 = param_6;
  if (fVar4 <= param_6) {
    fVar3 = fVar4;
  }
  fVar4 = param_4;
  if (fVar3 <= param_4) {
    fVar4 = fVar3;
  }
  if (param_4 == fVar4) {
    *unaff_x20 = in_s21;
    uVar1 = 0;
    param_3 = in_s20;
    param_2 = in_s19;
  }
  else if (param_6 == fVar4) {
    *unaff_x20 = in_s24;
    uVar1 = 0x43340000;
    param_3 = in_s23;
    param_2 = in_s22;
  }
  else if (fVar2 == fVar4) {
    *unaff_x20 = in_s27;
    uVar1 = 0x42b40000;
    param_3 = in_s26;
    param_2 = in_s25;
  }
  else {
    *unaff_x20 = param_1;
    uVar1 = 0xc2b40000;
  }
  unaff_x20[1] = param_2;
  unaff_x20[2] = param_3;
  *unaff_x19 = uVar1;
  return;
}


