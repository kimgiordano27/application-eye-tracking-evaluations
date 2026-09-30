/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Interface$$UpdateCulling
ENTRY_POINT: 028e6eec
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Interface__UpdateCulling(void)

{
  long lVar1;
  int in_w8;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_01843fdc();
  }
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  FUN_028e712c();
  lVar1 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x28);
  if (lVar1 != 0) {
    System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_object>__System_Collections_Generic_IEnumerable<System_Collections_Generic_KeyValuePair<TKey,TValue>>_GetEnumerator
              (lVar1,*unaff_x20,unaff_x20[1]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


