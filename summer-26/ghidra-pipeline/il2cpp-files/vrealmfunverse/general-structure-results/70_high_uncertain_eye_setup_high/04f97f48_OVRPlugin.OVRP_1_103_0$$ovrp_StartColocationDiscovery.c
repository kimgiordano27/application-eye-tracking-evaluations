/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_StartColocationDiscovery
ENTRY_POINT: 04f97f48
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_103_0__ovrp_StartColocationDiscovery(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xe00) = 1;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    return;
  }
  uVar1 = thunk_FUN_02b79548(*(undefined8 *)(unaff_x19 + 0x20),
                             *(undefined8 *)Meta_XR_MRUtilityKit_LabelFilter_var);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x28));
  return;
}


