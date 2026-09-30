/*
FUNCTION_NAME: FUN_0267a960
ENTRY_POINT: 0267a960
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0267a960(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = OVRPlugin__SetControllerLocalizedVibration(*(long *)(param_1 + 0x10),0);
    FUN_025cb0b0(0,uVar1,2,0);
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      FUN_025cb0b4(0,2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


