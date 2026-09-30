/*
FUNCTION_NAME: OVRFaceExpressions.FaceExpressionsEnumerator$$Dispose
ENTRY_POINT: 073785bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions_FaceExpressionsEnumerator__Dispose(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x23;
  
  puVar1 = PTR_DAT_08eb4170;
  lVar5 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
  do {
    lVar3 = FUN_07148944(lVar5);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_03cf5138(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(lVar3,uVar6);
      }
    }
    lVar3 = FUN_03cab820(*(long *)(*unaff_x23 + 0xb8) + 8,lVar4,lVar5);
    bVar2 = lVar5 != lVar3;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}


