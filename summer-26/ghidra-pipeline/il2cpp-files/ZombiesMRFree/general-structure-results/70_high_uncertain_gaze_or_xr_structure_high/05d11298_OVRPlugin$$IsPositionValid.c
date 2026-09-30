/*
FUNCTION_NAME: OVRPlugin$$IsPositionValid
ENTRY_POINT: 05d11298
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


bool OVRPlugin__IsPositionValid(undefined8 param_1)

{
  char in_NG;
  char in_OV;
  long lVar1;
  
  if (in_NG == in_OV) {
    lVar1 = FUN_04430018(param_1,0,*(undefined8 *)PTR_DAT_06fb8780);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(char *)(lVar1 + 0x38) != '\0') {
      return *(long *)(lVar1 + 0x48) != 0;
    }
  }
  return false;
}


