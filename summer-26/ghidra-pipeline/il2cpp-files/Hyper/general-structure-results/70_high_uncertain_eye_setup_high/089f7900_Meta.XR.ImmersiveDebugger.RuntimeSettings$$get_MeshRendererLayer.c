/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_MeshRendererLayer
ENTRY_POINT: 089f7900
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_RuntimeSettings__get_MeshRendererLayer(void)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  int unaff_w20;
  undefined4 unaff_w21;
  long *unaff_x22;
  
  thunk_FUN_049a583c();
  iVar1 = FUN_088ccb48(unaff_w21,0);
  iVar1 = unaff_w20 + iVar1 + 1;
  iVar2 = *(int *)(unaff_x19 + 0x24);
  if (iVar2 != 0) {
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    iVar2 = FUN_088ccb48(iVar2,0);
    iVar1 = iVar1 + iVar2 + 1;
  }
  iVar2 = *(int *)(unaff_x19 + 0x28);
  if (iVar2 != 0) {
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    iVar2 = FUN_088ccb48(iVar2,0);
    iVar1 = iVar1 + iVar2 + 1;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    iVar2 = FUN_088ec00c(*(long *)(unaff_x19 + 0x10),0);
    iVar1 = iVar2 + iVar1;
  }
  return iVar1;
}


