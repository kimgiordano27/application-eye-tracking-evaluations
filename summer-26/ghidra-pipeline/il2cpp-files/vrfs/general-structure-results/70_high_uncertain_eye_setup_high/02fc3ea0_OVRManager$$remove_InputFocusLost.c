/*
FUNCTION_NAME: OVRManager$$remove_InputFocusLost
ENTRY_POINT: 02fc3ea0
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_InputFocusLost(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x26;
  
  do {
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 8))();
    unaff_x23 = unaff_x23 + 1;
  } while ((long)unaff_x23 < (long)*(int *)(unaff_x22 + 0x18));
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  lVar1 = FUN_03f038c8(0);
  if (lVar1 != 0) {
    FUN_04d772fc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


