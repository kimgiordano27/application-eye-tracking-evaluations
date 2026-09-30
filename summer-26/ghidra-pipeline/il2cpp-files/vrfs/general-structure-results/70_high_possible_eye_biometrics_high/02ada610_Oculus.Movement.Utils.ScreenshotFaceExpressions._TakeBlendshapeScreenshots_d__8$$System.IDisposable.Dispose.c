/*
FUNCTION_NAME: Oculus.Movement.Utils.ScreenshotFaceExpressions.<TakeBlendshapeScreenshots>d__8$$System.IDisposable.Dispose
ENTRY_POINT: 02ada610
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context
*/


void Oculus_Movement_Utils_ScreenshotFaceExpressions_<TakeBlendshapeScreenshots>d__8__System_IDisposable_Dispose
               (void)

{
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x26;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 8))();
    unaff_x23 = unaff_x23 + 1;
    if ((long)*(int *)(unaff_x22 + 0x18) <= (long)unaff_x23) break;
    in_CY = *(uint *)(unaff_x22 + 0x18) <= unaff_x23;
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  lVar1 = FUN_03f038c8(0);
  if (lVar1 != 0) {
    FUN_04d772fc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


