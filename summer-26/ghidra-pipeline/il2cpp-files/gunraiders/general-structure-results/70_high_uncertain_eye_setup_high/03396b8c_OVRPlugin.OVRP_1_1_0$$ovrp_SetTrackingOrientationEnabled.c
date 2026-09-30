/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetTrackingOrientationEnabled
ENTRY_POINT: 03396b8c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetTrackingOrientationEnabled(long param_1)

{
  int iVar1;
  ulong uVar2;
  int unaff_w19;
  long *unaff_x20;
  
  while( true ) {
    iVar1 = (**(code **)(param_1 + 0x1b8))();
    if (iVar1 <= unaff_w19) {
      return;
    }
    uVar2 = (**(code **)(*unaff_x20 + 0x1d8))();
    if ((uVar2 & 1) == 0) break;
    param_1 = *unaff_x20;
  }
  return;
}


