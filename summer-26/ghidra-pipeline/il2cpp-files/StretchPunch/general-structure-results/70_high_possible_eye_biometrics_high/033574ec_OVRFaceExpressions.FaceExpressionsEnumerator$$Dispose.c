/*
FUNCTION_NAME: OVRFaceExpressions.FaceExpressionsEnumerator$$Dispose
ENTRY_POINT: 033574ec
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long OVRFaceExpressions_FaceExpressionsEnumerator__Dispose(void)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined2 *puVar4;
  
  *(undefined1 *)(unaff_x21 + 0x5ad) = 1;
  if (unaff_x19 != 0) {
    if (*(int *)(unaff_x19 + 0x10) == 0) {
      lVar3 = **(long **)(*(long *)StringLiteral_1184 + 0xb8);
    }
    else {
      lVar3 = thunk_FUN_01ddf370(*(int *)(unaff_x19 + 0x10),0);
      thunk_FUN_01d7bb04(0);
      if (lVar3 == 0) {
        puVar4 = (undefined2 *)0x0;
      }
      else {
        iVar2 = thunk_FUN_01d7bb04(0);
        puVar4 = (undefined2 *)(lVar3 + iVar2);
      }
      if (0 < *(int *)(unaff_x19 + 0x10)) {
        iVar2 = 0;
        do {
          uVar1 = (**(code **)(*unaff_x20 + 0x1a8))();
          *puVar4 = uVar1;
          iVar2 = iVar2 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar2 < *(int *)(unaff_x19 + 0x10));
      }
    }
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


