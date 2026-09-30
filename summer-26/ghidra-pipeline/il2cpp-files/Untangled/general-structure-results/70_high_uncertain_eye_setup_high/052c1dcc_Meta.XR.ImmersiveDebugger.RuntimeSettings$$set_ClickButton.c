/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_ClickButton
ENTRY_POINT: 052c1dcc
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ClickButton(long param_1)

{
  long lVar1;
  long unaff_x19;
  ulong unaff_x20;
  int iVar2;
  long unaff_x21;
  
  do {
                    /* try { // try from 052c1dd0 to 053c1dd3 has its CatchHandler @ 052c1ea8 */
    if (*(long *)(param_1 + 0x18) != 0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ToggleFollowRotationButton;
    do {
      FUN_052c35a0(unaff_x21);
      param_1 = *(long *)(unaff_x21 + 0x80);
      if (param_1 == 0) {
LAB_052c1e68:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ToggleFollowRotationButton:
      if ((long)*(int *)(param_1 + 0x18) <= (long)unaff_x20) {
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
      param_1 = *(long *)(unaff_x21 + 0x80);
    } while (param_1 == 0);
  } while( true );
}


