/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_ToggleFollowTranslationButton
ENTRY_POINT: 052c1dd4
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


void Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ToggleFollowTranslationButton(void)

{
  long lVar1;
  long unaff_x19;
  ulong unaff_x20;
  int iVar2;
  long unaff_x21;
  
  while( true ) {
                    /* try { // try from 052c1dd4 to 053c1dd7 has its CatchHandler @ 052c1e98 */
                    /* try { // try from 052c1dd8 to 053c1de3 has its CatchHandler @ 052c1848 */
    FUN_052c35a0(unaff_x21);
    lVar1 = *(long *)(unaff_x21 + 0x80);
    if (lVar1 == 0) break;
    do {
      if ((long)*(int *)(lVar1 + 0x18) <= (long)unaff_x20) {
        return;
      }
      lVar1 = *(long *)(unaff_x19 + 0xa8);
      if (lVar1 == 0) goto LAB_052c1e68;
      if (*(uint *)(lVar1 + 0x18) <= unaff_x20) {
LAB_052c1e78:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      iVar2 = *(int *)(lVar1 + unaff_x20 * 4 + 0x20);
      if (iVar2 < *(int *)(unaff_x19 + 0x20)) {
        while( true ) {
          if (*(uint *)(lVar1 + 0x18) <= unaff_x20) goto LAB_052c1e78;
          lVar1 = lVar1 + unaff_x20 * 4;
          *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
          FUN_052c245c();
          iVar2 = iVar2 + 1;
          if (*(int *)(unaff_x19 + 0x20) <= iVar2) break;
          lVar1 = *(long *)(unaff_x19 + 0xa8);
          if (lVar1 == 0) goto LAB_052c1e68;
        }
      }
      unaff_x21 = *(long *)(unaff_x19 + 0x30);
      unaff_x20 = unaff_x20 + 1;
      if (unaff_x21 == 0) goto LAB_052c1e68;
      lVar1 = *(long *)(unaff_x21 + 0x80);
    } while ((lVar1 != 0) && (*(long *)(lVar1 + 0x18) != 0));
  }
LAB_052c1e68:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


