/*
FUNCTION_NAME: OVRPlugin$$ShowUI
ENTRY_POINT: 0693e9bc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__ShowUI(long param_1)

{
  undefined8 uVar1;
  long *unaff_x19;
  uint unaff_w20;
  long lVar2;
  undefined8 *unaff_x23;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0xb8);
    uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
    FUN_07cb26a0();
    if (lVar2 != 0) {
      FUN_07cb2800(lVar2,uVar1,0);
      (**(code **)(*unaff_x19 + 0x328))();
      return unaff_w20 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


