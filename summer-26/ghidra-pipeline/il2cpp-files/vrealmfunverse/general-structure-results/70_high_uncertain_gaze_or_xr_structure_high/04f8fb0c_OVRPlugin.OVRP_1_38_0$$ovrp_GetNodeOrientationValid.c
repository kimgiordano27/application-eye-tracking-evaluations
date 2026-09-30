/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodeOrientationValid
ENTRY_POINT: 04f8fb0c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin_OVRP_1_38_0__ovrp_GetNodeOrientationValid(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  
  lVar1 = FUN_031d8020(param_2,*param_1);
  if (lVar1 != 0) {
    FUN_05d1c22c(0x3f800000,lVar1,0);
    FUN_05d1c52c(lVar1,1,0);
    FUN_05d1c3b4(lVar1,0,0);
    FUN_05d1c850(lVar1,3,0);
    lVar2 = FUN_05c89340(lVar1,0);
    if (lVar2 != 0) {
      FUN_05c9caa4();
      FUN_05c89340(lVar1,0);
      FUN_04efb620();
      FUN_05d1d794(lVar1,0);
      lVar2 = FUN_05c89410(lVar1,0);
      if (lVar2 != 0) {
        FUN_05c8cb28(lVar2,0,0);
        lVar2 = FUN_05c89410(lVar1,0);
        if (lVar2 != 0) {
          FUN_05c8ca64(lVar2,*(undefined4 *)(unaff_x19 + 0x4c),0);
          return lVar1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


