/*
FUNCTION_NAME: _Common.PlatformService.OculusService.Scripts.OculusDataManager$$AsyncInitialize
ENTRY_POINT: 0291b638
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void _Common_PlatformService_OculusService_Scripts_OculusDataManager__AsyncInitialize
               (long param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000000 = param_1 + 0x849;
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_GetEyeTrackingEnabled";
  uStack0000000000000018 = 0x1a;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)thunk_FUN_01a8a124();
  *(code **)(unaff_x20 + 0x5d0) = pcVar1;
  (*pcVar1)();
  return;
}


