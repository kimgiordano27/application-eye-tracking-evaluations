/*
FUNCTION_NAME: RealisticEyeMovements.EyeAndHeadAnimator$$GetRightEyeDirection
ENTRY_POINT: 0202b464
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 137
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_2
*/


void RealisticEyeMovements_EyeAndHeadAnimator__GetRightEyeDirection(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  undefined4 in_stack_00000008;
  
  if ((param_1 != 0) &&
     (lVar1 = thunk_FUN_0124baac(param_1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar1 == 0)) {
LAB_0202b690:
    uVar3 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar3,0);
  }
  if ((int)unaff_x19[3] != 0) {
    unaff_x19[4] = param_1;
    thunk_FUN_01286abc(unaff_x19 + 4,param_1);
    in_stack_00000008 = unaff_w22;
    lVar1 = thunk_FUN_0124b7d8(*unaff_x21,&stack0x00000008);
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_0124baac(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
    goto LAB_0202b690;
    if (1 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[5] = lVar1;
      thunk_FUN_01286abc(unaff_x19 + 5,lVar1);
      if (*(int *)(*(long *)PTR_DAT_027b1aa8 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      FUN_02402b64(*(undefined8 *)PTR_DAT_027c5370);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


