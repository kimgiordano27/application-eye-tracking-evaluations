/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueSubmitLayer
ENTRY_POINT: 02906d24
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d98c30);
    *(undefined1 *)(unaff_x22 + 0xcae) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  if (unaff_x20 == 0) {
    uVar1 = **(undefined8 **)(*unaff_x21 + 0xb8);
  }
  else {
    uVar1 = FUN_0370df58();
  }
  return uVar1;
}


