/*
FUNCTION_NAME: OVRFaceExpressions.FaceExpressionsEnumerator$$Dispose
ENTRY_POINT: 050dc804
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context
*/


void OVRFaceExpressions_FaceExpressionsEnumerator__Dispose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 (*unaff_x19) [16];
  long unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  undefined1 auVar3 [16];
  long in_stack_00000088;
  
  FUN_05061f70();
  auVar3 = FUN_0506600c();
  *unaff_x19 = auVar3;
  if (unaff_w24 == 0x2d) {
    uVar1 = *(undefined8 *)*unaff_x19;
    uVar2 = *(undefined8 *)(*unaff_x19 + 8);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    auVar3 = FUN_05065dbc(uVar1,uVar2,0);
    *unaff_x19 = auVar3;
  }
  if (*(long *)(unaff_x23 + 0x28) != in_stack_00000088) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


