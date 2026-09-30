/*
FUNCTION_NAME: OVRPlugin$$IsOrientationValid
ENTRY_POINT: 05d112a0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


bool OVRPlugin__IsOrientationValid(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_04430018(param_2,0,**(undefined8 **)(param_1 + 0x780));
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x38) == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = *(long *)(lVar2 + 0x48) != 0;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


