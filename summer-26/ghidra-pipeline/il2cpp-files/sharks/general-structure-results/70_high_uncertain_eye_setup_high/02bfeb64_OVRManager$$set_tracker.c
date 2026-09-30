/*
FUNCTION_NAME: OVRManager$$set_tracker
ENTRY_POINT: 02bfeb64
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_tracker(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x23;
  
  lVar1 = thunk_FUN_01861ac0();
  if (lVar1 != 0) {
    lVar1 = thunk_FUN_01861ac0();
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x18) != 0) {
        lVar1 = *(long *)(lVar1 + 0x20);
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_01861ac0(lVar1,*(undefined8 *)(*unaff_x23 + 0x40)), lVar2 == 0)) {
          uVar3 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar3,0);
        }
        if (unaff_w20 < *(uint *)(unaff_x23 + 3)) {
          *unaff_x19 = lVar1;
          thunk_FUN_0188fd20();
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc944();
}


