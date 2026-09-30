/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodePositionValid
ENTRY_POINT: 04f8fb90
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodePositionValid(void)

{
  long lVar1;
  long unaff_x19;
  
  FUN_04efb620();
  FUN_05d1d794();
  lVar1 = FUN_05c89410();
  if (lVar1 != 0) {
    FUN_05c8cb28(lVar1,0,0);
    lVar1 = FUN_05c89410();
    if (lVar1 != 0) {
      FUN_05c8ca64(lVar1,*(undefined4 *)(unaff_x19 + 0x4c),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


