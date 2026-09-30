/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_ImmersiveDebuggerToggleDisplayButton
ENTRY_POINT: 052c1df4
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ImmersiveDebuggerToggleDisplayButton
               (long param_1)

{
  long lVar1;
  long unaff_x19;
  ulong unaff_x20;
  int iVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 052c1c78 with catch @ 052c1df4 */
  while (param_1 != 0) {
                    /* catch() { ... } // from try @ 052c1a0c with catch @ 052c1df8 */
    if (*(uint *)(param_1 + 0x18) <= unaff_x20) {
LAB_052c1e78:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    iVar2 = *(int *)(param_1 + unaff_x20 * 4 + 0x20);
    if (iVar2 < *(int *)(unaff_x19 + 0x20)) {
      while( true ) {
        if (*(uint *)(param_1 + 0x18) <= unaff_x20) goto LAB_052c1e78;
        param_1 = param_1 + unaff_x20 * 4;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        FUN_052c245c();
        iVar2 = iVar2 + 1;
        if (*(int *)(unaff_x19 + 0x20) <= iVar2) break;
        param_1 = *(long *)(unaff_x19 + 0xa8);
        if (param_1 == 0) goto LAB_052c1e68;
      }
    }
    lVar3 = *(long *)(unaff_x19 + 0x30);
    unaff_x20 = unaff_x20 + 1;
    if (lVar3 == 0) break;
    lVar1 = *(long *)(lVar3 + 0x80);
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x18) == 0)) {
      FUN_052c35a0(lVar3);
      lVar1 = *(long *)(lVar3 + 0x80);
      if (lVar1 == 0) break;
    }
    if ((long)*(int *)(lVar1 + 0x18) <= (long)unaff_x20) {
      return;
    }
    param_1 = *(long *)(unaff_x19 + 0xa8);
  }
LAB_052c1e68:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


