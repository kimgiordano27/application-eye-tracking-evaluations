/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SetPanelPosition
ENTRY_POINT: 06361a90
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SetPanelPosition(void)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  
  *(undefined1 *)(unaff_x20 + 0x93e) = unaff_w21;
  if (*(long *)(unaff_x19 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x30);
  }
  return uVar1;
}


