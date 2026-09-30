/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetTrackingIPDEnabled
ENTRY_POINT: 01a473d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetTrackingIPDEnabled
               (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  if (DAT_0377ae60 == (code *)0x0) {
    DAT_0377ae60 = (code *)thunk_FUN_00d625b4();
  }
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x20;
  }
  lVar2 = 0;
  if (param_4 != 0) {
    lVar2 = param_4 + 0x20;
  }
  (*DAT_0377ae60)(param_1,lVar1,param_3,lVar2);
  return;
}


