/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_UpdateCameraDevices
ENTRY_POINT: 0569d74c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_UpdateCameraDevices(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x23;
  undefined8 *unaff_x24;
  
  uVar1 = FUN_0360a330();
  lVar2 = FUN_03606bf0(uVar1,*unaff_x24);
  if (lVar2 == 0) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_054c8b04(0);
  }
  else {
    FUN_054a9700(lVar2,0);
  }
  return;
}


