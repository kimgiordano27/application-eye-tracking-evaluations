/*
FUNCTION_NAME: OVRPlugin.Vector4s$$ToString
ENTRY_POINT: 01f8e650
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4s__ToString(void)

{
  int iVar1;
  int unaff_w19;
  int unaff_w20;
  int unaff_w22;
  
  while( true ) {
    iVar1 = unaff_w19 - unaff_w20;
    if (iVar1 + 1 < 0x11) {
      if (iVar1 == 0) {
        return;
      }
      if (iVar1 == 2) {
        FUN_01f8e268();
        FUN_01f8e268();
      }
      else if (iVar1 != 1) {
        FUN_01f8e740();
        return;
      }
      FUN_01f8e268();
      return;
    }
    if (unaff_w22 == -1) break;
    iVar1 = FUN_01f8e9a4();
    FUN_01f8e62c();
    unaff_w19 = iVar1 + -1;
    unaff_w22 = unaff_w22 + -1;
    if (unaff_w19 <= unaff_w20) {
      return;
    }
  }
  FUN_01f8e904();
  return;
}


