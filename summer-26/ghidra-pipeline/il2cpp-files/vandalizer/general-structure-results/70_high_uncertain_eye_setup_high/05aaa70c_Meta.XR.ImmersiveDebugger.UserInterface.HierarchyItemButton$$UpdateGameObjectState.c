/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$UpdateGameObjectState
ENTRY_POINT: 05aaa70c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__UpdateGameObjectState
              (void *param_1,undefined8 param_2,size_t param_3)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  
  memcpy(param_1,unaff_x21,param_3);
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  memcpy(&stack0x00000068,&stack0x00000000,0x68);
  iVar1 = FUN_0400cfcc();
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = iVar1 - *(int *)(unaff_x19 + 8);
  }
  return iVar1;
}


