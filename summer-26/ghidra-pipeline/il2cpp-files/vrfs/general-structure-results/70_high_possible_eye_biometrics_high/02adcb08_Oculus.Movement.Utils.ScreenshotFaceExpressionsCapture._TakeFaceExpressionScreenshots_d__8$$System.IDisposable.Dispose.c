/*
FUNCTION_NAME: Oculus.Movement.Utils.ScreenshotFaceExpressionsCapture.<TakeFaceExpressionScreenshots>d__8$$System.IDisposable.Dispose
ENTRY_POINT: 02adcb08
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


void Oculus_Movement_Utils_ScreenshotFaceExpressionsCapture_<TakeFaceExpressionScreenshots>d__8__System_IDisposable_Dispose
               (ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_015c2790();
  }
  thunk_FUN_01656ef8(*(long *)(param_2 + 0xb8) + 8);
  lVar1 = thunk_FUN_015d056c(*unaff_x19);
  if (lVar1 != 0) {
    FUN_02adcb48(lVar1,*(undefined8 *)PTR_DAT_06dad710);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


