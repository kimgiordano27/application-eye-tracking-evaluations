/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingState
ENTRY_POINT: 057502a4
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetHandTrackingState(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_02fafaac();
  }
  plVar1 = (long *)RootMotion_FinalIK_IKSolverFABRIK__MapToSolverPositionsLimited();
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (lVar2 != 0) {
    FUN_02df6fd8(&stack0x00000040);
                    /* WARNING: Subroutine does not return */
    FUN_02ecbb70(lVar2);
  }
  return 0;
}


