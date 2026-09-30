/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$get_rightEyeRotation
ENTRY_POINT: 03a44120
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 149
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_Eyes__get_rightEyeRotation
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  int in_w10;
  long unaff_x19;
  undefined8 *unaff_x20;
  double unaff_d8;
  long in_stack_00000030;
  long in_stack_00000038;
  
  while( true ) {
    *(int *)(unaff_x19 + 0x1c) = in_w10 + 1;
    if (param_1 == 0) break;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      param_1 = param_1 + (long)(int)uVar1 * 0x10;
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + 0x20) = param_3;
      *(undefined8 *)(param_1 + 0x28) = param_4;
    }
    else {
      FUN_034ba730();
    }
    uVar2 = FUN_02ffa1b8(&stack0x00000020,*unaff_x20);
    if ((uVar2 & 1) == 0) {
      FUN_02ffa1b4(&stack0x00000020,*(undefined8 *)PTR_DAT_046a7060);
      return;
    }
    UnityEngine_InputSystem_XR_TrackedPoseDriver__get_ignoreTrackingState
              ((double)in_stack_00000030 * unaff_d8,(double)in_stack_00000038 * unaff_d8);
    if (unaff_x19 == 0) break;
    in_w10 = *(int *)(unaff_x19 + 0x1c);
    param_3 = 0;
    param_4 = 0;
    param_1 = *(long *)(unaff_x19 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


