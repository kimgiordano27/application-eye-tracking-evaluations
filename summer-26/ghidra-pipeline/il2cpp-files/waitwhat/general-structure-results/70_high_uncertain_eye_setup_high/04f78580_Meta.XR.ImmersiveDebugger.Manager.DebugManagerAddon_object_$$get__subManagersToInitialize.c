/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManagerAddon<object>$$get__subManagersToInitialize
ENTRY_POINT: 04f78580
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_Manager_DebugManagerAddon<object>__get__subManagersToInitialize
               (long param_1)

{
  ulong uVar1;
  uint in_w9;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  uint unaff_w23;
  undefined8 unaff_x24;
  uint uStack000000000000000c;
  
  if (unaff_w23 < in_w9) {
    param_1 = param_1 + (ulong)unaff_w23 * 0x10;
    *(undefined8 *)(param_1 + 0x20) = unaff_x24;
    *(uint *)(param_1 + 0x28) = unaff_w22;
    thunk_FUN_03195150(0);
    uStack000000000000000c = 0;
    while (uVar1 = FUN_04f7867c(), (uVar1 & 1) == 0) {
      if (uStack000000000000000c == 0) {
        lVar2 = *(long *)(unaff_x20 + 0x10);
        if (lVar2 == 0) goto LAB_04f78674;
        if (*(int *)(lVar2 + 0x18) == 0) goto LAB_04f78678;
        lVar2 = lVar2 + (ulong)(*(int *)(lVar2 + 0x18) + 0x7fffffffU & unaff_w22) * 4 + 0x20;
      }
      else {
        lVar2 = *(long *)(unaff_x20 + 0x18);
        if (lVar2 == 0) goto LAB_04f78674;
        if (*(uint *)(lVar2 + 0x18) <= uStack000000000000000c) goto LAB_04f78678;
        lVar2 = lVar2 + (long)(int)uStack000000000000000c * 0x10 + 0x2c;
      }
      uStack000000000000000c = thunk_FUN_031c0628(lVar2,unaff_w23,0,0);
      if ((int)uStack000000000000000c < 1) {
        return uStack000000000000000c == 0;
      }
    }
    lVar2 = *(long *)(unaff_x20 + 0x18);
    if (lVar2 == 0) {
LAB_04f78674:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (uStack000000000000000c < *(uint *)(lVar2 + 0x18)) {
      *unaff_x19 = *(undefined8 *)(lVar2 + (long)(int)uStack000000000000000c * 0x10 + 0x20);
      return true;
    }
  }
LAB_04f78678:
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


