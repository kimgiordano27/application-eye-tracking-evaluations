/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$.ctor
ENTRY_POINT: 08a0b284
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster___ctor(void)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  
  thunk_FUN_049a583c();
  iVar1 = FUN_088cc9ec();
  iVar1 = iVar1 + 1;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    iVar2 = FUN_088ec00c(*(long *)(unaff_x19 + 0x10),0);
    iVar1 = iVar2 + iVar1;
  }
  return iVar1;
}


