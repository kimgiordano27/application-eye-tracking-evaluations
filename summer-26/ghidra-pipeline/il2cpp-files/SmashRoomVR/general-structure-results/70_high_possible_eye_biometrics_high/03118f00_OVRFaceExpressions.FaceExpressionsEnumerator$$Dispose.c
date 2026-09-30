/*
FUNCTION_NAME: OVRFaceExpressions.FaceExpressionsEnumerator$$Dispose
ENTRY_POINT: 03118f00
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions_FaceExpressionsEnumerator__Dispose(void)

{
  long lVar1;
  long unaff_x19;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  FUN_029bb5e8();
  FUN_0317a03c(*(undefined8 *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x120),0,0);
  lVar1 = *(long *)(unaff_x19 + 0x1c0);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28))
    ;
    lVar1 = *(long *)(unaff_x19 + 0x1c0);
    if (lVar1 != 0) {
      fVar3 = (float)(**(code **)(lVar1 + 0x18))
                               (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      fVar4 = *(float *)(unaff_x19 + 0x1cc);
      *(undefined4 *)(unaff_x19 + 0x1cc) = uVar2;
      *(float *)(unaff_x19 + 0x1d0) = fVar3 - fVar4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


