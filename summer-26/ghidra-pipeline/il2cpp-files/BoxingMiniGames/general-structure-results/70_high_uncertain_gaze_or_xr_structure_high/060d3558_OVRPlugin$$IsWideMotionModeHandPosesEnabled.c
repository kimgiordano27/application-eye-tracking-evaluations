/*
FUNCTION_NAME: OVRPlugin$$IsWideMotionModeHandPosesEnabled
ENTRY_POINT: 060d3558
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_possible_biometrics_hits_2
*/


void OVRPlugin__IsWideMotionModeHandPosesEnabled(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  undefined8 uVar4;
  undefined8 *unaff_x24;
  
  do {
    lVar2 = FUN_05e5e514(param_1);
    if (lVar2 != 0) {
      uVar4 = *unaff_x24;
      lVar3 = thunk_FUN_0367fd24(lVar2,uVar4);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(lVar2,uVar4);
      }
    }
    param_1 = FUN_0367c3c8();
    bVar1 = param_1 != unaff_x21;
    unaff_x21 = param_1;
  } while (bVar1);
  return;
}


