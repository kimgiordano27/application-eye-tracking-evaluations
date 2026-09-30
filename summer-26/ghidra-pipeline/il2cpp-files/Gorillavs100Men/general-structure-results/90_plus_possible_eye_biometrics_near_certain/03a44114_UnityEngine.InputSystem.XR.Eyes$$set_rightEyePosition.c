/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$set_rightEyePosition
ENTRY_POINT: 03a44114
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 146
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_Eyes__set_rightEyePosition(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  double unaff_d8;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000030;
  long in_stack_00000038;
  
  do {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar3 == 0) break;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar1 * 0x10;
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar3 + 0x20) = in_stack_00000000;
      *(undefined8 *)(lVar3 + 0x28) = in_stack_00000008;
    }
    else {
      FUN_034ba730();
    }
    uVar2 = FUN_02ffa1b8(&stack0x00000020,*unaff_x20);
    if ((uVar2 & 1) == 0) {
      FUN_02ffa1b4(&stack0x00000020,*(undefined8 *)PTR_DAT_046a7060);
      return;
    }
    in_stack_00000000 = 0;
    in_stack_00000008 = 0;
    UnityEngine_InputSystem_XR_TrackedPoseDriver__get_ignoreTrackingState
              ((double)in_stack_00000030 * unaff_d8,(double)in_stack_00000038 * unaff_d8);
  } while (unaff_x19 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


