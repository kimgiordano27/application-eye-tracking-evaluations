/*
FUNCTION_NAME: RealisticEyeMovements.EyeAndHeadAnimator$$GetLeftEyeDirection
ENTRY_POINT: 0202afdc
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


void RealisticEyeMovements_EyeAndHeadAnimator__GetLeftEyeDirection(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  undefined4 uStack000000000000000c;
  
  lVar4 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x22) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
        goto LAB_0202b030;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_0122ea3c();
LAB_0202b030:
  uStack000000000000000c = (*(code *)*puVar1)();
  lVar4 = thunk_FUN_0124b7d8(*(undefined8 *)PTR_DAT_027b1ab0,&stack0x0000000c);
  if (param_1 != (long *)0x0) {
    if ((lVar4 != 0) &&
       (lVar2 = thunk_FUN_0124baac(lVar4,*(undefined8 *)(*param_1 + 0x40)), lVar2 == 0)) {
      uVar3 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar3,0);
    }
    if ((int)param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    param_1[4] = lVar4;
    thunk_FUN_01286abc(param_1 + 4,lVar4);
    if (*(int *)(*(long *)PTR_DAT_027b1aa8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_024022c4(*(undefined8 *)PTR_DAT_027c5360,param_1,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_023f9844(*(long *)(unaff_x19 + 0x28),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


