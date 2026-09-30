/*
FUNCTION_NAME: OVRPlugin$$GetControllerHapticsState
ENTRY_POINT: 05bc0634
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerHapticsState(void)

{
  long lVar1;
  long lVar2;
  undefined4 in_w8;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  
  while( true ) {
    *(undefined4 *)(unaff_x21 + unaff_x22 * 4) = in_w8;
    lVar1 = unaff_x22 + 1;
    if (lVar1 == 0xd) {
      return;
    }
    if (*unaff_x19 == 0) break;
    unaff_x21 = FUN_05bc7eec();
    lVar2 = FUN_05bc7eec();
    if (lVar2 == 0) break;
    if ((ulong)*(uint *)(lVar2 + 0x18) <= unaff_x22 - 7U) {
LAB_05bc0668:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    if (unaff_x21 == 0) break;
    if ((ulong)*(uint *)(unaff_x21 + 0x18) <= unaff_x22 - 7U) goto LAB_05bc0668;
    in_w8 = *(undefined4 *)(lVar2 + lVar1 * 4);
    unaff_x22 = lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


