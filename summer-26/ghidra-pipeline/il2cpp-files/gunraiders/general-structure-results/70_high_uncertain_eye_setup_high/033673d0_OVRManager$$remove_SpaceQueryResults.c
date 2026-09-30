/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryResults
ENTRY_POINT: 033673d0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceQueryResults(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  
  if (param_2 < 10) {
    plVar2 = *(long **)(param_1 + 0x68);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03367414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x208))(plVar2,param_2 + 0x30,*(undefined8 *)(*plVar2 + 0x210));
      return;
    }
  }
  else if (param_1 != 0) {
    uVar1 = -param_2;
    if (-1 < (int)param_2) {
      uVar1 = param_2;
    }
    FUN_033687d8(param_1,uVar1,param_2 >> 0x1f);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


