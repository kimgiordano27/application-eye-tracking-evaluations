/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$IsFocussed
ENTRY_POINT: 028dece4
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__IsFocussed(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    FUN_024c5010(**(long **)(lVar1 + 0xb8),*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb608);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


