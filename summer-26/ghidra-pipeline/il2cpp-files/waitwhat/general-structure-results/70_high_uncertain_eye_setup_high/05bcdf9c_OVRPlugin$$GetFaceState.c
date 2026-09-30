/*
FUNCTION_NAME: OVRPlugin$$GetFaceState
ENTRY_POINT: 05bcdf9c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetFaceState(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_0754eb4c & 1) == 0) {
    FUN_03188a78(PTR_DAT_071167a8);
    DAT_0754eb4c = 1;
  }
  if (param_2 != 0) {
    lVar1 = FUN_03ac2e98(param_2,*(undefined8 *)PTR_DAT_071167a8);
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar2 = FUN_05bcd7dc(*(long *)(param_1 + 0x20)), lVar1 != 0)) {
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


