/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$GetImmersiveDebuggerEnabled
ENTRY_POINT: 089f9bcc
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled(void)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  *(undefined1 *)(unaff_x20 + 0x2c) = 1;
  lVar3 = *(long *)(unaff_x19 + 0x18);
  iVar1 = 0;
  if (lVar3 != 0) {
    if (*(int *)(*(long *)PTR_DAT_0ac3f9a8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    iVar1 = FUN_088cc9ec(lVar3,0);
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    iVar2 = FUN_088ec00c(*(long *)(unaff_x19 + 0x10),0);
    iVar1 = iVar2 + iVar1;
  }
  return iVar1;
}


