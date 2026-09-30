/*
FUNCTION_NAME: OVRPlugin$$IsPositionValid
ENTRY_POINT: 07c70460
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__IsPositionValid(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  
  FUN_0799ce68();
  FUN_07baf3bc();
  if ((*(long *)(unaff_x19 + 0x128) != 0) &&
     (lVar1 = FUN_04c6cb94(*(long *)(unaff_x19 + 0x128),*(undefined8 *)PTR_DAT_09f1f2f0), lVar1 != 0
     )) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x168);
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_09531730(uVar2,0,0);
    FUN_07baf460();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


