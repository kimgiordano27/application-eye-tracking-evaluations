/*
FUNCTION_NAME: OVRManager$$add_VrFocusLost
ENTRY_POINT: 07a1e8e0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusLost(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_07a1e91c:
      (*(code *)*puVar1)();
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0xac) = 0;
        *(undefined4 *)(lVar2 + 0xb0) = 0;
        *(undefined1 *)(lVar2 + 0xa8) = 0;
        FUN_07a1e94c();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_040b1e00();
      goto LAB_07a1e91c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


