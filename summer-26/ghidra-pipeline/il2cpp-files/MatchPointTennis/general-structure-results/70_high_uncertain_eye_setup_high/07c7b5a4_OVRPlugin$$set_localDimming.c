/*
FUNCTION_NAME: OVRPlugin$$set_localDimming
ENTRY_POINT: 07c7b5a4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_localDimming
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4 [16],
               float param_5,undefined1 param_6 [16])

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_s18;
  undefined4 in_s19;
  undefined4 in_s20;
  undefined4 in_s21;
  undefined4 in_s22;
  undefined4 in_s23;
  undefined4 in_s24;
  undefined4 in_s25;
  undefined4 in_s26;
  undefined4 in_s27;
  
  fVar2 = param_6._0_4_ + param_4._0_4_;
  fVar3 = param_6._4_4_ + param_4._4_4_;
  fVar4 = fVar2;
  if (fVar3 <= fVar2) {
    fVar4 = fVar3;
  }
  fVar3 = param_5;
  if (fVar4 <= param_5) {
    fVar3 = fVar4;
  }
  fVar4 = in_s18;
  if (fVar3 <= in_s18) {
    fVar4 = fVar3;
  }
  if (in_s18 == fVar4) {
    *unaff_x20 = in_s21;
    uVar1 = 0;
    param_2 = in_s19;
    param_3 = in_s20;
  }
  else if (param_5 == fVar4) {
    *unaff_x20 = in_s24;
    uVar1 = 0x43340000;
    param_2 = in_s22;
    param_3 = in_s23;
  }
  else if (fVar2 == fVar4) {
    *unaff_x20 = in_s27;
    uVar1 = 0x42b40000;
    param_2 = in_s25;
    param_3 = in_s26;
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


