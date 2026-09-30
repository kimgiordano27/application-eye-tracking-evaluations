/*
FUNCTION_NAME: OVRPlugin$$GetControllerState6
ENTRY_POINT: 02c1d564
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState6(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  uint unaff_w22;
  
  FUN_02b0e594(param_1,param_2,0);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  if ((param_1 != 0) &&
     (lVar1 = thunk_FUN_01861ac0(param_1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar1 == 0)) {
    uVar2 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar2,0);
  }
  if (unaff_w22 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[(ulong)unaff_w22 + 4] = param_1;
    thunk_FUN_0188fd20(unaff_x19 + (ulong)unaff_w22 + 4,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


