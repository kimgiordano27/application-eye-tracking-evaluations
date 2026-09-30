/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$get_IsValid
ENTRY_POINT: 08a0a42c
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__get_IsValid(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long *unaff_x20;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x8e8));
  *(undefined1 *)(unaff_x19 + 0x156) = 1;
  uVar1 = thunk_FUN_04983f60(*unaff_x20);
  FUN_08dbf2f0(uVar1,0);
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar1;
  thunk_FUN_049ee3d8(*(undefined8 *)(*unaff_x20 + 0xb8),uVar1);
  return;
}


