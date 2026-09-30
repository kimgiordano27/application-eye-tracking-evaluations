/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 07c741d0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__GetNodePositionValid(ulong param_1)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f4e7b0);
    *(undefined1 *)(unaff_x20 + 0x741) = 1;
  }
  plVar2 = (long *)(unaff_x19 + 0x18);
  lVar1 = *plVar2;
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x18) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_09f4e7b0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar1 = FUN_07c9d91c(0);
    *plVar2 = lVar1;
    thunk_FUN_044bb4b4(plVar2,lVar1);
    lVar1 = *plVar2;
  }
  return lVar1;
}


