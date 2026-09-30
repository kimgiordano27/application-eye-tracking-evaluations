/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_ToggleFollowRotationButton
ENTRY_POINT: 052c1dec
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ToggleFollowRotationButton(void)

{
  char in_NG;
  char in_OV;
  long lVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x20;
  int iVar3;
  
  while( true ) {
                    /* catch() { ... } // from try @ 052c1de4 with catch @ 052c1dec */
    if (in_NG == in_OV) {
      return;
    }
                    /* catch() { ... } // from try @ 052c1a4c with catch @ 052c1df0
                       catch() { ... } // from try @ 052c1d18 with catch @ 052c1df0 */
    lVar2 = *(long *)(unaff_x19 + 0xa8);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x20) {
LAB_052c1e78:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    iVar3 = *(int *)(lVar2 + unaff_x20 * 4 + 0x20);
    if (iVar3 < *(int *)(unaff_x19 + 0x20)) {
      while( true ) {
        if (*(uint *)(lVar2 + 0x18) <= unaff_x20) goto LAB_052c1e78;
        lVar2 = lVar2 + unaff_x20 * 4;
        *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
        FUN_052c245c();
        iVar3 = iVar3 + 1;
        if (*(int *)(unaff_x19 + 0x20) <= iVar3) break;
        lVar2 = *(long *)(unaff_x19 + 0xa8);
        if (lVar2 == 0) goto LAB_052c1e68;
      }
    }
    lVar2 = *(long *)(unaff_x19 + 0x30);
    unaff_x20 = unaff_x20 + 1;
    if (lVar2 == 0) break;
    lVar1 = *(long *)(lVar2 + 0x80);
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x18) == 0)) {
      FUN_052c35a0(lVar2);
      lVar1 = *(long *)(lVar2 + 0x80);
      if (lVar1 == 0) break;
    }
    in_OV = SBORROW8(unaff_x20,(long)*(int *)(lVar1 + 0x18));
    in_NG = (long)(unaff_x20 - (long)*(int *)(lVar1 + 0x18)) < 0;
  }
LAB_052c1e68:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


