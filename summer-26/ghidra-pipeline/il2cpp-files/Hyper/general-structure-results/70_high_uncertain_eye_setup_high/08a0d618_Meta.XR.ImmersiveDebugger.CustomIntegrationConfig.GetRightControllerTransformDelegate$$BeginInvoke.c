/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetRightControllerTransformDelegate$$BeginInvoke
ENTRY_POINT: 08a0d618
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetRightControllerTransformDelegate__BeginInvoke
              (long param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  long lVar3;
  
  if ((*(byte *)(unaff_x20 + 0x19a) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac3f9a8);
    *(undefined1 *)(unaff_x20 + 0x19a) = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  iVar1 = 0;
  if (lVar3 != 0) {
    if (*(int *)(*(long *)PTR_DAT_0ac3f9a8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    iVar1 = FUN_088cc9ec(lVar3,0);
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar2 = FUN_088ec00c(*(long *)(param_1 + 0x10),0);
    iVar1 = iVar2 + iVar1;
  }
  return iVar1;
}


