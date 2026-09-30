/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_SaveSpaceList
ENTRY_POINT: 063bbf80
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_79_0__ovrp_SaveSpaceList(int param_1)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  float fVar1;
  float unaff_s8;
  
  if (in_ZR || in_NG != in_OV) {
    if (10 < param_1) {
      if (param_1 == 0xb) {
        sinf(unaff_s8 * DAT_01586520 * 0.5);
        return;
      }
      if (param_1 != 0xc) {
        return;
      }
      cosf(unaff_s8 * DAT_01586520);
      return;
    }
    if (param_1 == 0) {
      return;
    }
    if (param_1 != 10) {
      return;
    }
    cosf(unaff_s8 * DAT_01586520 * 0.5);
    return;
  }
  if (param_1 < 0x28) {
    switch(param_1) {
    case 0x14:
      break;
    case 0x15:
      break;
    case 0x16:
      break;
    case 0x1e:
      break;
    case 0x1f:
      fVar1 = 3.0;
      goto FUN_063bc38c;
    case 0x20:
      if (unaff_s8 < 0.5) {
        return;
      }
      fVar1 = 3.0;
FUN_063bc45c:
      powf(2.0 - (unaff_s8 + unaff_s8),fVar1);
    }
  }
  else {
    if (param_1 == 0x28) {
      return;
    }
    if (param_1 != 0x29) {
      if (param_1 != 0x2a) {
        return;
      }
      if (unaff_s8 < 0.5) {
        return;
      }
      fVar1 = 4.0;
      goto FUN_063bc45c;
    }
    fVar1 = 4.0;
FUN_063bc38c:
    powf(1.0 - unaff_s8,fVar1);
  }
  return;
}


